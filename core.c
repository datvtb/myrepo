#include <stdio.h>
#include <string.h>	//B
#include <string.h>	//A

#define DELAY_PERIOD 3000  //C
#define TIMEOUT 5000  //C

#define MAX 100	//A

int sum(int, int);	//B

int main(int argc, char ** argv)
{
  int x, y;	//B
  printf("Hello World GitHub\n");

  //B
  printf("\nEnter x = ");
  scanf("%d", &x);
  printf("\nEnter y = ");
  scanf("%d", &y);
  printf("\nx + y = %d", sum(x, y));

  return 0;
}

//B
int sum(int a, int b)
{
  return (a + b);
}
