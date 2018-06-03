#include <stdio.h>
#include <stdlib.h>


int main()
{
    int mat[3][4]={{5,2,3,1},{3,1,6,4},{3,0,5,2}};
    matrixmax(mat,3,4);
    return 0;
}

void matrixmax(int *mat[4],int r,int c){

int xoff[8]={1,-1,0,0,1,-1,1,-1};
int yoff[8]={0,0 ,1,-1,-1,1,1,-1};
int x,y,i,j,flag,k;
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
            flag=0;
            for(k=0;k<8 && flag==0;k++)
{    x=i+xoff[k];
     y=j+yoff[k];
     if(x<=r && x>=0 && y<=c && y>=0){

        if(mat[i][j]<=mat[x][y])

            flag=1;
     }

}
if (flag==0)
            printf("%d %d \n",i,j);

    }
}


}
