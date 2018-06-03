#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100
float my_atof(char*s);
float chartofloat(char*s,int i);
float add(float beforepoint,float afterpoint,int point);
int main()
{
    float mynum;
    char s[MAX] = "-5532.201";
    printf("my string is %s \n",s);
//    scanf("%s",s);
    mynum=my_atof(s);
    printf("my float number is %0.3f",mynum);

    return 0;
}
float my_atof(char*s){

    float beforepoint=0,mynumber=0;
    float neg_sign;
    int length,point,i;
    float afterpoint;
    length=strlen(s);
    if (s[0]=='-')
        neg_sign=1;
    else
        neg_sign=0;
    for(i=1;i<length;i++)
        if(s[i] == '.' )
            point=i;


    for(i=1;i<point;i++)
        beforepoint+=chartofloat(s,i)*pow(10,point-i-1);

    for(i=point+1;i<length;i++)
        afterpoint += chartofloat(s,i)*pow(10,length-i-1);
    if(neg_sign){
        beforepoint *= -1;
        afterpoint *= -1;
    }
    mynumber= add(beforepoint,afterpoint,length-point-1);
    return mynumber;

}
float chartofloat(char*s,int i){
    float number=(float) (s[i] - '0');
return number;

}

float add(float beforepoint,float afterpoint,int point){

afterpoint = afterpoint / (float)pow(10,point);
float urnumber= beforepoint + afterpoint;
return urnumber;

}






