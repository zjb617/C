/*varwid.c -- 使用变宽输出字段*/
#include <stdio.h>
int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;
    printf("Enter a field width:\n");
    scanf("%d",&width);
    printf("The number is:%*d:\n", width, number);  //width代表的是*，而*代表的是字段宽度，number则代表的是d
    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &width,&precision);
    printf("Weight=%*.*f\n",width,precision,weight);  //width-->第一个*，precision-->第二个*，即小数点后数字个数，weight-->f
    printf("Done!\n");
    return 0;
}