#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void func(int *,int);

int main()
{
    int myarray[20]={1,0,2,3,-1,0,4,5,0,-2,3,4,8,0,0,0,3,-1,10,6};

    func(myarray,20);

    return 0;
}


void func(int *v,int n){
int i,j,k;
int maxi=INT_MIN;
int newmax=0;
for(i=0;i<n;i++){
        if(v[i]!=0){newmax=1;
    for(j=i+1;j<n;j++){
        if(v[j]!=0)
        newmax++;
     else
        break;
}
        }
if(newmax>maxi)
    maxi=newmax;
}



for(i=0;i<n-maxi+1;i++){
    if(v[i]!=0){newmax=1;
    for(j=i+1;j<n;j++){
            if(v[j]!=0)
   newmax++;
   else
        break;
}
if(newmax==maxi){
                printf("{");
        for(k=i;k<i+maxi;k++){

                printf("%d,",v[k]);
        }
        printf("},");
}

}
}
}








