#include <stdio.h>
#include <stdlib.h>


int perm_rep(int*,int*,int*,int,int,int,int);

int main()
{
  int value[3]={1,2};
  int sol[2]={0,0};
  int mark[2]={2,1};
  int n=3,pos=0,counts=0,n_dist=2;
  int total;

  printf("permutations with reps");
  total=perm_rep(value,sol,mark,n,pos,counts,n_dist);
   printf("total number of perm with reps \n %d",total);

    return 0;
}

int perm_rep(int *val,int *sol,int *mark,int n,
             int pos,int counts,int dist)
{
 int i;



 if(pos>=n){
   printf("{");
    for(i=0;i<n;i++)
        printf("%d",sol[i]);

   printf("} \n");
   return counts + 1;
 }

 for(i=0;i<dist;i++){
    if(mark[i]>0){

        mark[i]--;
        sol[pos]=val[i];
        counts=perm_rep(val,sol,mark,n,pos+1,counts,dist);
        mark[i]++;
    }

 }
 return counts ;



}
