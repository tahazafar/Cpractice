#include <stdio.h>
#include <stdlib.h>
#include<string.h>


typedef struct list1_t{
struct list1_t *next;
int carprice;
char *dealername;
}mylist1;

typedef struct bst_t{char *carmodel;
 mylist1 *list1ptr;
 struct bst_t*leftchild;
 struct bst_t*rightchild;
}mybst;

typedef struct list2_t{
    char *modelname;
char *dealername;
int carprice;

struct list2_t *next;
}mylist2;



int main()
{
;
    mylist2 *pointer = NULL;
    mylist2 **ptrlist2 = &pointer;

mybst *ptrbst;


    //Creating a dummy list structure

    mylist1* ptrlist11;
      mylist1 * ptrlist111;
      mylist1 * ptrlist12;
     mylist1 * ptrlist13;


    ptrlist11=(mylist1*)malloc(sizeof(mylist1));
    ptrlist111=( mylist1*)malloc(sizeof(mylist1));

    ptrlist11->next=ptrlist111;
    ptrlist11->carprice=112;
   ptrlist11->dealername= strdup("tony");
    ptrlist111->next=NULL;
    ptrlist111->carprice=114;
    ptrlist111->dealername=strdup("johny");


    ptrlist12=(mylist1*)malloc(sizeof(mylist1));
    ptrlist12->next=NULL;
    ptrlist12->carprice=100;
    ptrlist12->dealername=strdup("tom");
    ptrlist13=(mylist1*)malloc(sizeof(mylist1));
    ptrlist13->next=NULL;
    ptrlist13->carprice=50;
    ptrlist13->dealername=strdup("sam");

        //Creating a dummy tree structure
        ptrbst = (mybst*) malloc(sizeof(mybst));
        ptrbst->carmodel = strdup("b12");
        ptrbst->list1ptr=ptrlist11;
        ptrbst->leftchild = (mybst*) malloc(sizeof(mybst));
        ptrbst->rightchild = (mybst *) malloc(sizeof(mybst));
        ptrbst->leftchild->carmodel = strdup("ab13");
        ptrbst->leftchild->list1ptr=ptrlist12;
        ptrbst->leftchild->rightchild =ptrbst->leftchild->leftchild = NULL;
        ptrbst->rightchild->carmodel = strdup("cb13");
        ptrbst->rightchild->list1ptr=ptrlist13;
        ptrbst->rightchild->leftchild =ptrbst->rightchild->rightchild = NULL;


    bst2list(ptrbst, ptrlist2);



  printlist(ptrlist2);

    return 0;
}

void bst2list(mybst *ptrbst, mylist2 **ptrlist2){
    if(ptrbst!= NULL){


bst2list(ptrbst->leftchild, ptrlist2) ;

listinsert (ptrbst->carmodel,ptrbst->list1ptr,ptrlist2)  ;

bst2list(ptrbst->rightchild, ptrlist2);}

}
/*void bst2list(mybst *ptrbst,mylist2 **ptrlist2){
    if(ptrbst->leftchild == NULL)
        return;
         // Ignore empty subtrees.
      //Do right subtree first.
    //bst2list(ptrbst->leftchild, ptrlist2);
   (* ptrbst )= (*ptrbst)->leftchild;

    listinsert (ptrbst->carmodel,ptrbst->list1ptr,ptrlist2);     //Then current node at list start.

    //bst2list(ptrbst->rightchild, ptrlist2);
   (*ptrlist2) = (*ptrlist2)->next;
    return bst2list(ptrbst->leftchild, ptrlist2);
}
*/

void listinsert (char *carmodel,mylist1 *list1ptr,mylist2 **ptrlist2){


    int price ;
    mylist1 *p;
    mylist2 *new_node = ( mylist2*) malloc (sizeof (mylist2));

   price = list1ptr->carprice;
            p = list1ptr;
             price = list1ptr->carprice;
   while(list1ptr != NULL ){  //5555

        if(list1ptr->carprice <price){
            price = list1ptr->carprice;
            p = list1ptr;

            }
            list1ptr = list1ptr->next;

        }


        new_node->carprice =p->carprice;////


        new_node->modelname = strdup(carmodel);


        new_node->dealername = strdup(p->dealername);

        new_node->next = NULL;

        if((*ptrlist2)== NULL){
            (*ptrlist2) = new_node;


        }


else if ((*ptrlist2)!= NULL) {
       mylist2 *temp=(*ptrlist2);

        while(temp->next != NULL){
                temp = temp->next;
        }

        temp->next = new_node;
   }
}

void printlist(struct mylist **ptrlist2){
      mylist2 *temp=(*ptrlist2);

while(temp!=NULL)
    {
    printf("modelname is %s\n",temp->modelname);
        printf("price is %d \n",temp->carprice);
    printf("dealer name is %s\n",temp->dealername);

    temp=temp->next;
    }
    return;
}

