#include <stdio.h>
#include <stdlib.h>
int mult (int , int);

int main()
{
   int res,x,y;
   x=20;
   y=10;
   res=mult (x, y);
   printf("%d\n",res);

    return 0;
}

int mult (int x, int y){
 int res=0;
    if(y==1)
      return x;
 else {

return x  + mult(x,y-1);

 }
//printf("%d\n",x);


}
