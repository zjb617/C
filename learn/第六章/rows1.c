//rows1.c -- 使用嵌套循环
#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main(void)
{
    int row;
    char ch;
    for (row = 0; row<ROWS;row++)    //第十行  外层循环
    {
        for (ch = 'A'; ch < ('A' + CHARS); ch++)  //第十二行  内层循环qiantaixunhuan
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}