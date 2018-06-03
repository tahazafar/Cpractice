#include <stdio.h>
 #include <string.h>

 #define MAX 100
void strreplace(char *src, char *str, char *rep);
 int main(int argc,char *argv[])
 { char src[MAX],str[MAX],rep[MAX];
  strcpy(src,"mnopqabcdefghilmnopqrstuvzmnopq");
 strcpy(str,"mnopq");
 strcpy(rep,"########");

strreplace(src, str, rep);

 printf("%s",src);



 return 0;
 }
void strreplace(char *src, char *str, char *rep)
{
    char *p = strstr(src, str);
    do
    {
         char buf[1024];
            memset(buf,'\0',strlen(buf));

            if(src == p) /*the string we are finding is at the start*/
            {
                strcpy(buf,rep);
                strcat(buf,p+strlen(str));
            }
            else
            {
                strncpy(buf,src,strlen(src) - strlen(p));/*SUPPOSE P IS AT 5(TOTAL LENGHT AFTER T IS 10) SRC IS AT O
                 (TOATAL LENGTH IS 15)....
                SO THIS CODE COPIES FIRST 5 LETTERS BEFORE P */
                strcat(buf,rep);
                strcat(buf,p+strlen(str));/*It's pointer arithmetic. For instance:

char* str = "hello";
printf("%s\n", str + 2);
Output: llo. Because str + 2 point to 2 elements after str, thus the first l. */
            }

            memset(src,'\0',strlen(src));
            strcpy(src,buf);

    }while(p = strstr(src, str));


}
