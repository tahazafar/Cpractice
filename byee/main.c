#include <stdlib.h>
#include <stdio.h>
#include <string.h>



void recursion(char *,char *,char *,int ,int ,int ,int);
int main()
{



     char myset[4]={'1','2','3','4'};
     int  check[4]={0,0,0,0};
     char newset[2];

    recursion(myset,check,newset,4,4,2,0);

    return 0;
}

void recursion(char *myset,char *check,char *newset,int a,int b,int c,int level)
                       {
                           int i,j;

if(level>=2){
        for(j=0;j<2;j++)
        printf("%c",newset[j]);
        printf("\n");
        return;

}


for(i=0;i<4;i++){
    if(check[i]==0){
            check[i]=1;
        newset[level]=myset[i];
    recursion(myset,check,newset,a,b,c,level+1);
            check[i]=0;

    }
}



return;
}

