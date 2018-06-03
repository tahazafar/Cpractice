#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[5]={1,2,3,2,3};
    int v2[2]={2,3};
    int i,j,k,flag;
    for(i=0;i<5-2+1;i++){
            flag=0;
        for(j=i,k=0;j<i+2;j++,k++){
            if(v1[j]==v2[k]);
            else
                flag=1;
        }
        if(flag==0)
            printf("%d",i);
    }
    return 0;
}
