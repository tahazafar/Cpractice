#include <stdio.h>
#include <ctype.h>

int main(int argc,char*argv[])
{    char *fp,*fq,c;
int n ,block=0;
if(argc<3){

    printf("missing parameter");
    return  ;
}
      fp=fopen(argv[1],"r");
   if(fp==NULL){
    printf("problem in opening file");
    return 1 ;
      fq=fopen(argv[2],"w");
   if(fq==NULL){
    printf("problem in opening file");
    return 1 ;

   }


   while(fscanf(fp,"%c",&c)!=EOF){
   if (c!="\n"){
    if(c==""){
        block=1;
    }
   }
   else if(block){
    c=toupper(c);
    n++;

   }if(n==20){fprintf(fq,"\n",c);n=0;}
   else if(n!=20 && c=="\n"){fprintf(fq,"\n",c);

   }
   else
   fprintf(fq,"%c",c);

   }








   }

   fclose(fp);
   fclose(fq);

    return 0;
}
