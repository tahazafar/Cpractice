#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,j;
    char str[]="examination";
     char a;
     printf("%s\n",str);

    for(i=0;i<strlen(str)-1;i++){
            a=str[0];
        for(j=0;j<strlen(str)-1;j++)
            str[j]=str[j+1] ;

            str[strlen(str)-1]=a;
            printf("%s\n",str);

    }
    return 0;
}
