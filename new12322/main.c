#include <stdio.h>
#include <stdlib.h>

int main()
{    int i,j,mysize;
    int myarray[10]={0,15,5,10,25,0,0,5,15,0};
     mysize=10;
    for(i=0;i<10;i++){
        if(myarray[i]==0){

            mysize--;
            for(j=i;j<10;j++)
                myarray[j]=myarray[j+1];
        i--;
        }

    }
    for(i=0;i<mysize;i++)
        printf("%d,",myarray[i]);
    return 0;
}
