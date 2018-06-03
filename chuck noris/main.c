#include <stdio.h>
#include <stdlib.h>

int main()
{    int i ;
   int arr[10]={9,8,5,3,4,5,6,7,8,9};
   insertsort(arr,10);
   for(i=0;i<10;i++)
   printf("%d",arr[i]);
    return 0;
}

void insertsort(int arr[],int n){
int i,j,x;
for(i=1;i<n;i++){
  x=arr[i];
  j=i-1;
  while(j>=0 && x<arr[j]){

  arr[j+1]=arr[j];
  j--;

  }
 arr[j+1]=x;
}


return;
}
