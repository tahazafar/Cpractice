#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100



int main(int argc,char *argv[])
{ FILE *fp;
char ***mat;
char **resultmat;
int row,col;
fp=fopen(argv[1],"r");
mat=filetomat(mat,fp,&row,&col);
printmat(mat,row,col);
resultmat=mergesort(mat,row,col);
printresultmat(resultmat,row,col);
    return 0;
}


 filetomat(char ***mat,FILE *fp,int *row,int *col){
    int i,j,k=0,l;
    char mystring[MAX],newstr[MAX];
    fgets(mystring,MAX,fp);
    sscanf(mystring,"%d %d",row,col);

    mat=(char***)malloc((*row)*sizeof(char **));
    for(i=0;i<(*row);i++){
        mat[i]=(char**)malloc(*col*sizeof(char*));
        fgets(mystring,MAX,fp);
        l=0;
        for(j=0;j<strlen(mystring)+1;j++){
            if(mystring[j]==' '||mystring[j]=='\0')
            {
                newstr[k]='\0';
                k=0;
                mat[i][l]=strdup(newstr);
                l++;
            }
            else
            {
                newstr[k]=mystring[j];
                k++;
            }
        }
    }


return mat;


    }


void printmat(char ***mat,int row,int col){
int i,j;
for (i=0;i<row;i++){
    for(j=0;j<col;j++){

        printf("%s ",mat[i][j]);

    }
    printf("\n");
}

}



void printresultmat(char **mat,int row,int col){
int i;
for (i=0;i<row*col;i++){


        printf("%s \n",mat[i]);

    }

}



mergesort(char ***matrix,int R,int C){
 int i, j, min_idx, *idx;
    char **array, *min_word;

    /* ALLOCATE THE FINAL ARRAY, PLUS AN AUXILIARY ONE */
    array = (char **) malloc(R * C * sizeof(char *)); //Allocazione dell'array risultante
    idx = (int *) calloc(R, sizeof(int)); //E' un array di R elementi allocati
    if((array == NULL) || (idx == NULL))
    {
        printf("Memory allocation error.\n");
        exit(EXIT_FAILURE);
    }

    /* MERGE THE MATRIX ROWS */
    i = 0;
    while(i < R*C)
    {
        min_idx = -1; //Si suppone sia la posizione della parola alfabeticamente minore
        for(j = 0; j < R; j ++)
        {
            if(idx[j] < C)
            {
                if ((min_idx == -1) || (strcmp(matrix[j][idx[j]], min_word) < 0)) //Controllo che siano in ordine alfabetico
                {
                    min_idx = j; //Quando non lo sono si fa lo swap
                    min_word = matrix[min_idx][idx[min_idx]];
                }
            }
        }
        array[i++] = matrix[min_idx][idx[min_idx] ++];
    }

    free (idx);
    return array;
}















