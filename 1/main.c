#include <stdio.h>
#include <stdlib.h>
int *merge3(int *,int *,int *,int,int ,int );
int main()
{
    int a[5]={0,1,2,3,4};
    int b[5]={1,5,6,7,8};
    int c[5]={3,4,5,6,7};
    int *d,i;
    d=malloc(15*sizeof(int));
    d=merge3(a,b,c,5,5,5);
    for(i=0;i<15;i++)
        printf("%d \n",d[i]);

    return 0;
}

int *merge3(int a[5],int b[5],int c[5],int na ,int nb,int nc){



int newa=0,newb=0,newc=0,counter=0;
int *newarray;
newarray=malloc(15*sizeof(int));

while(newa<na &&newb<nb && newc<nc){
    if(a[newa]>=c[newc] && b[newb]>=c[newc]){

        newarray[counter++]=c[newc++];

    }
      if(b[newb]>=a[newa] && b[newb]>=a[newa]){

        newarray[counter++]=a[newa++];

    }
    else{
        newarray[counter++]=b[newb++];

    }

}

while(counter!=na+nb+nc){

 if(newa<na && newb<nb && newc==nc){

    if(a[newa]<=b[newb])
       newarray[counter++]=a[newa++];
    else
        newarray[counter++]=b[newb++];

}

if(newa<na && newc<nc && newb==nb){

    if(c[newc]<=a[newa])
       newarray[counter++]=c[newc++];
    else
        newarray[counter++]=a[newa++];

}

 if(newb<nb && newc<nc && newa==na){

    if(c[newc]<=b[newb])
       newarray[counter++]=c[newc++];
    else
        newarray[counter++]=b[newb++];

}
  if(newa<na && newb==nb && newc==nc)
        newarray[counter++]=a[newa++];

     if(newa==na && newb<nb && newc==nc)
        newarray[counter++]=b[newb++];

     if(newa==na && newb==nb && newc<nc)
        newarray[counter++]=c[newc++];


}

return newarray;


}
