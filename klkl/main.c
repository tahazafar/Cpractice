#include <stdio.h>
#include <stdlib.h>

int catalans(int n);


int main()
{
    int n=3,i,j;
    j=catalans(n);

        printf("%d\n",j);

    return 0;
}

int catalans(int n)
{
int i,sum=0;
if(n<=1)
  return 1;


 for(i=0;i<n;i++)
sum+=catalans(i)*catalans(n-1-i);

return sum;

    }


