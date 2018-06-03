#include <stdio.h>
#include <stdlib.h>


 void recursive(char *,char *,char *,int,int,int);

int main()
{


       char myarray[10]={'0','1','2','3','4','5','6','7','8','9'};
              char myalfa[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

       char *mypass=malloc(5*sizeof(char));

    printf("write a program to collect all possible set composite of 3 numberssand two leters \n");


       recursive(myarray,myalfa,mypass,0,0,0);

       printf("%s \n",mypass);



    return 0;
}




 void recursive(char *myarray,char *myalfa,char *mypass,int level,int m,int n){

 int i,j;
 if(level>=5){

    return ;
 }

 if(level>=3){
    for(i=m;i<26;i++){

        mypass[level]=myalfa[i];
        recursive(myarray,myalfa,mypass,level+1,m+1,n);
return;
    }


 }

  if(level<3){
    for(j=n;j<10;j++){
        mypass[level]=myarray[j];
        recursive(myarray,myalfa,mypass,level+1,m,n+1);
    return;
    }


 }




return;





 }
