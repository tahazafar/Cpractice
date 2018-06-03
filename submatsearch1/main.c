#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 3

int main(void)
{
  int i, j,flag1,n,m,k,l,a,g,h;
  char matrix[N][N],submatrix[M][M],newmat[N][N];



  /* input matrix */
  for (j=0; j<N; j++) {
    for (i=0; i<N; i++) {
      printf("Element [%d, %d]: ", j, i);
      scanf("%c%*c", &matrix[j][i]);

    }
  }

  for (j=0; j<M; j++) {
    for (i=0; i<M; i++) {
      printf("Element [%d, %d]: ", j, i);
      scanf("%c%*c", &submatrix[j][i]);

    }
  }
for(j=0;j<N;j++){
        for(i=0;i<N;i++){ flag1=1;

                for(l=0;l<M && flag1==1;l++){

                        for(k=0;k<M && flag1==1;k++){

                            if(matrix[j+l][i+k]!=submatrix[l][k]){
                                flag1=0;

                            }

                        }
            }if(flag1==1){printf("yes0 %d %d\n",j,i);
            for(g=0;g<M;g++){
                for(h=0;h<M;h++){
                        newmat[j+g][i+h]=submatrix[g][h];}



                }
            }
            }}
                 for(g=0;g<N;g++){
                for(h=0;h<N;h++){ if(newmat[g][h]=='#' || newmat[g][h]=='*'){
                     printf("%c",newmat[g][h]);}else printf("1");} printf("\n");}

            return 0 ;}
