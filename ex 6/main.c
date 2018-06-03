#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sequence(int *,int,int *);

int main()
{
    int v1[10]={1,2,3,4,5,0,12,13,14,2};
    int*v2;
    v2=malloc(10*sizeof(int));

    sequence(v1,10,v2);
    free(v2);
        return 0;
}

void sequence(int *v1,int n,int *v2){
int i=0;
int start;
int endd;
int flag=0;
int j=0,k=0;

while(i<10){
    start=i;
    while(j<9 && flag==0){
            i++;
            j++;
        if(v1[i]<v1[i+1]){
           endd=i+1;
        }

        else
            flag=1;

    }
    flag=0;

        for(j=endd;j>=start;j--){
           v2[k]=v1[j];

         k++;
        }
    }


for(i=0;i<n;i++)
    printf("%d \n",v2[i]);

return;

    }









