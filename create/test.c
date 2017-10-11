#include<stdio.h>

int main()
{
  int var = 10;
  asm("incl %0":"=a"(var):"0"(var));
  printf("%d\n",var);
  return 0;
}
