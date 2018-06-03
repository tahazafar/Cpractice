#include <stdlib.h>
#include <stdio.h>
#include <string.h>



void recursion(char *,char *,int ,int ,int ,int);
int main()
{



     char myset[4]={'1','2','3','4'};

     char newset[2];

    recursion(myset,newset,4,4,0,0);

    return 0;
}

void recursion(char *myset,char *newset,int a,int b,int c,int level)
                       {
                           int i,j;

if(level>=2){
        for(j=0;j<2;j++)
        printf("%c",newset[j]);
        printf("\n");
        return;

}


for(i=c;i<4;i++){


        newset[level]=myset[i];
    recursion(myset,newset,a,b,c,level+1);
  c++;


}



return;
}
