#include <stdio.h>
int main(void)
{
   int i, k;
   for (i = 3; i <= 4; i++)
      for (k = 1; k <= 2; k++)
         printf("*");
   printf("#");
}