#include <stdio.h>
#include <stdlib.h>
#define R 3
#define C 5

float fact(float i);
float smallpow(float i);
int main()
{
    float mat[R][C],newmat[R][C];
    int i,j;
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            scanf("%f",&mat[i][j]);
        }
    }
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            if(mat[i][j]==0)
                newmat[i][j]=0;
            if(mat[i][j]<0)
                newmat[i][j]=fact(-mat[i][j]);
            if (mat[i][j]>0)
                newmat[i][j]=smallpow(mat[i][j]);

        }
    }

     for(i=0;i<R;i++){
        for(j=0;j<C;j++){
           printf("%2f ",newmat[i][j]);
        }
        printf("\n");
    }

    return 0;

}

float fact(float i){
    if(i==0)
        return 1;

    return i*fact(i-1);

}

float smallpow(float i){
    float required=1;
while(i>required){
   required= 10*required;
}
return required;
}
