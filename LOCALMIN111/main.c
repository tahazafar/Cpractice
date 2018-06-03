#include <stdio.h>

#define N 5

int main(void)
{
  int i, j, matrix[N][N],flag1,flag2;

  /* input matrix */
  for (i=0; i<N; i++) {
    for (j=0; j<N; j++) {
      printf("Element [%d, %d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }
for(j=0;j<N;j++){
        for(i=0;i<N;i++){
            { flag1=0;flag2=1;if(j+1<5 ){
                             if(matrix[i][j] < matrix[i][j+1])
                                {flag1=1;}else flag2=0;}
                                if( j-1>-1 ){
                              if(matrix[i][j]<matrix[i][j-1])
                              {flag1=1;}else flag2=0;}
                              if(i-1>-1){
                             if(matrix[i][j] < matrix[i-1][j]){flag1=1;}else flag2=0;}
                             if(j-1>-1 && i-1>-1  ){
                             if(matrix[i][j] < matrix[i-1][j-1]){flag1=1;}else flag2=0;}
                             if(j+1<5&& i+1<5  ){
                            if(matrix[i][j] < matrix[i+1][j+1]){flag1=1;}else flag2=0;}
                            if(j+1<5 && i-1<-1){
                             if(matrix[i][j] < matrix[i-1][j+1]){flag1=1;}else flag2=0;}
                             if(j-1>0-1&& i+1<5  ){
                             if(matrix[i][j] < matrix[i+1][j-1]){flag1=1;}else flag2=0;}
                             if(i+1<5  ){
                             if(matrix[i][j] < matrix[i+1][j]){flag1=1;}else flag2=0;}
                                if(flag1==1 && flag2==1){
                                    printf("Local Minimum value=%d at row=%d, column=%d\n",matrix[i][j],i,j);

                                }}}}

                                return 0;}



