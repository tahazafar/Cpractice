#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20

typedef struct list1{
   char farmers[N];
    struct list1 *next;
    struct list2 *products;

}list1_t;


typedef struct list2{
   char products[N];
    struct list2 *next;
    struct list1 *farmers;

}list2_t;


void lisoflist(list1_t *,list2_t **);
void check(list2_t *,mytmp){



int main()
{

    return 0;
}

 lisoflist(list1_t *head1,list2_t **head2){

 list1_t *tmp1,*tmp;
 list2_t *tmp2,*mytmp;

 tmp1=head1;
 mytmp=head1->products;

 while(tmp1!=NULL){
    tmp2=tmp1->products;
    while(tmp2!=NULL){
        tmpprod=memalloc(tmp1);
        if (!check(tmpprod,mytmp){

            tmpprd->farmers=tmpfarm;
        }
        tmp2=tmp2->next;

            }


        head2=*tmp;

    }

 }











 }




