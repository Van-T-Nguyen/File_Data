/* Author  : Van Nguyen
 * Class   : Data Structures
 * Project : Hello, World
 * Due Date: 2019.02.08
*/

#include <stdio.h>

double average(int []);
int greatest(int []);
int least(int []);


int main(void)
{
  FILE * fp;
  int numbers[20];
  fp = fopen("project_02_data.txt", "r");
  for (int i = 0; i < 20; i++)
  {
    fscanf (fp, "%d", &numbers[i]);
  }
  printf("The average value is: %.1f\n", average(numbers));
  printf("The highest value is: %d\n", greatest(numbers));
  printf("The lowest value is: %d\n", least(numbers));
  getchar();
  getchar();
  return 0; 
}

double average(int numbers[])
{
  int total = 0;
  double avg = 0;
  for (int i = 0; i < 20; i++)
  {
    total += numbers[i];
  }
  avg = (total / 20.0);
  return avg;
}

int greatest(int numbers[])
{
  int big = 0;
  for (int i = 0; i < 20; i++)
  {
    if (numbers[i] > big)
    {
      big = numbers[i];
    }
  }
  return big;
}

int least(int numbers[])
{
  int small = numbers[0];
  for (int i = 1; i < 20; i++)
  {
    if (numbers [i] < small)
    {
      small = numbers[i];
    }
  }
  return small;
}