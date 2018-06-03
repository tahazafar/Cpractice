#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100


typedef struct coordinates_t{
char *name;
float x1;
float y1;
float x2;
float y2;
float area;
float perimeter;
struct coordinates_t *next;
}coordinates;

typedef struct area_t{

char *name;
float area;
struct area_t *next;
} area;


typedef struct perimeter_t{

char *name;
float perimeter;
struct perimeter_t *next;
} perimeter;


int main(int argc,char *argv[])
{    FILE *fr,*fw1,*fw2;


     coordinates *head;
     int n;
     char line[MAX];
    if (argc<4){
        printf("error in number o parameters");
        printf("Run as %s",argv[0]);
        exit(1);

    }

    fr=fopen(argv[1],"r");
    fw1=fopen(argv[2],"w");
    fw2=fopen(argv[3],"w");

    fgets(line,100,fr);
        sscanf(line,"%d",&n);
        printf("%d \n",n/2);

  head=makealist(fr);
  calculatelist(head);
 // sortarea(fw1,head,n);
  // sortperimeter(fw2,head,n);

    return 0;
}




makealist(FILE *fr){
    char name[MAX],line[MAX];

    float x,y;
    int flag=0;
    coordinates *head,*tmp;
    head=NULL;

     while(fgets(line,100,fr)!=NULL){
        sscanf(line,"%s %f %f",name,&x,&y);


if (head==NULL){
    head=malloc(sizeof(coordinates));
    head->name=strdup(name);
    head->x1=x;
    head->y1=y;
    head->next=NULL;
}





 else{  flag=0;
        tmp=head;
 while (tmp->next!=NULL ){
        if(strcmp(tmp->name,name)==0){
            flag=1;
            break;}
    tmp=tmp->next;

 }
 if(strcmp(tmp->name,name)==0){
            flag=1;
            }
 if (flag==0){
 tmp->next=malloc(sizeof(coordinates));
 tmp->next->name=strdup(name);
 tmp->next->x1=x;
 tmp->next->y1=y;
 tmp->next->next=NULL;
}

else
{
    tmp->x2=x;
    tmp->y2=y;
}

}
     }
return head;



}
    calculatelist(coordinates *head){
        coordinates *tmp;
        float f1,f2;
        tmp=head;
        while(tmp!=NULL){

    f1=tmp->x1-tmp->x2;
    f2=tmp->y1-tmp->y2;
    if(f1<0)
        f1=-f1;
    if(f2<0)
        f2=-f2;
    tmp->area=f1*f2;

    tmp->perimeter=2*(f1+f2);

    printf("%f %f \n",tmp->area,tmp->perimeter);
    tmp=tmp->next;
        }


    }

 /* sortarea(fw1,head,n){
  int swapped,i;
  while(head!=NULL){



  }





  }*/
