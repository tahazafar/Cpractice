#include <stdio.h>

#define DIM1 5
#define DIM2 3

int main(void)
{
  int i, j, r, c, flag;
  char m1[DIM1][DIM1], m2[DIM2][DIM2], aux[DIM1][DIM1];

  /* read in the first matrix */
  printf("Input matrix 1\n");
  for (i=0; i<DIM1; i++) {
    for (j=0; j<DIM1; j++) {
      printf("Element [%d, %d] : ", i, j);
      scanf("%c%*c", &m1[i][j]);
      aux[i][j] = 0;
    }
  }

  /* read in the second matrix */
  printf("Input matrix 2\n");
  for (i=0; i<DIM2; i++) {
    for (j=0; j<DIM2; j++) {
      printf("Element [%d, %d] : ", i, j);
      scanf("%c%*c", &m2[i][j]);
    }
  }

  /* computation */
  for (i=0; i<=DIM1-DIM2; i++) {
    for (j=0; j<=DIM1-DIM2; j++) {
      flag = 1;
      for (r=0; r<DIM2 && flag==1; r++) {
        for (c=0; c<DIM2 && flag==1; c++) {
          if (m1[i+r][j+c] != m2[r][c]) {
            flag = 0;
          }
        }
      }
      if (flag == 1) {
        for (r=0; r<DIM2; r++) {
          for (c=0; c<DIM2; c++) {
            aux[i+r][j+c] = 1;
          }
        }
      }
    }
  }

  /* output result */
  for (i=0; i<DIM1; i++) {
    for (j=0; j<DIM1; j++) {
      printf("%c", (aux[i][j]==1) ? m1[i][j] : ' ');
    }
    printf("\n");
  }

  return 0;
}
