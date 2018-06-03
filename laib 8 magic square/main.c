#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int magicsquare(int *,int *,int *,int**,int,int,int);
void check(int,int ,int **);

int main(int argc,char *argv[])

{

int dim,nums,**mat,i,*sol,*val,*mark;

dim=atoi(argv[1]);

nums=dim*dim;


mat=(int**)malloc(dim*sizeof(int*));

   for(i=0;i<dim;i++)
      mat[i]=(int*)malloc(dim*sizeof(int));


sol=(int*)malloc(nums*sizeof(int));
val=(int*)malloc(nums*sizeof(int));
mark=(int*)malloc(nums*sizeof(int));


for(i=0;i<nums;i++)
    val[i]=i+1;


for(i=0;i<nums;i++)
    mark[i]=0;



magicsquare(sol,val,mark,mat,dim,nums,0);


   for(i=0;i<dim;i++)
      free(mat[i]);

      free(mat);
      free(sol);
      free(mark);
      free(val);
    return 0;
}
int magicsquare(int *sol,int *val,int *mark,int **mat,int dim ,int nums,int pos){

int i,j,k;

     if(pos>=nums){


      check(nums,dim,mat);
      return 0;
     }

i=pos/dim;
j=pos%dim;


   for(k=0;k<nums;k++){
    if(mark[k]==0){
        mark[k]=1;
     mat[i][j]=val[k];
     magicsquare(sol,val,mark,mat,dim,nums,pos+1);
    mark[k]=0;
   }
   }




       return 0;


}









void check(int num,int dim,int **mat){


int i,j,sum=0,target;

target=dim*(dim*dim+1)/2;

for(i=0;i<dim;i++){
        sum=0;
    for(j=0; j<dim; j++){
        sum+=mat[i][j];
    }
if(sum!=target)
    return;
}


for(j=0;j<dim;j++){
        sum=0;
    for(i=0;i<dim;i++){
        sum+=mat[i][j];
    }
if(sum!=target)
    return;
}


sum=0;
for(i=0;i<dim;i++){

        sum+=mat[i][i];
}
if(sum!=target)
    return;

sum=0;
for(i=0;i<dim;i++){

        sum+=mat[i][dim-1-i];
}
if(sum!=target)
    return;







  for(i=0;i<dim;i++){
    for(j=0;j<dim;j++){


printf("%d  ",mat[i][j]);

  }
printf("\n");
}
printf("\n");
}

