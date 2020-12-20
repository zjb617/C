#include <stdio.h>
int main(void)
{
    char words;
    int n = 0;  //字符数
    printf("Please enter content(# to quit):\n");
    while ((words = getchar()) != '#')
    {
        if (words == '.')
        {
            words = '!';  //替换句号
            n++;
        }
        else if (words == '!')
        {
            printf("!");
            n++;
        }
        printf("%c", words);
    }
    printf("A total of %d operations were performed.\n", n);
    return 0;

}