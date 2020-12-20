//convert.c -- 自动类型转换
#include <stdio.h>
int main(void)
{
    char ch;
    int i;
    float fl;
    fl = i = ch = 'C';    //9
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); //10
    ch = ch + 1;  //11
    i = fl + 2*ch;  //12
    fl = 2.0*ch + i; //13
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); //14
    ch = 1107; //15
    printf("Now ch = %c\n", ch);  //16
    ch = 80.89;  //17
    printf("Now ch = %c\n", ch);
    return 0;

}