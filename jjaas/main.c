#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



#define N 10


typedef struct element_s{
int key;
struct element_s *next;
} element_t;

//void list_r_visit1(element_t *);
void list_r_visit2(element_t *);


int main()
{
    int i;

    int v[N]={0,1,2,3,4,5,6,7,8,9};

    element_t *p,*head;

    for(i=0;i<N;i++){
        p=malloc(1*sizeof(element_t));

        p->key=v[i];
        p->next=head;
        head=p;

    }
   list_r_ver1(head);
   printf("sasd");
   list_r_ver2(head);

    return 0;
}



void list_r_ver1(element_t *head){
  if(head==NULL)
    return;


   printf("%d\n",head->key);
   list_r_ver1(head->next);
   return;


}


void list_r_ver2(element_t *head){
  if(head==NULL)
    return;

   list_r_ver2(head->next);
   printf("%d\n",head->key);

return;
}



