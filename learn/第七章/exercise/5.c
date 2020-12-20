#include <stdio.h>
int main(void)
{
    char words;
    int n = 0; //字符数
    printf("Please enter content (# to quit):\n");
    while ((words = getchar()) != '#')
    {
        switch (words)
        {
            case '.':
                words = '!';  //替换句号
                n++;
                break;
            case '!':
                printf("!");  //替换！
                n++;
                break;
            default:
                break;
        }
        putchar(words);
    }
    printf("A total of %d operations were performed.\n", n);
    return 0;
}