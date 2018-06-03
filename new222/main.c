#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void mat_search(int **, int , int , int*,int**,int *);
int main()
{
    int maxi=INT_MIN;
    int **mat,n=4,i,j,k=0,*myarray,**result;
    mat=malloc(n*sizeof(int*));
    myarray=malloc(2*n*sizeof(int));
   result=malloc(n/2 *sizeof(int *));
   for(i=0;i<n/2;i++)
   {
       result[i]=malloc(n/2*sizeof(int));
   }
   for(i=0;i<n;i++){
       mat[i]=malloc(n*sizeof(int));
    }
 for(i=0;i<2*n;i++)
    myarray[i]=0;

  for(i=0;i<n;i++){
        for(j=0;j<n;j++){
       mat[i][j]=k++;
    }
  }
mat_search(mat,n,0,myarray,result,&maxi);
    return 0;
}


void mat_search(int **mat,int n,int level,int *myarray,int**result,int *maxi){
int i;
if(level>=2*n){
check(mat,n,myarray,result,maxi);
return;
}


for(i=0;i<2*n;i++){
myarray[level]=1;
mat_search(mat,n,level+1,myarray,result,maxi) ;
myarray[level]=0;



}

return;

}

void check(int **mat,int n,int *myarray,int **result,int *maxi){






}
