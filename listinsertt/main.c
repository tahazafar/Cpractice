#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_s{
int value;
struct list_s *next;
}list_t;

list_t *newnode();
int main()
{
   list_t *head,*head1=NULL,*head2=NULL;
   head=newnode();
   head->value=7;
   head->next=newnode();
    head->next->value=8;
    head->next->next=newnode();
    head->next->next->value=25;
     head->next->next->next=newnode();
    head->next->next->next->value=2;
     head->next->next->next->next=newnode();
    head->next->next->next->next->value=9;
       head->next->next->next->next->next=newnode();
    head->next->next->next->next->next->value=-5;
       head->next->next->next->next->next->next=newnode();
    head->next->next->next->next->next->next->value=100;
      head->next->next->next->next->next->next->next=newnode();
    head->next->next->next->next->next->next->next->value=37;

split(&head,18,&head1,&head2);
while(head!=NULL){
    printf("%d ",head->value);
    head=head->next;

}
printf("\n");

while(head1!=NULL)
  {
    printf("%d ",head1->value);
    head1=head1->next;

}
printf("\n");

    while(head2!=NULL)
   {
    printf("%d ",head2->value);
    head2=head2->next;

}
printf("\n");
    return 0;
}


void split(list_t **p,int threshold,
           list_t **p1,list_t** p2){
list_t *head,*head1,*head2 ;
head=*p;
while(head!=NULL){
  if(head->value <threshold){
   {
       if(*p1==NULL){
        *(p1)=newnode();
        (*p1)->value=head->value;
       }
     else {
   head1=*p1;

   while(head1->next!=NULL){
    head1=head1->next;

   }
  head1->next=newnode();
    head1->next->value=head->value;

     }

   }

  }
 else{
         if(*p2==NULL){
        *p2=newnode();
       (*p2)->value=head->value;
       }
     else {
   head2=*p2;

   while(head2->next!=NULL){
    head2=head2->next;

   }
  head2->next=newnode();
    head2->next->value=head->value;

     }

   }


 head=head->next;


 }


while(head!=NULL){
   head=(*p)->next;
   free(*p) ;

}

 return;

}

list_t *newnode(){

list_t * node;
node=malloc(1*sizeof(list_t));
node->next=NULL;

return node;

}





