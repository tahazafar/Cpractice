#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct {

char *str1;
char *str2;
} words;

void LoadData(words **,int *);

int main()
{
    words *head;
    int num;

    LoadData(&head,&num);
printf("%s \n",head->str1);
printf("%s \n",head->str2);

    return 0;
}


void LoadData(words **x,int *num){
words *head;
head=(words*) malloc(sizeof(words));

head->str1="taha";
head->str2="ali";

*num=*num + 1;
*x=head;
}
