#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct list_s list_t;
 struct list_s{

list_t *next;
char* word;
};

list_t *nodealloc(char *,list_t *);
list_t * stringsplit(char *);
int main()
{   list_t *ptr=NULL;
    ptr=stringsplit("a.b.cccc.ddd.ccc.ddd.sss.sss");
    while(ptr!=NULL){


    printf("%s\n",ptr->word);
    ptr=ptr->next;
    }

    return 0;
}

list_t * stringsplit(char *str){
int i,j=0;
char mystr[100];
list_t *head=NULL;
for(i=0;str[i]!='\0';i++){

    if(str[i]=='.' || str[i]=='\0'){
        mystr[j]='\0';
       head=nodealloc(mystr,head) ;
     j=0;
    }

else{
   mystr[j] =str[i];
    j++;
}
}
 mystr[j]='\0';
       head=nodealloc(mystr,head) ;
return head;

}
list_t *nodealloc(char *mystr,list_t *head){
list_t *ptr,*tmp;
ptr=malloc(sizeof(list_t));
ptr->word=malloc(sizeof(strlen(mystr)+1));
strcpy(ptr->word,mystr);
ptr->next=NULL;
if(head==NULL){
    return ptr;

}
else{
   tmp=head;
    while(tmp->next!=NULL)
        tmp=tmp->next;

    tmp->next=ptr;
    return head;
}





}








