#include <stdio.h>
#include <string.h>

#define   MAX     100

int main(void)
{
  char string[MAX+1];
  int i, j, k, length;

  printf("Input string: ");
  scanf("%s", string);

  length = strlen(string);
  for (i=0; i<length; i++) {
  printf("\n");
  for (j=i+1;j<strlen(string);j++)
    printf("%c",string[j]);
  for(k=0;k<=i;k++)
    printf("%c",string[k]);
  }
  return 0;
}
