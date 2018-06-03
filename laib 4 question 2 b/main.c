#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int main(int argc,char *argv[])
{
    FILE *fp;
    int rownum;
    char **mat, mystring[MAX];

    if (argc!=2)
        exit(1);

    fp=fopen(argv[1],"r");
    //fscanf(fp,"%d\n", &rownum);


    matallocate(&rownum,&mat,fp);
  //  matread(&mat,fp,rownum);
    printf("%d\n",rownum);
    sortDMat(&mat, rownum);
    matprint(&mat,rownum);
    //matprint(mat,rownum);


    return 0;
}


matallocate(int *n,char ***mat,FILE *fp){
char    /*char **newmat,*/mystring[MAX];
    int i=0;
char **tmp;
    fgets(mystring,MAX,fp);
          sscanf(mystring,"%d\n",n);


   /* newmat=(char **)malloc((*n)*sizeof(char*));*/
tmp=(char **)malloc((*n)*sizeof(char*));




    while(fgets(mystring,MAX,fp)!=NULL){
       tmp[i]=strdup(mystring);
//        newmat[i] = (char*) malloc(strlen(mystring)*sizeof(char));
  //      strcpy(newmat[i], mystring);
      //  printf("%s",newmat[i]);
        i++;
        }

  *mat=tmp ;


  }

/*matread(char***mat,FILE *fp,int n){
    char mystring[MAX];
    int i=0;

    while(fgets(mystring,MAX,fp)!=NULL){
        mat[i]=strdup(mystring);
        i++;
        }

} */



matprint(char ***mat,int n){
int i;
//printf("%d",n);
for(i=0;i<n;i++)
    printf("%s\n",(*mat)[i]);


}




void sortDMat(char ***dMat, int num)
{
  int i, j;
  char *ptr;

  for (i=1; i<num; i++) {
    ptr = (*dMat)[i];
    j = i;
    while (--j>=0 && strcmp(ptr, (*dMat)[j])<0) {
      (*dMat)[j+1] = (*dMat)[j];
    }
    (*dMat)[j+1] = ptr;
  }
}
