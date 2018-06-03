#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

typedef struct cyclists{
char name[30];
int identifier;
int laps;
float *times;
struct cyclists *next;
} list_t;

list_t *filetolist(FILE *fp,int *n);
void printlist(list_t *head);


int main(int argc,char*argv[])
{  int n;
   FILE *fp;
   list_t *head;
   char command[MAX];

   fp=fopen(argv[1],"r");
   if (argc!=2)
    exit(1);

   head=filetolist(fp,&n);
   while(strcmp(command,"stop")!=0){
        printf("WRITE \n");
   scanf("%s",command);
   if (strcmp(command,"list")==0){
        printf("%d",n);
    printlist(head);

   }
if (strcmp(command,"detail")==0){
        scanf("%s",command);
    printperson(head,command);

   }



   }
  // printlist(head);

    return 0;
}


list_t *filetolist(FILE *fp,int *n){
char mystring[MAX],floatstr[MAX];
int i,j,k=0;
list_t *head=NULL,*tmp,*tmp1;
fgets(mystring,MAX,fp);
sscanf(mystring ,"%d ",n);

while(fgets(mystring,MAX,fp)!=NULL){

    if (head==NULL){
        head=(list_t*)malloc(1*sizeof(list_t));
        head->next=NULL;
        tmp=head;
             }
    else  {

            tmp1=head;
            while(tmp1->next!=NULL){

                tmp1=tmp1->next;
            }
    tmp1->next=(list_t*)malloc(1*sizeof(list_t));
    tmp=tmp1->next;
      tmp->next=NULL;

               }


    sscanf(mystring,"%s %d %d",tmp->name,&tmp->identifier,&tmp->laps);
           tmp->times=(float*)malloc((tmp->laps)*sizeof(float));
           fgets(mystring,MAX,fp);
           k=0;
           j=0;
           for(i=0;i<strlen(mystring)+1;i++){

                if(mystring[i]==' '||mystring[i]=='\0')
        {
            floatstr[j]='\0';
            j=0;
            sscanf(floatstr,"%f",&tmp->times[k]);
            k++;
        }
        else
        {
            floatstr[j]=mystring[i];
            j++;
        }
    }

}
return head;

}





void printlist(list_t *head){
int i;
list_t *tmp;
tmp=head;

while(tmp!=NULL){
    printf("\n %s %d %d \n",tmp->name,tmp->identifier,tmp->laps);
    for(i=0;i<tmp->laps;i++){
      printf("%f  ",tmp->times[i]);

    }
 tmp=tmp->next;

} }

/*typedef struct cyclists{
char name[30];
int identifier;
int laps;
float *times;
struct cyclists *next;
} list_t;*/


  void printperson(list_t *head,char *name){
int i;
  list_t *tmp;
tmp=head;

while(tmp!=NULL){
    if(strcmp(name,tmp->name)==0){
         printf("\n %s %d %d \n",tmp->name,tmp->identifier,tmp->laps);
    for(i=0;i<tmp->laps;i++){
      printf("%f  ",tmp->times[i]);

    }}
 tmp=tmp->next;

}
printf("\n");




  }


