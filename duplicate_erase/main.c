#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void erase_dup(char *);

int main()
{
    erase_dup("aa;;;bbbab");
    return 0;
}
 void erase_dup(char *str){

 int i,j,k=0;
 char c;
 char newstr[strlen(str)+1];
 int check[strlen(str)];
 for(i=0;i<strlen(str);i++)
    check[i]=0;



 for(i=0;i<strlen(str);i++){
        c=str[i];
    if(check[i]==0){
    for(j=i;j<strlen(str);j++){


        if(str[j]==c)
            check[j]=1;
    }
 newstr[k]=c;
        k++;
 }
 }
 newstr[k]='\0';
 printf("%s",newstr);
 }
