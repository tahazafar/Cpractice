#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_s{

char *name;
char *surname;
struct list_s *next;

} list_t;

int list_insert(list_t *,char*,char*);
list_t *mem_alloc(char*,char*);

int main(){

    list_t *head=NULL;
    int i;

head=list_insert(head,"a","f");
head=list_insert(head,"b","h");

while(head!=NULL){
    printf("%s",head->name);
    head=head->next;
}


    return 0;
}

int list_insert(list_t *head,char*surname,char*name){

list_t *newhead,*newe,*tmp;
newhead=head;

newe=mem_alloc(surname,name);
int flag=0;

if(newhead==NULL){

    newhead=newe;

    newhead->next=NULL;

      flag=1;
}

tmp=newhead;

while(flag==0){


if(strcmp(tmp->next->surname,surname)>0){
   newe->next=tmp->next;
   tmp->next=newe;
   flag=1;
 }

if(strcmp(newhead->surname,surname)==0){
if(strcmp(newhead->name,name)>0)
    newe->next=tmp->next;
   tmp->next=newe;

 flag=1;
 }
if(tmp->next==NULL){

    tmp->next=newe;
    flag=1;
}

}
return newhead;

}


list_t * mem_alloc(char *surname,char *name){

list_t *head;
head=malloc(1*sizeof(list_t));

head->surname=malloc(1*sizeof(strlen(surname)+1));
head->name=malloc(1*sizeof(strlen(name)+1));
strcpy(head->surname,surname);
strcpy(head->name,name);
head->next=NULL;
return head;
}

