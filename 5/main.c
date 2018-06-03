#include <stdio.h>
#include <stdlib.h>

int main()
{    float flow[4]={10,-5,7,-8};
     float *bestsol,*sol;
     int *mark,i;
     float minimum=10000;
     float maximum=-10000;
     float diff=10000;
     bestsol=malloc(4*sizeof(float));
     mark=malloc(4*sizeof(int));
     sol=malloc(4*sizeof(float));
     for(i=0;i<4;i++)
      mark[i]=0;
     balance(flow,bestsol,sol,mark,4,0,&minimum,&maximum,&diff);

   for(i=0;i<4;i++)
     printf("%.1f \n",bestsol[i]);

     return 0;
}

void balance(float *flow,
             float *bestsol,float *sol,
             int *mark,int tot,int level,float *minimum,float *maximum,
             float *diff){

int i,j;
if(level>=tot){/*
for(j=0;j<tot;j++)
 printf("%.1f ",sol[j]);
 printf("\n");*/

 check(minimum,maximum,bestsol,sol,diff);
return;
}



for(i=0;i<tot;i++){
    if(mark[i]==0){
            mark[i]=1;

    sol[level]=flow[i];
    balance(flow,bestsol,sol,mark,4,level+1,minimum,maximum,diff);
    mark[i]=0;
    }
}

return;

}





void check(float *minimum,float *maximum,float *bestsol,float *sol,float *diff){

int i , j ;
float maxi=-10000,mini=10000;
float sum=0;
for(i=0;i<4;i++){
    sum+=sol[i];
    if(sum>maxi)
   maxi=sum;
   if (sum<mini)
    mini=sum;

}


if((maxi-mini)<*diff){
    for(i=0;i<4;i++){
    bestsol[i]=sol[i];

  }
  *maximum=maxi;
  *minimum=mini;
   *diff=maxi-mini;
}
}











