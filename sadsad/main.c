#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void balance(int **mat, //given matrix
            int **mark, //to mark taken index
            int *sol,   //save partial results
            int pos,    //index of result
            int size,   //size of any result array
                        //we might could use pos for this also
            int *min,   //array for min finals result
            int *max,   //max final result
            int *min_size, // size of current result in min
            int *max_size, // size of current result in max
            int  r,int c,int k )
;
int main()
{int r=4;int c=4;int k=10 ;int i;int j;
int **mat;int**mark;
 mat=(int**)malloc(sizeof(int*));
 for(i=0;i<c;i++){
    mat[i]=(int*)malloc(sizeof(int));
    }
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
                scanf("%d",&mat[i][j]);}}
              mark=(int**)malloc(sizeof(int*));
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
               mark[i][j]=0;
 }

int sol[r*c];int *min ;int *max;int pos=0;int size=r*c;
int *min_size=r*c-10;
int *max_size=-1;
balance(mat,mark,sol,pos,size,min,max,min_size,max_size,r,c,k);
    return 0;
}
void balance(int **mat, //given matrix
            int **mark, //to mark taken index
            int *sol,   //save partial results
            int pos,    //index of result
            int size,   //size of any result array
                        //we might could use pos for this also
            int *min,   //array for min finals result
            int *max,   //max final result
            int *min_size, // size of current result in min
            int *max_size, // size of current result in max
            int  r,int c,int k )
{

/*  sol is a array of size = r*c (maximum # of elements possible)
*   initially sol has 0,pos,size also zero,
*   min and max are two vectors , just two pointers initially
*   min and max size equals r*c+10,-1 at start
*/
    int len = r*c;
    int row,col;
    int i;

    if(pos>len)
        return;
    if(check_sum(sol,size,k)==1){
        if(*min_size>size)
            update(min,sol,size,min_size);
        else
            if(*max_size<size)
                update(max,sol,size,max_size);
        return;
    }


    for ( i = 0; i < len; ++i)
    {
        row = i/r;
        col = i%r;
        if(mark[row][col]==0){
            mark[row][col] = 1;
            sol[pos] = mat[row][col];
            size++;
            balance(mat,mark,sol,pos+1,size,
                min_size,max_size,min,max,r,c,k);
            size--;
            mark[row][col] = 0;
        }

    }


    return;
}
int check_sum(int *sol,int size,int k){
printf("assaas");

    int i;
    int sum=0;
    for(i=0;i<size;i++) sum += sol[i];
        return(sum==k);
}

void update(int *vet,int *sol,int size,int *prev_size){
// this function will copy the solution in results.
// works on both min and max.
// it also updates the value of min_size or max_size.
// every time we allocate a new vector.
    int i;

    prev_size = size;
    if (vet!=NULL)
        free(vet);
    vet = (int *)malloc(size*sizeof(int));
    if(!vet)
        exit(1);

    for(i=0;i<size;i++){
        vet[i]=sol[i];
    }
}

