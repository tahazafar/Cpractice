#include <stdio.h>
#include <stdlib.h>

int main()
{
   diamond(21);
    return 0;
}

void diamond(int n){
int middle=(int)n/2;
int l=middle,r=middle;
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
     if(i==0 || i==n-1){
        if(j==middle)
       printf("+");
       else
        printf("-");
  }
else{
    if(j==l || j==r)
        printf("+");
    else
        printf("-");


}


 }
 if(i<middle){
 l=l-1;
 r=r+1;
 }
 else{
    l=l+1;
    r=r-1;
 }
 printf("\n");
 }


return;

}
