#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,j,left,right,flag=0;

for(i=0;i<11;i++){
    if(i==11/2)
        printf("+");
    else
        printf("-");

}
printf("\n");
left=11/2 - 1;
right=11/2 + 1;
for(i=1;i<10;i++){
    for(j=0;j<11;j++){

        if(left==j || right==j)
            printf("+");
            else
                printf("-");

    }
    printf("\n");
    if(left==0)
        flag=1;
    if(flag==0)
    left--;
    else
        left++;
    if(flag==0)
    right++;
   else
    right--;
}

for(i=0;i<11;i++){
    if(i==11/2)
        printf("+");
    else
        printf("-");

}

    return 0;
}
