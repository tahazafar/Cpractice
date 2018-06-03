#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myarray[10]={1,2,3,4,5,0,12,13,14,2};
    int check[10]={0,0,0,0,0,0,0,0,0,0};
    int flag=1;
    int i,j,k=0,m;
    for(i=0;i<10;i++){
      for(j=i+1;j<10&&flag==1;j++){
        if(myarray[i]<myarray[j]){
            check[k]=1;
            k++;
        }
        else
            flag=0;

    }


    for(m=k;m>i;m--)
        if(check[m]==1)
        printf("%d ",myarray[m]);


    }


    return 0;
}
