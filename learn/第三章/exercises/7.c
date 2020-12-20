#include <stdio.h>
int main(void)
{
    float height=0.0, a=0.0;//变量初始化可以防止报错或出现bug
    printf("Please input your height(inch):");
    scanf("%f", &height);
    a = height*2.54;
    printf("Your height is %.2f cm.\n", a);

    return 0;
}