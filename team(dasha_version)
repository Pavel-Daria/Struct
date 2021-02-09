#include <stdio.h>
#define size 3

struct team
{
  char name[20];
  char city[20];
  int score;
};

void fill(struct team *team);
void max_score(struct team *team);

void fill(struct team *team)
{
  struct team t[size];
  for (int i = 0; i < size; i++)
  { 
    printf("Введите название %d команды: ", i+1);
    scanf("%s", t[i].name);
    printf("Введите город %d команды: ", i+1);
    scanf("%s", t[i].city);
    printf("Введите очки %d команды: ", i+1);
    scanf("%d", &t[i].score);  
    printf("\n");  
  }
  for (int i = 0; i < size; i++)
  {
    printf("Название %d команды: %s\n", i+1, t[i].name);
    printf("Город %d команды: %s\n", i+1, t[i].city);
    printf("Очки %d команды: %d\n", i+1, t[i].score);
    printf("\n");
  }
}

void max_score(struct team *team)
{
  struct team t[size];
  int max = 0;
  int num = 0;
  for (int i = 1; i < size; i++)
  {
    if (t[i].score > max)
    {
      max = t[i].score;
      num = i;
    } 
  }
  printf("Команда с наибольшим количеством очков: %s", t[num].name);
}

int main()
{
  struct team *t;
  fill(t);
  max_score(t);
    
  return 0;
}
