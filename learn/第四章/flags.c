//flags.c -- 演示一些格式标记
#include <stdio.h>
int main(void)
{
    printf("%x %X %#x\n", 31, 31, 31);//十六进制，#将在开头部分添加0x
    printf("**%d**% d**% d**\n", 42, 42, -42);//注意第二、三个d前有空格，结果：正值-->生成前导空格，负值-->不生成前导空格
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);//0标记和精度一起出现时0标记会被忽略  %5.3d会生成足够的0来满足最小位数的要求
    return 0;
}