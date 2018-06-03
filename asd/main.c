#include <stdio.h>
#include <stdlib.h>


void sequence(int *,int,int *);

int main()
{    int i;
    int v1[10]={1,2,3,4,5,2,12,13,14,0};
int v2[10];

    sequence(v1,10,v2);
    free(v2);

        return 0;
}

void sequence(int *v1,int n,int *v2){
int i=0,j=0;
int check[10];
int flag=0;

while(i<n-1){
        while(flag==0){
if(v1[i]<v1[i+1])
    {
     check[i]=j;
     check[i+1]=j;

    }
    else
        flag=1;
        }
        j++;
    i++;

    }


 for(i=0;i<10;i++)
    printf("%d \n",check[i]);
return;



    }




