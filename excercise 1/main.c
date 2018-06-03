#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char s="foo";
 char mat[4][6] ={"xfoox","yoxzf","xo2fo","g4xao" };
 int r=4;
 int c=5;
int number=mat_search(mat,r,c,s);
printf("%d",number);




    return 0;
}
mat_search(char **mat,int r , int c ,char *s){
  int j,i,m;
    int k ;
    int flag=0;
    int occurence=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        {
            if(s[0]==mat[i][j]){

                for(k=i;i<strlen(s)+1 && flag=0;k++){
                    int m=0;
                    if (mat[k][j]==s[m]){


                        m++;
                    }
                    else flag=1;}

                    if(flag==0){
                        occurence ++;}
                        flag=0;
                        for(k=j;j<strlen(s)+1;k++){

                            m=0;
                            if(mat[i][j]==j[m]){
                                m++;
                            }
                            else flag=1;}
                            if (flag=0)
                                occurence++;
                        }

                    }
                    }


                }
           }
