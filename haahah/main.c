#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100
int main()
{int i , row;
char line[max] ;
    FILE *fp;


    fp=fopen("in.txt","r");

    fgets(line,max,fp);
    sscanf(line,"%d",&row);












    char **m;
    m=(char**)malloc(row*sizeof (char*));
    for(i=0;i<row;i++)
    {
        m[i]=(char*)malloc(max*sizeof (char));
    }
    for(i=0;i<row && fgets(line,max,fp) != NULL ;i++){
        strcpy(m[i],line);
        puts(m[i]);
    }


    return 0;
}
