#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringsearch(char*,int * ,int *);
int main()
{    int start;
     int length;

    stringsearch("aaaaaabbcccddddeeeee",&start,&length);

    printf("start=%d,length=%d",start,length);
    return 0;
}

void stringsearch(char *str,int *start,int *length){

int i,j;
int start1;
int length1=0,l;
char c;
for(i=0;i<strlen(str)+1;i++){
        c=str[i];
        l=0;
    for(j=i;j<strlen(str)+1;j++){
        if(str[j]==c){
        l++;
        if(l>length1){
            length1=l;
            start1=j-l+1;
        }
        }
        else
            break;


    }
}




*length =length1;
*start =start1;





}

