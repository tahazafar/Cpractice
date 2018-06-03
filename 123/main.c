
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i, j, k, l;
    char prime, prime1;
    do   //check if n is even and greater than 2
    {
        printf("Give me an even natural number greater than 2:\n\n>");
        scanf("%d", &n);
    }
    while (n % 2 != 0 && n >= 2);
    for (i=1 ;i<n ;i++)
    {
        prime = 1;
        for (k=2 ;k<i ;k++)
            if (i % k == 0)
                prime = 0;
        if (prime)
        {
            for (j=1; j<n; j++)
            {
                prime1 = 1;
                for (l=2; l<j; l++)
                    if(j % l == 0)
                        prime1 = 0;
                if (prime1)
                    if (i + j == n)
                    {
                        printf("\n\n%d and %d are the first two prime numbers that add up to %d.\n",i ,j , n);
                        return 0;


