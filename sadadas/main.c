#include <stdio.h>
#include <stdlib.h>
void balance(int **mat,int r,int c,int k);
void recur(int myarray[], int n, int sum, int answerarray[n], int index) ;
void print(int answerarray[], int index);
int main()
{int r=4;int c=4;int k=10 ;int i;int j;
int **mat;
 mat=(int**)malloc(sizeof(int*));
 for(i=0;i<c;i++){
    mat[i]=(int*)malloc(sizeof(int));
    }
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
                scanf("%d",&mat[i][j]);}}


balance(mat,r,c,k);
    return 0;
}

void balance(int **mat,int r,int c,int k){
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
    count++;}}
    recur(myarray,n,sum,answerarray,index);}

void recur(int myarray[], int n, int sum, int answerarray[n], int index) {
    if (n < 0 && sum != 0)
        return;
    if (n < 0 && sum == 0) {
        print(answerarray, index);
        return;
    }
    if (sum >= answerarray[n]) {
        answerarray[index] = myarray[n];
        recur(myarray, n - 1, sum - myarray[n], answerarray, index + 1);
    }
    recur(myarray, n - 1, sum, answerarray, index);
}
void print(int answerarray[], int index){
    int i ;
    printf("the solution is");
    for (i = 0; i < index; i++){
       printf(" %d",answerarray[i]);}

printf("\n");
}

