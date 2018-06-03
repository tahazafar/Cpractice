#include <stdio.h>
#include <stdlib.h>
//void balance(int **mat,int r,int c,int k,int *maxarray,int *minarray);
//void recur(int myarray[], int n, int sum, int answerarray[n], int index,int *maxarray,int*minarray) ;
//void print(int answerarray[], int index,int theemax,int *maxarray,int *minarray);
int main()
{int r=4;int c=4;int k=10 ;int i;int j;int *maxarray;int *minarray;
int **mat;
maxarray=(int*)malloc(r*c*sizeof(int));
minarray=(int*)malloc(r*c*sizeof(int));
 mat=(int**)malloc(sizeof(int*));
 for(i=0;i<c;i++){
    mat[i]=(int*)malloc(sizeof(int));
    }
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
                scanf("%d",&mat[i][j]);}}


balance(mat,r,c,k,maxarray,minarray);
 for (i = 6; i >0; i--){

       printf("%d",maxarray[i]);}
    return 0;
}

void balance(int **mat,int r,int c,int k,int *maxarray,int *minarray){
    int requirednumber=k;int i;int j;
    int myarray[r*c];
    int answerarray[r*c];
    int n=r*c;
    int sum=k;
    int count=0;
    int index=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
    myarray[count]=mat[i][j];
    count++;}}int *high=-1;
    recur(myarray,n,sum,answerarray,index,maxarray,minarray,high);}
void recur(int myarray[], int n, int sum, int answerarray[n], int index,int *maxarray,int *minarray,int* high) {



    if (n < 0 && sum != 0)
        return;
    if (n < 0 && sum == 0) {
        print(answerarray, index,n,maxarray,minarray,high);

        return;
    }
    if (sum >= answerarray[n]) {
        answerarray[index] = myarray[n];
        recur(myarray, n - 1, sum - myarray[n], answerarray, index + 1,maxarray,minarray,high);
    }
    recur(myarray, n - 1, sum, answerarray, index,maxarray,minarray,high);
}
void print(int answerarray[], int index,int *maxarray,int *minarray,int *high){
    int i ;
    int low= 16;

    if (index>high){
           high=index;
    for (i = 0; i < index; i++){

       maxarray[i]=answerarray[i];}


}}


