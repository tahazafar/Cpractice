#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX2 20

typedef struct list_t{
char *word;
int freq ;
struct list_t *next;
} list ;

File2list(FILE *);
printlist(list*);


int main(int argc,char *argv[])
{   char line[100],*pch,*word;
    if (argc<2){
        printf("error in number of arguments");
        printf("RUN AS %s",argv[0]);
        exit(1);
    }

    FILE *f1,*f2;
    list *head;
    f1=fopen(argv[2],"r");
    f2=fopen(argv[1],"r");
   head=File2list(f2);
   while(fgets(line,100,f1)!=NULL){
      pch = strtok (line," ;.-");
  while (pch != NULL)
  { pch[0]=tolower(pch[0]);
    checklist(pch,head);
    pch = strtok (NULL, " ;.-");
  }

}

  printlist(head);



    return 0;
}



 File2list(FILE *f2){
    char line[MAX2],str[MAX2];
    list *head,*tmp;
    head=NULL;
while(fgets(line,20,f2)!=NULL){

if(line[strlen(line)-1]=='\n')
    line[strlen(line)-1]='\0';
if (head==NULL){
    head=malloc(sizeof(list));
    head->word=strdup(line);
    head->freq=0;
    head->next=NULL;
}
 else{
        tmp=head;
 while (tmp->next!=NULL){
    tmp=tmp->next;

 }
 tmp->next=malloc(sizeof(list));
 tmp->next->word=strdup(line);
 tmp->next->freq=0;
 tmp->next->next=NULL;
}



}
return head;
}



    checklist(char *pch,list *head){
    list *tmp;
tmp=head;
while(tmp!=NULL){
    if (strcmp(pch,tmp->word)==0)
        tmp->freq++;
    tmp=tmp->next;
}




    }












 printlist(list *head){
list *tmp;
tmp=head;
while(tmp!=NULL){
    printf("%s ",tmp->word);
    printf("%d\n",tmp->freq);
    tmp=tmp->next;
}



}
