#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<limits.h>
#include <ctype.h>

typedef struct node_s node_t;
typedef struct list_s list_t;





struct list_s{

char name[20];
list_t *next;
node_t *node;
} ;

struct node_s{
int price;
char name [20];
node_t *left;
node_t *right;

} ;


void visit(list_t *);
void bst_max(node_t*,char *,int *);
void bst_min(node_t*,char *,int *);

int main()
{ list_t *head;
  head=malloc(sizeof(list_t));
  strcpy(head->name,"taha");
  head->next=NULL;
  head->node=malloc(sizeof(node_t));
  strcpy(head->node->name,"nsa");
  head->node->price=0;
  head->node->left=malloc(sizeof(node_t));
  head->node->right=malloc(sizeof(node_t));
  head->node->left->right=NULL;
  head->node->left->left=NULL;
  head->node->right->right=NULL;
  head->node->right->left=NULL;
  strcpy(head->node->left->name,"ADIDAS");
  strcpy(head->node->right->name,"nIKE");
  head->node->left->price=20;
  head->node->right->price=91;
visit(head);

    return 0;
}


void visit(list_t *head){
list_t *i;
char *s=malloc(20*sizeof(char));
int maxi=INT_MIN, mini=INT_MAX;
char c;
for(i=head;i!=NULL;i=i->next){
 printf("%s",i->name);
c=i->name[0];
    if(isupper(c)){
     bst_max(i->node,s,&maxi);
     printf("%s",s);
    printf("%d",maxi);
    }
    else{
        bst_min(i->node,s,&mini);
     printf("%s",s);
    printf("%d",mini);
    }

}
}
 void bst_max(node_t *node,char *s,int *maxi){

 if(node==NULL)
    return;
 bst_max(node->left,s,maxi);
 bst_max(node->right,s,maxi);

 if(node->price>(*maxi)){
    strcpy(s,node->name);
    (*maxi) =node->price;
 }
 return;
 }


 void bst_min(node_t *node,char *s,int *mini){

 if(node==NULL)
    return;
 bst_min(node->left,s,mini);
 bst_min(node->right,s,mini);

 if(node->price<(*mini)){
    strcpy(s,node->name);
    (*mini) =node->price;
 }
 return;
 }
