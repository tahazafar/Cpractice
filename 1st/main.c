#include <stdio.h>
#include <stdlib.h>

#define DIM 10

int main(void)
{
  int n1, n2, i, j,k;
  float v1[DIM], v2[DIM];

  /* array initialization */
  printf("N1: ");
  scanf("%d", &n1);
  printf("N2: ");
  scanf("%d", &n2);
  if (n1<0 || n2<0 || n1>DIM || n2>DIM) {
    printf("Wrong values.\n");
    exit (1);
  }
  for (i=0; i<n1; i++) {
    printf("v1[%d]: ", i);
    scanf("%f", &v1[i]);
  }

  /* max length search */
  for (i=0; i<n1; i++) {
    float sum=v1[i];

int    num = 1;
    for (j=i; j<i+n2; j++) {
      if ((j+1)<n1) {
        sum+=v1[j+1];
        num++;
      }
    }
      for (k=i; k>i-n2; k--) {
      if ((k-1)>=0) {
        sum+=v1[k-1];
        num++;
      }
    }
     v2[i] =  sum / num;
  }

  /* output result */
  printf("v2: ");
  for (i=0; i<n1; i++) {
    printf("%.2f ", v2[i]);
  }
  printf("\n");

  return 0;
}
