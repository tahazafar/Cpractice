#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{

    my_atof("-123.45");
    return 0;
}


void my_atof(char *s ){
float z;

z=atof(s);
printf("%f",z);



}
