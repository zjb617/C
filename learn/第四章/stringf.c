//stringf.c -- 字符串格式
#include <stdio.h>
#define BLURB "Authentic imitation"
int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);//精度限制了了打印字符的个数
    printf("[%-24.5s]\n", BLURB);
    return 0;
}