#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_code 4

typedef struct{
    float x;
    float y;
    }point_t;
typedef struct{
        char code[max_code +1];
        point_t p1;
        point_t p2;
        float area;
        float parameter;
        }rectangle_t;
    //

int main(char *argv[],int argc )
{
int num,i;
float x,y;
 rectangle_t *rct;
 if (argc!=4){
        printf("wong number of parameters");
        exit(1);
        }
//open the file//
FILE *fin;
fin=fopen(argv[1],"r");
fscanf(fin,"%d",&num);
num=num/2;
int num_rec=0;
char *name;

rct=(rectangle_t *)malloc(num*sizeof(rectangle_t));

while(fscanf(fin, "%s%f%f", name, &x, &y)!=EOF && num_rec<num){
for(i=0;i<num_rec;i++){
    if (strcmp(name,rct[i].code)==0)
        break;
        }
    if (i==num_rec){
    strcpy(rct[i].code,name);
    rct[i].p1.x=x;
    rct[i].p1.y=y;
    num++;
    }
    else {
        rct[i].p2.x=x;
        rct[i].p2.y=y;
    }

}


    return 0;
}
