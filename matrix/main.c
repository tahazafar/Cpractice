#include <stdio.h>
#include <stdlib.h>

int main()
{
  int mat[3][4]={{2,3,1,2},{6,4,2,5},{2,4,3,2}};
  int k=10;
  int mark[3][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0}};
  int myarray[12]={0,0,0,0,0,0,0,0,0,0,0,0};

  int r=3,c=4;
  balance(mat,r,c,myarray,k,0,0,mark);

  return 0;
}

void balance(int mat[3][4],int r,int c,int *myarray,int sum,int level,
             int newsum,int mark[3][4]){

int i , j ,k ;
if(newsum>=sum)
{
    if(newsum==sum){
for(i=0;i<r*c;i++)
        printf("%d",myarray[i]);
       printf("\n");
       return;
     }
     return;
     }



for(j=0;j<r;j++){
    for(k=0;k<c;k++){
        if (mark[j][k]==0){
            mark[j][k]=1;
            myarray[level]=mat[j][k];
            newsum+=mat[j][k];
           balance(mat,r,c,myarray,sum,level+1,
             newsum,mark);
              newsum-=mat[j][k];
              mark[j][k]=0;
             myarray[level]=0;
        }



}
}
             return;}






