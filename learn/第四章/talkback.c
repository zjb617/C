//talkback.c -- 演示与用户交互
#include <stdio.h>
#include <string.h>  //提供strlen()函数的原型
#define DENSITY 62.4  //人体密度（单位：磅/立方英尺）
int main()
{
    float weight, volume;
    int size,letters;
    char name[40];  //name是一个可容纳40个字符的数组  方括号代表这是一个数组，数字40代表数组中元素的数量，char代表元素的类型
    printf("Hi!What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well,%s,your volume is %2.2f cubic feet.\n", name, volume);//%2.2f中的第一个2代表有效数字个数，第二个2代表小数点后的位数
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);
    return 0;

}