#include <stdio.h>
#include <stdlib.h>

int main()
{
    char v[1000]="This is a phrase to split into sub-string";
    char **m;
    int n,i;

 n=phrase_split(v,&m);
 for(i=0;i<n;i++){
    printf("%s \n",m[i]);
 }


    return 0;
}



int phrase_split(char *v,char ***m){
int i,counts=0,last,k,j;
char **mat;
char str[100];

for(i=0;v[i]!='\0';i++){

    if(v[i]==' ')
        counts++;

}
counts++;

mat=malloc(counts*sizeof(char*));
for(i=0;i<counts;i++)
    mat[i]=malloc(100*sizeof(char));


last=0;

while(v[i]!='\0'){
j=0;
for(i=last;;i++){
    if(v[i]!=' '){
    mat[k][j]=v[i];

    j++;}

    if(v[i]==' ' || v[i]=='\0'){
             mat[k][j]='\0';
    k++;
        last=i+1;
           break;
           }

}


}




*m=mat;
return counts;




}
