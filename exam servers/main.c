#include <stdio.h>
#include <stdlib.h>



void load_balance(int,int,int *);

int main()
{
   int ns,nt;
   int v[5]={1,2,3,4,5};

   ns=3;
   nt=5;

load_balance(ns,nt,v);





    return 0;
}



void load_balance(int ns,int nt,int *v){


int v1[5]={0,0,0,0,0};


recursion(ns,nt,v,v1,0);







}





void recursion(int ns,int nt,int *v,int *v1,int level){
int i,j;

if (level>=nt){
    for (i=0;i<nt;i++)
    printf("%d",v1[i]);
    printf("\n");

    return;
}




for(j=0;j<ns;j++){

    v1[level]=j;
    recursion(ns,nt,v,v1,level+1);

}



return;
}
