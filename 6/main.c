#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct element e_t;
struct element {
  char *name;
  int n;
  e_t **children;
};

void myprint(e_t *);

int main()
{ e_t *root;
int i;

root=malloc(1*sizeof(e_t));
root->n=5;
strcpy(root->name,"first");
root->children=malloc(5*sizeof(e_t*));
root->children[0]=malloc(sizeof(e_t));
root->children[1]=malloc(sizeof(e_t));
root->children[2]=malloc(sizeof(e_t));
root->children[3]=malloc(sizeof(e_t));
root->children[4]=malloc(sizeof(e_t));

for(i=0;i<5;i++){
root->children[i]->children=NULL;
root->children[i]->n=0;
strcpy(root->children[i]->name,"i");

}
   myprint(root);


    return 0;
}

void myprint(e_t *root){
    int i;
if(root==NULL)
    return;


printf("%s",root->name);

for(i=0;i<root->n;i++)
myprint(root->children[i]);


return;
}

