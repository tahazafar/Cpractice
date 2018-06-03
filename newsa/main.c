#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check1(char **,int,char *);
void password_cracke(char**,int,char*);


int main()
{
    char **m,*str;
 m=malloc(3*sizeof(char*));
 m[0]=malloc(6*sizeof(char));
 m[1]=malloc(6*sizeof(char));
 m[2]=malloc(6*sizeof(char));

  m[0][0]='a' ;
  m[0][1]='b' ;
  m[0][2]='r' ;
  m[0][3]='a' ;
  m[0][4]='\0';
  m[1][0]='k';
  m[1][1]='a';
  m[1][2]='\0';
  m[2][0]='d';
  m[2][1]='a';
  m[2][2]='b';
  m[2][3]='r';
  m[2][4]='a';
  m[2][5]='\0';
  str=malloc(20*sizeof(char));
  str="kadabradabradabra";
  password_cracke(m,3,str);
    return 0;
}


void password_cracke(char**m,int n,char *attempt){
 int i ,j=1;
int  level=0;
int start=0;
for(i=start;i<=strlen(attempt);i++){
    char *str=malloc(100*sizeof(char));
j=check(m,n,attempt,&level,0,str);
start=level;

if(j==0) {

break;
}
  printf("%d ",start);
}

return;

}


int check(char **m,int n,char *attempt,int *level,int start,char *str){
int i,j;
if(check1(m,n,str)==1)
    return 1;
    if((*level)>=strlen(attempt))
        return 0 ;


for(i=(*level);i<strlen(attempt);i++){
    str[start]=attempt[(*level)];
    str[start+1]='\0';
    (*level)=(*level)+1;
   if(check(m,n,attempt,level,start+1,str))
   return 1;
   else
        return 0;

}

}

  int check1(char **m,int n,char *str){
int flag=0 ,i;
for(i=0;i<n;i++)
if (strcmp(str,m[i])==0)
    return 1;

return 0;

}


