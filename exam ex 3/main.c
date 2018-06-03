#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void activity_selection(int **,int *,int);


int main()
{  int **m,*v,i;
v=malloc(5*sizeof(int));
m=malloc(5*sizeof(int*));
for(i=0;i<5;i++)
    m[i]=malloc(sizeof(int));
    for(i=0;i<5;i++)
    v[i]=0;

    m[0][0]=1;
     m[0][1]=4;
    m[1][0]=3;
      m[1][1]=5;
       m[2][0]=4;
       m[2][1]=6;
        m[3][0]=5;
         m[3][1]=9;
         m[4][0]=8;
         m[4][1]=9;
activity_selection(m,v,5);
for(i=0;i<5;i++)
    printf("%d",v[i]);
    return 0;
}

void activity_selection(int **m,int *v,int n){
int level=0,i;
int *bestsol;
int diff=0;
bestsol=malloc(n*sizeof(int));

my_powerset(m,v,n,bestsol,level,&diff);
for(i=0;i<n;i++)
v[i]=bestsol[i];


return 0;
}


void my_powerset(int **m,int *v,int n,int *bestsol,int level,int *diff){
int maxi=INT_MIN;
int mini=INT_MAX;



if(level>=n){

    check(m,v,n,bestsol,&maxi,&mini,diff);
return;
}


v[level]=0;

my_powerset(m,v,n,bestsol,level+1,diff);
v[level]=1;
my_powerset(m,v,n,bestsol,level+1,diff);
return ;
}



void check(int **m,int *v,int n,int *bestsol,
           int *maxi,int *mini,int *diff){
           int mymat[n][2];
           int time=0;
           int i;
   if(check_extreme(m,v,n)==0)
            return;

   else{

    for(i=0;i<n;i++){
    if(v[i]==1){
   mymat[i][0]=m[i][0] ;
    mymat[i][1]=m[i][1];
        }
        else{


       mymat[i][0]=0 ;
    mymat[i][1]=0;
        }
}

for(i=0;i<n;i++){
          if(v[i]==1){

  time+=mymat[i][1]-mymat[i][0];


          } }


          if((*diff)<time){
            (*diff)=time;
           for(i=0;i<n;i++)
            bestsol[i]=v[i];
          }




   }}




   int check_extreme(int **m,int *v,int n){
   int **newmat;
   int i,j;
   newmat=malloc(n*sizeof(int*));
   for(i=0;i<n;i++){
    newmat[i]=malloc(2*sizeof(int));
   }
   for(i=0;i<n;i++){
    if(v[i]==1){
        newmat[i][0]=m[i][0];
        newmat[i][1]=m[i][1];
    }
    }

    for(i=0;i<n;i++){
        if(v[i]==1){
          for(j=i+1;j<n;j++){
            if(v[j]==1){
             if(newmat[i][1]>newmat[j][0] )

                return 0 ;
    /*         if(newmat[j][1]>newmat[i][0])

                return 0;
                */
            }

          }

        }

   }

   return 1;}





