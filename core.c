#include <stdio.h>
#include <conio.h>

#define REG_A 0x01
#define REG_B 0x02
#define REG_C 0x03

#ifdef VERSION2
#define REG_D 0x04
#define REG_E 0x05
#endif

int sum(int, int);	//B

int main(void)
{
  int x, y;	//B

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
