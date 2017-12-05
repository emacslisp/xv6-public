#include<stdio.h>

int main()
{
  int var = 10;
  int a=10, b;  
  asm("incl %0":"=a"(var):"0"(var));
  printf("%d\n",var);
  asm("movl %1, %%eax; movl %%eax, %0;"
       :"=r"(b)        /* output */
       :"r"(a)         /* input */
       :"%eax"         /* clobbered register */
    );
  printf("b=%d\n",b);
  
  return 0;
}
