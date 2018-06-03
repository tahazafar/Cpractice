#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

typedef struct mylist{
char *word;
int frequency;
struct mylist *next;

}list_t;

list_t * convertolist(char *word,int len,list_t *head);

list_t * readfile(FILE *fp,list_t *head);

int main(int argc,char *argv[])
{
    list_t *head=NULL;

 FILE *fp;

 fp=fopen(argv[1],"r");
 if(argc!=2)
    exit(1);

 head=readfile(fp,head);

  printlist(head);


    return 0;
}


list_t * readfile(FILE *fp,list_t *head){
int i,j;
char line[MAX], newline[MAX],word[MAX];

while(fgets(line,100,fp)!=NULL){

for(i=0;i<strlen(line)+1;i++){
    newline[i]=tolower(line[i]);

    }
j=0;
   for(i=0;i<strlen(newline)+1;i++) {

      if(newline[i]==' ' || newline[i]=='\0'  ){
        word[j]='\0';
        j=0;
       head=convertolist(word,strlen(word)+1,head);

        }
       else {
         word[j]=newline[i];
          j++;

    }
}




}
return head;

}





list_t* convertolist(char *word,int len,list_t *head){
    list_t *tmp;

int found=0;

if(head!=NULL)
   found = traverselist(word,head);

if (found==1)
{
    return head;
}

else{

tmp=malloc(sizeof(list_t));
tmp->word=malloc(len*sizeof(char));
strcpy(tmp->word,word);
tmp->frequency=1;
tmp->next=head;

    /* to be written */
}

head=tmp;
return head;
}


int traverselist(char *word,list_t *head){

    list_t *tmp;
     tmp=head;
     int found=0;
while(tmp!=NULL && found==0){

    if(strcmp(tmp->word,word)==0){

    found=1;
    tmp->frequency++;}
    else {
    tmp=tmp->next;}


}


return found;
}



void printlist(list_t *head){


list_t *tmp=head;

while(tmp!=NULL){

    printf("word is %s " ,tmp->word);

    printf("frequency is %d \n",tmp->frequency);

    tmp=tmp->next;
}



}

