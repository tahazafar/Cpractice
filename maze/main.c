#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define EMPTY ' '
#define START '@'
#define STOP  '#'
#define PATH  '$'
#define DONE  '.'


const int xOFF[4]={0,1,0,-1};
const int yOFF[4]={-1,0,1,0};

int move_r_one(char **,int ,int ,int ,int );
void display(char **,int);

int main(int argc ,char*argv[])
{ int r=-1,c=-1,i,j,nr,nc,res;

   char **mazeCurr,**mazeBest;
   char line[MAX];
   FILE *fp;

   if(argc<2){
    printf("missing parameter");
    printf("Run as %s",argv[0]);
    exit(EXIT_FAILURE);
   }
   fp=fopen(argv[1],"r");
   fgets(line,MAX,fp);
   sscanf(line,"%d %d",&nr,&nc);
   mazeCurr=(char**)malloc(nr*sizeof(char *));
   mazeBest=(char**)malloc(nr*sizeof(char *));
   for(i=0;i<nr;i++){
    fgets(line,MAX,fp);
    mazeCurr[i]=strdup(line);
    mazeBest[i]=strdup(line);
    for(j=0;j<nc;j++){
        if(mazeCurr[i][j]==START){
            r=i;
            c=j;

        }
      }
    }

   if(r<0 || c<0){
        printf("NO STARTING POSITION FOUND");
    exit(EXIT_FAILURE);
    }

   printf("FIND ONE SOLUTION \n");
   mazeCurr[r][c]=EMPTY;
   res=move_r_one(mazeCurr,nr,nc,r,c);
   if(res==1){
    mazeCurr[r][c]=START;
    display(mazeCurr,nr);
   }else{

   printf("no solution found");
   }





    return 0;
}

int move_r_one(char **mazeCurr,int nr,int nc,int row,int col)
{

int k,r,c;
if(mazeCurr[row][col]==STOP){
    return 1;
}

if(mazeCurr[row][col]!=EMPTY){
    return 0;
}

mazeCurr[row][col]=PATH;
for(k=0;k<4;k++){

    r=row+xOFF[k];
    c=col+yOFF[k];
    if(r>=0 && r<nr && c>=0 && c<nc){
        if(move_r_one(mazeCurr
                      ,nr,nc,r,c)==1)
                        return 1;
    }
}
mazeCurr[row][col]=DONE;
return 0;

}
void display(char **maze,int nr){
int i;
for(i=0;i<nr;i++)
    printf("%s",maze[i]);




}

