#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
void close(int *,int );
int main()
{

    int *v=malloc(10*sizeof(int));
    v[0]=1;
    v[1]=2;
    v[2]=4;
    v[3]=7;
    v[4]=11;
    v[5]=16;
    v[6]=22;
    v[7]=29;
    v[8]=37;
    v[9]=3;
    close(v,10);
    return 0;
}


void close(int *v,int n){
int diff=INT_MAX,newdiff;
int i,j;
for(i=1;i<n;i++){
    newdiff=v[i]-v[i-1];
    if(newdiff<0)
        newdiff=newdiff*(-1);
        if(newdiff<diff)
        diff=v[i]-v[i-1];
}

for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){

        newdiff=v[i]-v[j];
     if(newdiff<0)
        newdiff=newdiff*(-1);
        if(newdiff==diff)
      printf(" %d %d ",v[i],v[j]);
}


}}

