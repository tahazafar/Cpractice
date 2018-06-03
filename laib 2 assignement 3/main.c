#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(int argc,char *argv[])
{ FILE *fr,*fw;
char find[MAX],requires[MAX],line[MAX];
int i,j,k,flag,lastprint;
     if(argc<5){

        printf("Error:missing parameter \n");
        printf("Run as : %s <input file>. \n",argv[0] );
        return 1;
        }

    fr=fopen(argv[1],"r");
     if(fr==NULL){

        printf("Error 1 \n");

        return 1;
        }
    fw=fopen(argv[3],"w");
     if(fw==NULL){

        printf("Error 2 \n");

        return 1;
        }
    strcpy(find,argv[2]);
    strcpy(requires,argv[4]);

     while(fgets(line,MAX,fr)!=NULL){
            lastprint=0;
        for(i=0;i<strlen(line);i++){

            if(line[i]==find[0])
            {  k=0,flag=0;
                for(j=i;j<i+strlen(find) && flag==0;j++){

                   if (line[j]!=find[k]){
                    flag=1;
                   }
                    k++;

                }
                if (flag==0){
printf("123...");
             print(line,i,requires,lastprint,fw,strlen(requires));
                        lastprint=i+strlen(find);
                }

            }
        }
        if(lastprint<strlen(line)){
        printremaining(line,lastprint,fw);
 printf("321");
        }
    }

    return 0;
    }

    void print(char line[MAX],int i,char requires[MAX],int lastprint,char *fp,int length){

    int j,k;
    for(j=lastprint;j<i;j++){
        fprintf(fp,"%c",line[j]);
    }
    for(j=0;j<length;j++){
        fprintf(fp,"%c",requires[j]);
    }


             }

   void printremaining(char line[MAX],int lastprint,char *fp){

      int j;
    for(j=lastprint;j<strlen(line)+1;j++){
        fprintf(fp,"%c",line[j]);
    }
        }





























