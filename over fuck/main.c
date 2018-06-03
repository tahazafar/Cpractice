#include <stdio.h>
 #include <string.h>

#define MAX 100

 int main(void)
{
 char string[MAX+1], c;
 int i, j, length;

 printf("Input string: ");
 scanf("%s", string);

 length = strlen(string);
 for (i=0; i<length; i++) {
/* save the first char */
 c = string[0];

 /* left shift all chars */
 for (j=0; j<length-1; j++) {
 string[j] = string[j+1];
 }

 /* copy the saved char in the final position */
 string[length-1] = c;

 printf("Rotated string (rotation %d): %s\n", i+1, string);
 }

 return 0;
 }
