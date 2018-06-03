#include <stdio.h>
#include <stdlib.h>

#include <Math.h>

#define N 4

int main() {
    int n ,z,a=0,b,c,d,e,g,h,i,j,k,l,m,r,x,y,t[N][N],f,o,re,xxx=0;
    if (N%2==0){
         n=N;
        r=n/2;
        x=r-1;
        y=r;
    } else {

    x=1;
    y=1;}

    for(j=0;j<N;j++){
        for(i=0;i<N;i++){
      printf("write ");
            scanf("%d",&z);
            t[i][j]=z;
        }
    }
while(re!=0){
c=N;b=xxx;

for(b=xxx;b<c;b++){
    printf("%d",t[b][a]);
}xxx++;c--;a++;x=xxx;y=a;
if(x==r-1 && y==r){break;}


d=N;e=1;f=N-1;
for(e=1;e<d;e++){
    printf("%d",t[f][e]);
}e++;d--;x=f;y=e;
if(x==r-1 && y==r){break;}
g=y;h=0;k=N-1;
for(g=N-2;g>=h;g--){
    printf("%d",t[g][k]);
}g--2;h++;x=g;y=k;
if(x==r-1 && y==r){break;}
l=N-2;m=1;o=0;
for(l=N-2;l>=m;l--){
    printf("%d",t[o][l]);
}l--;m++;x=o;y=l;
if(x==r-1 && y==r){break;}
}


    return 0;
}
