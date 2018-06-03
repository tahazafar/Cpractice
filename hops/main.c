#include <stdio.h>
#include <stdlib.h>




int main()
{


     int myarray[7]={3,5,1,2,1,1,2};
     int solarray[7]={3,0,0,0,0,0,0};
     int taken[7]={0,0,0,0,0,0,0};

     recursion(myarray,solarray,taken,7,0,0);

    return 0;

}


void recursion(int *myarray,int *solarray,int *taken,int sizes,int level,int length){

int i , j;

 if(length==sizes-1){



    for(j=0;j<sizes;j++){

      printf(" %d ",solarray[j])  ;
    }
    printf(" \n");
  return;
 }




for(i=1;i<myarray[level]+1;i++){

 solarray[level]=i;

recursion(myarray,solarray,taken,sizes,level+i,length+i);

 solarray[level]=0;
}

}





