#include <stdio.h>

int count = 1;

void func(int sum)
{
    sum  = sum + count;
    count ++;

    if(count <= 9)
    {
        func(sum);
    }
    else
    {
        printf("\nSum is [%d] \n", sum);
    }

    return;
}

int main(void)
{
    int sum = 0;
    func(sum);
    return 0;
}
