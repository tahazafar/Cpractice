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
    fscanf(fp,"%d", &rownum);
    printf("%d",rownum);

    matallocate(rownum,&mat);
    matread(&mat,fp,rownum);

    matprint(&mat,rownum);


    return 0;
}


matallocate(int n,char ***mat){
    char **newmat;
    int i;
   newmat=(char **)malloc(n*sizeof(char*));

  for(i=0;i<n;i++)
     newmat[i]=(char*)malloc(MAX*sizeof(char));

  *mat=newmat;


  }

matread(char***mat,FILE *fp,int n){
    char mystring[MAX];
    int i=0;

    while(fgets(mystring,MAX,fp)!=NULL){
        mat[i]=strdup(mystring);
        i++;
        }
}



matprint(char***mat,int n){
int i;
printf("%d",n);
for(i=0;i<n;i++)
printf("%s",mat[i]);

}

