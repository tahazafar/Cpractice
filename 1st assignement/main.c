
/*
Exercise 01
-----------

Write a C program able to:
- Read an array of integer values of size DIM, where DIM is a
  pre-defined constant.
- Find and print-out the longest ascending sub-sequence on integer
  values within the array.


Example
-------

Let DIM be equal to 15, ant let the array be the following one:

2   3   4  -1  -10   5   6   8   11  -9   8  -10   9   3   0

The program has to print-out the sub-sequence:

-10   5   6   8   11 */


#include <stdio.h>
#include <stdlib.h>
#define DIM 20
int main()
{
  int array[DIM],i,bestcount=0,j,start,count=0;
  for(i=0;i<DIM;i++){
    scanf("%d",&array[i]);
  }
  for(i=0;i<DIM-1;i++){
  if (array[i]<array[i+1]){
    count++;
    }
  else{
    if(count>bestcount){
        start=i-count;
        bestcount=count;


    }
    count=0;
  }
  }

    for(i=start;i<(start+bestcount+1);i++){
        printf("%d",array[i]);
    }
}
