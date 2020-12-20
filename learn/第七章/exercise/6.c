#include <stdio.h>
int main(void)
{
    char ch;
    char ch_pre = 0;  //前一个字符 
    int n = 0; //记录ei出现 的次数
    printf("Enter words(count ei occurrence times, # to leave):\n");
    while ((ch = getchar()) != '#')
    {
        if ((ch_pre == 'e') && (ch == 'i'))
            n++;
        ch_pre = ch;  //关键
    }
    printf("\"ei\" appeared %d times.\n", n);
    return 0;
}