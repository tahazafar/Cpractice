#include <stdio.h>
#include <stdlib.h>
#define MAX_FLIGHTS 150

typedef struct{
char code[6];
char depcity[4];
char arrCity[4];
float depTime;
float arrTime;
}flight_t;

/*function prototypes*/
int readFlights(flight_t *flights,char *name);
void searchConnections(flight_t *flights,int nf,flight_t request);
void printInfo(flight_t flight);

int main(int argc,char *argv[])
{
    flight_t flights[MAX_FLIGHTS],request;
    int nf ;
    if(argc<2){
        printf("Error");
        printf("run as %s",argv[0]);
        return 1;
    }
   nf=readFlights(flights,argv[1]);
   if(nf==0){
    return 1;
   }

   printf("Introduce the leaving city");
   scanf("%s",request.depCity);
   printf("intoduce the arrival city");
   scanf("%s",request.arrCity);
   printf("Introduce the leaving time");
   scanf("%s",&request.depTime);

   searchConnections(flights,nf,request);
   return 0;
}

int readFlights(flight_t *flights,char *name){
char line[100];
FILE *fp;
int i=0;
fp=fopen(name,"r");
if(fp==NULL){
    printf("Error");
    return 0;
}
while(fgets(line,100,fp)!=NULL && i<MAX_FLIGHTS){
    sscanf(line,"%s%s%s%f%f",flights[i].code,flighs[i].depCity,
           flights[i].arrCity,&flights[i].depTime,&flights[i].arrTime);
           i++;}
           fclose(fp);
           return i;
}
 void searchConnections(flight_t *flights,int nf,flight_t request){
 int i,j,found;
 for(i=0;i<nf;i++){
    if (strcmp(request.depcity,flights[i].depcity)&& request.depTime<=flights[i].depTime){

        if(strcmp(request.arrCity,flights[i].))
    }
 }



 }





}

}





}



    return 0;
}
