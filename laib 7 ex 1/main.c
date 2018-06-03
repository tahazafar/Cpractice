#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

typedef struct products{

char producer_id[20];
char prod_name[20];
int price;
struct products *next;

}products_t;

typedef struct producers{

char man_name[20];
char id[20];
struct producers *next;
products_t *products;

}producers_t;



producers_t *readfilie(FILE *fp,producers_t *head);
producers_t* read2ndfile(FILE *fp2,producers_t *head);
int main(int argc,char *argv[])
{
    FILE *fp1,*fp2;
    producers_t *head=NULL;
    fp1=fopen(argv[1],"r");
    fp2=fopen(argv[2],"r");

   head=readfilie(fp1,head);

   head=read2ndfile(fp2,head);
   printlist(head);

    return 0;
}






producers_t *readfilie(FILE *fp,producers_t *head){

char name[20];
char code[20];
producers_t *tmp;

while(fscanf(fp,"%s %s",name,code)!=EOF){
tmp=malloc(sizeof(producers_t));
strcpy(tmp->man_name,name);
strcpy(tmp->id,code);
tmp->products=NULL;
if(head==NULL){

    head=tmp;
    head->next=NULL;
}
  else {

  tmp->next=head;
  head=tmp;



  }


}


return head;



}

producers_t* read2ndfile(FILE *fp2,producers_t *head){

char code[20];
char name[20];
int price;
producers_t *tmp;
products_t *tmp1;
int flag;

while(fscanf(fp2,"%s %s %d",code,name,&price)!=EOF){
        flag=0;
tmp=head;
  while(tmp!=NULL && flag==0){
    if(strcmp(tmp->id,code)==0)
        flag=1;
    else
        tmp=tmp->next;


  }

  if(flag==1){
        tmp1=malloc(sizeof(products_t));
        tmp1->price=price;
       strcpy(tmp1->prod_name,name);
        strcpy(tmp1->producer_id,code);
    if(tmp->products==NULL){

       tmp->products=tmp1;
       tmp1->next=NULL;
    }

  else
     tmp1->next=tmp->products;
     tmp->products=tmp1;
  }




}


return head;

}

  void printlist(producers_t *head){

  producers_t *tmp=head;
  products_t *tmp1;
  while(tmp!=NULL){

    printf("%s\n ",tmp->man_name);
    tmp1=tmp->products;
    while(tmp1!=NULL){
    printf("%s ",tmp1->prod_name);
    tmp1=tmp1->next;
    }
    tmp=tmp->next;
  }
  }












