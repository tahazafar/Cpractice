#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  char given[5]={'A','E','I','O','U'};
  int taken[5]={0,0,0,0,0};
  char *str;
  str=malloc(8*sizeof(char));

  recursion(given,taken, str, 2,7,0);

    return 0;
}
void recursion(char *given, int *taken, char *str, int reps,
               int sizes,int level ){

int i, j ;

if(level>=sizes){
   printf("%s \n",str);
   return;
}

for(i=0;i<strlen(given);i++){
    if(taken[i]==0){
            taken[i]=1;
        str[level]=given[i];
    recursion(given,taken, str, reps,sizes,level+1);
     taken[i]=0;

    }
    if(taken[i]!=0 && reps>0){

        str[level]=given[i];
        recursion(given,taken, str, reps-1,sizes,level+1);

    }
}


            }

