#include <stdio.h>
#include <stdlib.h>

float power (float,int);

int main()
{
 float num;
 float x ;
 int n;



 scanf("%f",&x);
 scanf("%d",&n);

 num= power(x, n);
 printf("%f",num);
    return 0;
}

float power(float x,int n){

    if(n<=0)
        return 1;


    return x*power(x,n-1);


}
