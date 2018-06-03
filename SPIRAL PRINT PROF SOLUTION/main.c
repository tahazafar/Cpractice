#include <stdio.h>

#define N 4

int main(void)
{
  int i, j, matrix[N][N];

  /* input matrix */
  for (i=0; i<N; i++) {
    for (j=0; j<N; j++) {
      printf("Element [%d, %d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  /* print matrix elements */
  for (i=0; i<3; i++) {
    /* from left to right */
    for (j=i; j<N-1-i; j++) {
      printf("Element [%d, %d]: %d\n", i, j, matrix[i][j]);
    }

    /* from top to bottom */
    for (j=i; j<N-1-i; j++) {
      printf("Element [%d, %d]: %d\n", j, N-1-i, matrix[j][N-1-i]);
    }

    /* from right to left */
    for (j=N-1-i; j>i; j--) {
      printf("Element [%d, %d]: %d\n", N-1-i, j, matrix[N-1-i][j]);
    }

    /* from bottom to top */
    for (j=N-1-i; j>i; j--) {
      printf("Element [%d, %d]: %d\n", j, i, matrix[j][i]);
    }
  }

  if (N % 2) {
    printf("Element [%d, %d]: %d\n", N/2, N/2, matrix[N/2][N/2]);
  }

  return 0;
}
