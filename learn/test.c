#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
   int age;
   printf("请输入你的年龄\n");
   scanf("%d", &age);
   if (age >= 18)
   {
      printf("你可以使用此软件");
   }
   else
   {
      printf("你年龄不够，不可使用此软件");
   }
   return 0;
}