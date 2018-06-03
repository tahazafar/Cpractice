#include <stdio.h>
#include <stdlib.h>
#define N 6
int main()
{

    int sol;
    int a;
    int narray[N]={3,5,1,2,1,1,2};
    int *solarray;
    int start=1;
    int pos=0;
    int best=7;
    solarray=(int *)malloc(N*sizeof(int));
    recursive(&sol,narray,solarray,&a,&start,&pos,&best);

}
void recursive(int *sol,int *narray,int *solarray,int *a,int *start,int *pos,int *best){
    int i;
if( start>1){
        if(a>best)
          return;
          else storebestcomb(narray,sol,solarray);
          best =a;
          return;}

          for (i=start;i<N;i++){
            sol=sol+narray[i];
            solarray[*pos]= i;
            recursive(sol,narray,solarray,a,start+1,pos+1,best);
            sol=sol-narray[i];
            solarray[*pos]=0;
            a--;
            return;}}


           void storebestcomb(int *narray,int *sol,float *solarray){
             int  i;
               printf("Best solution until now");

               for(i=0;i<N;i++){
                if(solarray[i]!=0){
                    printf("%d",narray[i]);
                    printf("\n");}
                    else
                    continue;

                }
                printf("done");

                }






















