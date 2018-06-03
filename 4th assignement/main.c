#include <stdio.h>
#include <stdlib.h>
#define MAX_DIM 5
#define TRUE 1
#define FALSE 0

void  matread(int x,int y,float mat[MAX_DIM][MAX_DIM]);

int main()
{
    float mat_a[MAX_DIM][MAX_DIM],mat_b[MAX_DIM][MAX_DIM],
    mat_c[MAX_DIM][MAX_DIM];
    int x1,x2,y1,y2,i,j;
    printf("dimension of first mat");
  readdim(&x1,&y1);
     printf("dimension of second mat");
  readdim(&x2,&y2);


    int check=checkallandmult(x1,x2,y1,y2);

    if (check==FALSE)
        exit(1);

    printf("first mat");

    matread(x1,y1,mat_a);

    printf("Second mat");

   matread(x2,y2,mat_b);

    matmult(x1,y1,x2,y2,mat_a,mat_b,mat_c);

    printf("Stampa in main...\n");// printf("PUTTQNQ");
    for(i=0;i<x1;i++){
        for(j=0;j<y2;j++){
            printf("%.2f   ",mat_c[i][j]);
    }
    printf("\n");}



    return 0;

}

void readdim(int *x,int *y){

    scanf("%d %d",x,y);

printf("%d %d",*x,*y);

}



int checkallandmult(int x1,int x2,int y1,int y2){
if(x1<MAX_DIM && x2<MAX_DIM && y1<MAX_DIM && y2<MAX_DIM
       && x2==y1)
        return TRUE;
        return FALSE;


}
   void  matread(int x,int y,float mat[MAX_DIM][MAX_DIM]){
   int i ,j;
    for(i=0;i<x;i++){

        for(j=0;j<y;j++){
         //       printf("asdas");

            scanf("%f",&mat[i][j]);
    }
    }
    }
 void matmult(int x1,int y1,int x2,int y2,float mat_a[MAX_DIM][MAX_DIM],float mat_b[MAX_DIM][MAX_DIM],
              float mat_c[MAX_DIM][MAX_DIM]
              ){
                  //printf("sada");
   int i,j,a=0,b=0,c=0,d=0;
   float sum=0;
   while(a<x1 ){

   for(j=0,i=0;i<x2,j<y1;j++,i++){
     sum+=mat_a[a][j]*mat_b[i][b];

   }

   // printf("%f \n",sum);
    if(c<x1 && d<y2){

   mat_c[c][d]=sum;

   sum=0;

   }
   if(c<x1 && d==y2){
        d=0;
        c++;
   mat_c[c][d]=sum;
   sum=0;
   }


     d++;
     b++;

   if(b==y2){
    a++;
    b=0;
   }
   //printf("%f \n",sum);


   }
   printf("Stampa in funzione...\n");
     for(i=0;i<x1;i++){
        for(j=0;j<y2;j++){
            printf("%.2f \0",mat_c[i][j]);
    }
    printf("\n");}
   }
