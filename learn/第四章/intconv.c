//intconv.c -- 一些不匹配的整型转换
#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;
    printf("num as short and unsigned short: %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);//后者0~32767代表本身，32768~65535表示负数，65535表示-1，65534表示-2，依此类推
    printf("num as int and char: %d %c\n", num, num);//对于%c   该数字被解释成“以256为模”（modulo 256），即该数字除以256后取其余数 对应的ASCII值
    printf("WORDS as int, short,and char:%d %hd %c\n", WORDS,WORDS, WORDS);
    return 0;
}