#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct list_s{
int val;
struct list_s *next;

}list_t;
void list_complete(list_t *);
list_t *new_element();
void list_insert(list_t *,int );

int main()
{
   list_t *head,*p;
   head=malloc(1*sizeof(list_t));
   head->next=malloc(1*sizeof(list_t));
   head->next->next=malloc(1*sizeof(list_t));
   head->next->next->next=NULL;
   head->val=4;
   head->next->val=7;
   head->next->next->val=10;
   list_complete(head);
   p=head;
   while(p!=NULL){
        printf("%d ",p->val);
   p=p->next;


   }

    return 0;
}


void list_complete(list_t *p){

int i;
list_t *head;
int maxi=INT_MIN;
int mini=INT_MAX;
head=p;
for(head=p;head!=NULL;head=head->next){
    if(head->val>maxi)
        maxi=head->val;

    if(head->val<mini)
    mini=head->val;

}
for(i=mini+1;i<maxi;i++){

    list_insert(p,i);
    }
    return 0;
}

void list_insert(list_t *head,int n){
list_t *mynew,*p1,*p2;
mynew=new_element();
mynew->val=n;
mynew->next=NULL;

p1=head;
p2=head->next;

while(p2!=NULL && n>p2->val ){

    p1=p2;
    p2=p2->next;
}
if(p2->val==n)
    return;
mynew->next=p2;
p1->next=mynew;


}


list_t * new_element(){
list_t *p;
p=malloc(1*sizeof(list_t));

return p;
}


