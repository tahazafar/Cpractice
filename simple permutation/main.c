#include <stdio.h>
#include <stdlib.h>

int permutation_simple(int*,int*,int*,int,int,int);


int main(int argc,char*argv[])
{
    int value[3]={1,2,3};
    int solution[3]={0,0,0};
    int mark[3]={0,0,0};
    int n=3,pos=0,counts=0;
    int total;

 printf("simple permutations\n");
 total=permutation_simple(value,solution,mark,n,pos,counts);
 printf("total number \n %d",total);

    return EXIT_SUCCESS;
}

int permutation_simple(int * value,int *solution,
                       int *mark,int n,int pos,
                          int counts){

      int i;
      if(pos>=n){
        printf("{");
        for(i=0;i<n;i++)
        printf("%d",solution[i]);
        printf("} \n");
         return counts+1;

       }

       for(i=0;i<n;i++){
        if(mark[i]==0){
            mark[i]=1;
            solution[pos]=value[i];
            counts=permutation_simple(value,solution,mark,n,pos+1,counts);
            mark[i]=0;
        }
   }

        return counts ;
        }





