#include <stdio.h>
#include <stdlib.h>


int main()
{


   int s[8]={1,2,3,4,5,6,7,8};
   int m[5][8]={{1,2,3,0,0,0,0,0},{2,3,7,0,0,0,0,0}
   ,{7,8,0,0,0,0,0,0},{3,4,0,0,0,0,0,0},{4,5,6,0,0,0,0,0}};

   cover(m,5,3);

    return 0;
}


void cover(int mat[][8],int r,int subsets){
int s[8]={1,2,3,4,5,6,7,8};
int mark[5]={0,0,0,0,0};
int myarray[3]={0,0,0};
recursion(mat,r,subsets,0,s,8,0,myarray);




}



void recursion (int mat[][9],int r,int subsets,int level,int *s,int elem,
               int pos,int *myarray ){
int i;
if(level>=subsets){
  for(i=0;i<subsets;i++)
    printf("%d",myarray[i]);
  printf("\n");
   return;

}

for(i=pos;i<r;i++){

  myarray[level]=i;

recursion (mat,r,subsets,level+1,s,elem,
               i+1,myarray )  ;



}


return;




}
