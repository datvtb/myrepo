#include <stdio.h>
#include <string.h>	//B
#include <conio.h>	//B

int counter;	//B
int sum(int, int);	//B

int main(int argc, char ** argv)
{
  int x, y;	//B
  printf("Hello World\n");

  //B
  printf("\nEnter x = ");
  scanf("%d", &x);
  printf("\nEnter y = ");
  scanf("%d", &y);
  printf("\nx + y = %d", sum(x, y));

  return -1;	//B
}

//B
int sum(int a, int b)
{
  return (a + b);
}
