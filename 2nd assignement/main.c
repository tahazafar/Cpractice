/*

Exercise 02
------

Write a C program able to:
- Read two integer values N1 and N2.
- Check whether N1<=DIM and N2<=DIM (DIM is a pre-defined constant
  value).
- Read from standard input an array v1 of N1 integer values
- Compute an array v2 of N1 integer values, where each v2[i] is equal
  to the arithmetic average of
  v1[i-N2], v1[i-N2+1], ..., v1[i-1], v1[i], v1[i+1], ..., v1[i+N2]
  if they exist.
- Print-out v2.


Example
-------

Let us suppose DIM = 100, N1 = 10, N2 = 2, ant let v1 be the following
one:

0   2   3   4  -1  -10   5   1   8   3

Each element of v2[i] has to be equal to the average of at most
5 (2 on the left of v1[i], 2 on the right of v1[i], and v1[i] itself)
elements "around" v1[i], e.g.:

v2[0] = (0 + 2 + 3) / 3 = 1.67
v2[1] = (0 + 2 + 3 + 4) / 4 = 2.25
v2[2] = (0 + 2 + 3 + 4 + (-1)) / 5 = 1.60
v2[3] = (2 + 3 + 4 + (-1) + (-10)) / 5 = -0.40
etc.

As a consequence, the program has to print-out the sub-sequence:
1.67  2.25  1.60  -0.40  0.20  -0.20  0.60  1.40  4.25  4.00

*/






#include <stdio.h>
#include <stdlib.h>
#define N1 10
#define N2 2

float average(int i,float arr[]);
int main()
{   int i;
    float array[N1],newarray[N1],value;
     for(i=0;i<N1;i++)
    scanf("%f",&array[i]);
    for(i=0;i<N1;i++)
newarray[i]=average(i,array) ;

for(i=0;i<N1;i++)
printf("%f \n",newarray[i]);
return 0;
}
float average(int i,float array[N1]){
    int j,count=0;
    float sum=0;
for(j=i;j<N2+i+1;j++){
    if(j>=N1 || j<0)
        continue;
        sum+=array[j];
        count++;
    }
for(j=i-1;j>i-N2-1;j--){
    if(j>=N1 || j<0)
        continue;
        sum+=array[j];
        count++;
    }
return (float) sum/count;

}
