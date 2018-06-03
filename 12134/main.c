#include <stdio.h>
#include <stdlib.h>
struct labs{char equipment[50];
char teacher[50];
int id[10];
int room[15];};

void scan(struct labs lab);
void print(struct labs lab );
int main()
{
    struct labs lab1;
    struct labs lab2;

   scan(lab1);
    scan(lab2);
    print(lab1);
    print(lab2);
    return 0;
}

void scan(struct labs lab )
{
    printf("equipment\n");
    scanf("%s",&lab.equipment);
    printf("teacher\n");
    scanf("%s",&lab.teacher);
    printf("id\n");
    scanf("%d",&lab.id);
    printf(" room no\n");
    scanf("%d",&lab.room);

}



  void print(struct labs lab )
  {

      printf("equipment is %s\n",lab.equipment);
      printf("teacher is %s\n",lab.teacher);
      printf("lab id is%d\n",lab.id);
      printf("lab room is %d\n",lab.room);









  }








