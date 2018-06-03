#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{ char str[20]="aa;;bbbab;" ;
char a,b;
int  myarray[10]={0,0,0,0,0,0,0,0,0,0};
int i,j;
   for(i=0;i<strlen(str)-1;i++){
        a=str[i];
    for(j=i+1;j<strlen(str);j++){
        b=str[j];
        if(a==b)
        myarray[j]=1;


    }
   }
   for(i=0;i<strlen(str);i++){
    if(myarray[i]==0)
            printf("%c",str[i]);
   }
    return 0;
}
