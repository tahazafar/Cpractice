#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 50


typedef struct mylist{
char name[MAX];
char pid[16];
char *hiring;
int salary;
struct mylist *next;
struct mylist *prev;

}list_t;

list_t *readfile(char *,list_t *);

int main(int argc ,char*argv[])
{char findname[MAX],command[MAX];
    list_t *head;
    head=NULL;
    if(argc<4)
        exit(1);

    head=readfile(argv[1],head);
    strcpy(findname,argv[2]);
    strcpy(command,argv[3]);


    print(head,findname,command);



    return 0;
}

list_t *readfile(char *filename,list_t *head){
char name[MAX],code[MAX],date[MAX];
int salary;

FILE *fp;
list_t *tmp;
fp=fopen(filename,"r");
//Rossi_Alberto AAABBBCCDEEFGGGH 03.12.1998 1845
while(fscanf(fp,"%s %s %s %d",name,code,date,&salary)!=EOF){

tmp=malloc(sizeof(list_t));
tmp->hiring=malloc((strlen(date)+1)*sizeof(char));
strcpy(tmp->name,name);
strcpy(tmp->hiring,date);
strcpy(tmp->pid,code);
tmp->salary=salary;


if(head == NULL) {
		head = tmp;
		head->next=NULL;
		head->prev=NULL;
	}
	else{
	head->prev = tmp;
	tmp->next = head;
	head = tmp;
	head->prev=NULL;
}

}

return head;
  }







void print(list_t *head,char *findname,char *command){



  int flag=0,i;
list_t *tmp=head;
while(tmp->next!=NULL && flag==0){

        if(strcmp(tmp->name,findname)==0){
printf("%s  %s %s %d \n",tmp->name,tmp->pid,tmp->hiring,tmp->salary);
flag=1;
}
else {
tmp=tmp->next;
}
}

for(i=0;i<strlen(command);i++){

    if (command[i]=='+'&& tmp->next!=NULL){
        tmp=tmp->next;
            printf("%s %s %s %d \n",tmp->name,tmp->pid,tmp->hiring,tmp->salary);}

    else if (command[i]=='+'&& tmp->prev==NULL)   {
         printf("%s\n %s %s %d \n",tmp->name,tmp->pid,tmp->hiring,tmp->salary);
         }



 if (command[i]=='-'&& tmp->prev!=NULL){
        tmp=tmp->prev;
            printf("%s %s %s %d\n",tmp->name,tmp->pid,tmp->hiring,tmp->salary);
 }
    else if  (command[i]=='-'&& tmp->prev==NULL)  {
         printf("%s  %s %s %d \n",tmp->name,tmp->pid,tmp->hiring,tmp->salary);
         }
}
}


