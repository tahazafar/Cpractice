#include <stdio.h>
#include <stdlib.h>
typedef struct tree_s{
int val;
struct tree_s *left;
struct tree_s *right;
} tree_t;

void countNode (tree_t *, int *);
void countLevel (tree_t * , int *, int );
int main()
{  int i;
   tree_t *root;
   int myarray[3]={0,0,0};

   root=malloc(1*sizeof(tree_t));
   root->val=1;
   root->left=malloc(1*sizeof(tree_t));
   root->left->val=2;
   root->right=malloc(1*sizeof(tree_t));
   root->right->val=3;
   root->left->left=malloc(1*sizeof(tree_t));
   root->left->left->val=4;
   root->left->left->left=NULL;
   root->left->left->right=NULL;
   root->left->right=NULL;
   root->right->right=malloc(1*sizeof(tree_t));
   root->right->right->val=5;
   root->right->left=NULL;
   root->right->right->right=NULL;
   root->right->right->left=NULL;
  countNode (root,myarray);

  for(i=0;i<3;i++)
    printf("%d \n",myarray[i]);

   countLevel (root, myarray,3);

     for(i=0;i<3;i++)
    printf("%d \n",myarray[i]);

    return 0;
}


void countNode (tree_t *root, int *myarray)
{

if(root==NULL)
    {

    return;
}

countNode (root->left, myarray);
countNode (root->right, myarray);

if(root->left==NULL && root->right==NULL)
    myarray[0]++;

if(root->left==NULL && root->right!=NULL)
    myarray[1]++;

if(root->left!=NULL && root->right==NULL)
    myarray[1]++;

if(root->left!=NULL && root->right!=NULL)
    myarray[2]++;

return;


}

void countLevel (tree_t *root , int *myarray, int height){

int i;


for(i=0;i<height;i++){

   myarray[i]=recur(root->left,i,0,0);
   myarray[i]=recur(root->right,i,0,0);

}

}

int recur(tree_t *root ,int i,int level,int d){


if(root==NULL)
    return 0;

if(i==level)
    return d+1;

recur(root->left,i,level+1,d);
recur(root->right,i,level+1,d);

return;

}



