#include <stdio.h>
#include <string.h>

struct Team
{
  char name[15];
  char city[15];
  int score;
};


void input_and_maximum_score(struct Team *team)
{
  struct Team t[3];
  for (int i = 0; i < 3; i++)
  { 
    printf("Введите название %d команды: ", i+1);
    scanf("%s", t[i].name);
    printf("Введите город %d команды: ", i+1);
    scanf("%s", t[i].city);
    printf("Введите очки %d команды: ", i+1);
    scanf("%d", &t[i].score);    
  }
  int max = 0;
  int num = 0;
  for (int i = 1; i < 3; i++)
  {
    if (t[i].score > max)
    {
      max = t[i].score;
      num = i;
    } 
  }
  
  printf("Команда с наибольшим количеством очков: \n");
  printf("%s \n", t[num].name);
  printf("%s \n", t[num].city);
  printf("%d \n", t[num].score);

}

int main()
{
  struct Team *team;
  input_and_maximum_score(team);
    
  return 0;
}
