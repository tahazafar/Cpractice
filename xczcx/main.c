#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   int i;
    int occur[26],flag=0;
    char str1[]="TAHA";
    char str2[]="ahat";
  for(i=0;i<26;i++)
    occur[i]=0;

  for(i=0;i<strlen(str1);i++)
    occur[tolower(str1[i])-'a']++;

  for(i=0;i<strlen(str2);i++)
    occur[tolower(str2[i])-'a']--;

  for(i=0;i<26;i++)
    if(occur[i]==0);
    else
        flag=1;

    if(flag==1)
        printf("fuck off");
    return 0;
}
