#include <stdio.h>
int main(void)
{
    float a;
    printf("Please onput a decimal:");
    printf("_____\b\b\b\b\b");
    scanf("%f", &a);
    printf("Enter a floating-point value:%.2f\n", a);
    printf("fixed-point notation:%f\n", a);//定点计数法
    printf("exponential notation:%e\n");//指数计数法
    printf("p notation:%.2a\n");//十六进制计数法

    return 0;
}