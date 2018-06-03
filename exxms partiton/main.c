#include <stdio.h>
#include <stdlib.h>

int main()
{


   int mat[3][3]={{0,0,0},{0,1,0},{0,0,1}};
   int sol[3][3]={{0,0,0},{0,0,0},{0,0,0}};

   powerset(mat,sol,3,3,0,9,6);

    return 0;
}

int powerset(int mat[3][3],int sol[3][3],int r,int c,int pos
             ,int total,int minimum){
int i,j;
int flag,required1,required2;

if(pos>=total){
       flag=0,required1=0,required2=0;
    for(i=0;i<r&&flag==0;i++){
        for(j=0;j<c&&flag==0;j++){
            if(sol[i][j]==0)
            required1++;
            else
                required2++;

                 if(mat[i][j]==0 ){
                  if(sol[i][j]==0){
                    flag=0;}
                 else
                    {flag=1;
                      }
        }}}


         if(flag==0){
 if(required1>=minimum ||required2>=minimum)
    flag=0;
 else
    flag=1;
    }


 if(flag==0){
         printf("{");
         for(i=0;i<r;i++){
        for(j=0;j<c;j++){
      if(sol[i][j]==0)
        printf("(%d %d),",i,j);
       }
}
     printf("} \n");

  printf("{");
         for(i=0;i<r;i++){
        for(j=0;j<c;j++){
      if(sol[i][j]!=0)
        printf("(%d %d),",i,j);
       }
}
     printf("} \n");

 }


return;
}

sol[pos/r][pos%c]=0;
powerset(mat,sol,c,r,pos+1,total,minimum);
sol[pos/r][pos%c]=1;
powerset(mat,sol,c,r,pos+1,total,minimum);


 return;







             }
