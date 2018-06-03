#include <stdio.h>
#include <stdlib.h>
#define upper 20
void goldbach(void)
{
int n = 2, counterexample , p , q;
do {
n = n + 2;
printf("I try for n = %d\n", n);
counterexample = 1;
for (p = 2; p <= n-2; p++)
{
q = n - p;
if ((p == 1) && (q == 1))
{
counterexample = 0;
printf("%d , %d ", p, q);
}
}
}
while (counterexample == 0 && n < upper);
if (counterexample == 1)
printf("Counterexample is: %d \n",n);
else
printf("Until n= %d none found\n", upper);
return;
}
