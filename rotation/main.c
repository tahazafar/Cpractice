#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i,j,k,length;
    char s[4]="taha";
    length=4;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){

            k=(i+j)%length;
              printf("%d %d %d",i,j,k);

            printf("%c",s[k]);
        }
        printf("\n");
    }


    return 0;
}
