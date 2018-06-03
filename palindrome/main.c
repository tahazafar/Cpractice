#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int palindrome(char *,int);
static int counts=0;
int main()
{
    char str[]="mmmmm";
    int ispal=0,l;
    l=strlen(str);

    ispal+=palindrome(str,l);

    printf("%d \n",ispal);


    return 0;
}
/*
int palindrome(char *str,int l){

if((*str)=='\0')
 return ;

 palindrome(str+1,l-1);

if(*(str)==*(str-l))
    return counts++;
else
    return counts ;




}*/


int palindrome( char *str, int length )
{

   if ( length < 1 )
   {
      return 1; /* no more chars to compare, its a palindrome */
   }
   if ( str[0] == str[length-1] )            /* Are the two ends same? */
   {
      return palindrome( str+1, length-2 ); /* continue checking */
   }
   else
   {
      return 0;      /* comparison failed, not a palindrome */
   }
}
