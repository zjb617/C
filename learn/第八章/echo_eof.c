//echo_eof.c -- 重复输入，直到文件末尾   ctrl+z结束
#include <stdio.h>
int main(void)
{
    int ch;
    while ((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}