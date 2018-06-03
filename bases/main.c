#include <stdio.h>
#include <stdlib.h>

int main()
{
   base2(40);
    return 0;
}
void base2(int n){

if (n==0)
    return;

base2(n/2);
printf("%d",n%2);



}
