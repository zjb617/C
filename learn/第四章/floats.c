//floats.c -- 一些浮点型修饰符的组合
#include <stdio.h>
int main(void)
{
    //小数点前面的指的是字段宽度（一个数字，一个空格，一个小数点都算作一个字段宽度）若字段宽度小了，则会自动扩大，若大了，则默认以空格代替。后面的指的是精度，即小数点后数字的个数
    const double RENT = 3852.99; //const变量  即只读变量
    printf("*%f*\n", RENT);//默认六位小数
    printf("*%e*\n", RENT);//科学计数法并保留六位小数，不够简洁
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n",RENT);//字段宽度为3，而其是4位，故自动扩大为4位
    printf("*10.3*\n", RENT);
    printf("*%10.3E*\n", RENT);//简洁
    printf("*%+4.2f*\n", RENT);//把默认的空格换为+
    printf("*%010.2f*\n", RENT);//把默认的空格换为0
    return 0;
}