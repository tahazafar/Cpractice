#include <stdlib.h>
#include <stdio.h>
#include <string.h>



void recursion(char *,char *,char *,int ,int ,int ,int ,char *);
int main()
{


   char   set1[2]={'A','B'};
    char  set2[2]={'1','2'};
     char set3[3]={'X','Y','Z'};
    char set4[3];

    recursion(set1,set2,set3,2,2,3,0,set4);

    return 0;
}

void recursion(char *seta,char *setb,char *setc,int a,int b,int c,int level,char *myarray)
                       {
                           int i,j,k,m;

if(level>=3){
for(m=0;m<3;m++)
    printf("%c",myarray[m]);
    printf("\n");

    return;
}

if(level==0){

for(j=0;j<2;j++){

    myarray[level]=seta[j] ;

    recursion(seta,setb,setc,a,b,c,level+1,myarray);



}
}

if(level==1){

for(k=0;k<2;k++){

    myarray[level]=setb[k] ;

    recursion(seta,setb,setc,a,b,c,level+1,myarray);

  }
}

if(level==2){

for(i=0;i<3;i++){

    myarray[level]=setc[i] ;

    recursion(seta,setb,setc,a,b,c,level+1,myarray);


          }

 }


return;
}




