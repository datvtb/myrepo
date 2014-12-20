#include <stdio.h>
#include <string.h>	//A

#define MAX 100	//A

int main(int argc, char ** argv)
{
  char name[MAX];	//A
  printf("Enter your name: \n");	//A
  fflush(stdin);	//A
  gets(name);	//A
  return 0;
}
