#include <stdio.h>
#include <stdlib.h>
int array_construction(int,int,int,int*,int);
int main()
{  int i;
    int * myarray=malloc(10*sizeof(int));
   i= array_construction(4,20,30,myarray,0);
if(i==1)
    printf("found");
    return 0;

}


int array_construction(int n,int s,int k,int*my,int level){
int maxi,i;
if(s>k)
    maxi=s;
else
    maxi=k;

if(level>=n){
   if(check(s,k,n,my)==1)
    return 1 ;
    else
        return 0;


}
for(i=0;i<maxi;i++){
   my[level]=i;
if(array_construction(n,s,k,my,level+1)==1)
    return 1;

}
return 0;
}
int check(int sum,int diff,int n,int *v){
int i,j;
int mysum=0;
int mydiff=0,newdiff;
for(i=0;i<n;i++){
    mysum+=v[i];

}

for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){

        newdiff=v[i]-v[j];
     if(newdiff<0)
        newdiff=newdiff*(-1);
        mydiff+=newdiff;
}
}
if(sum==mysum && mydiff==diff){
    for(i=0;i<n;i++)
   printf("%d \n",v[i]);
   return 1;

}
return 0;
}





