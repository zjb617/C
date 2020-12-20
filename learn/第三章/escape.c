/*escape.c -- 使用转义序列*/
#include <stdio.h>
int main(void)
{
    float salary;
    printf("\aEnter your desired monthly salary:");//1  \a 使机箱发出警报声，但是现代的计算机机箱里都没有蜂鸣器，所以一般听不到声音
    printf(" $_______\b\b\b\b\b\b\b");//2   \b 退格符，将光标退7格
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary*12.0);//3  \n 换行  \t 将光标向后移4单位   %.2f表示保留两位小数  .代表小数 2代表精度 无小数点即表示保留两位精度            
    printf("\rGee!\n");//4  \r 使光标返回当前行的起始位置
    return 0;
}   