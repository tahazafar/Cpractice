#include <stdio.h>
#include <stdlib.h>
#include<string.h>
static int counts=0;

int main()
{
    char str[] = "  Th is is a string with spac es  !";

    whitespaces(str);
    printf("%d",counts);
    return 0;
}
int whitespaces(char *str){

if((*str)=='\0'){

    return ;
}
else

whitespaces((str+1));

if((*str)==' '){
 counts++;
return counts;
}

}
