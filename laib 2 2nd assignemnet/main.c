#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main(int argc,char*argv[])
{
    if(argc<2){
        printf("Error:missing parameter \n");
        printf("Run as : %s <input file>. \n",argv[0]);
        return 1;
        }
      int count,countH,countV,i;
      count=countH=countV=i=0;
      char line[MAX],mat[5][MAX];

    FILE *fp;
    fp=fopen("New Text Document (2).txt","r");
    if(fp==NULL){
        printf("Erroe opening the file \n");
        return 1;
    }

    while(fgets(line,100,fp)!=NULL){
            countH+=checkH(line);
     for(i=0;i<strlen(line);i++){
                mat[count%5][i]=line[i];




                }
                count++;

                 countV+=checkV(mat);
    }


        print(&countH,&countV);

    return 0;

}

int checkH(char line[MAX]){
    int flag,i,j,count;
     count=flag=i=j=0;
for(i=0;i<strlen(line);i++){
        flag=0;
    if (line[i]=='h'){
        for(j=i+1;j<i+5 && flag==0;j++){
            if(line[j] !='h'){
                flag=1;
            }
        }

        if(flag==0)
            count++;
    }

}
return count;
}




int checkV(char mat[5][MAX]){
    int count,flag,i,j;
     count=flag=i=j=0;
for(i=0;i<MAX;i++){
        flag=0;
    if (mat[0][i]=='v'){
        for(j=0;j<4 && flag==0;j++){
            if(mat[j+1][i] !='v'){
                flag=1;

            }
        }
if (flag==0)
    count++;

    }


}
return count;




}



       void print(int *countH,int *countV){


       printf("the number of v sequences are %d \n",*countV);

              printf("the number of h sequences are %d \n",*countH);



       }

