//拼接两个字符串
#include <stdio.h>
#include <string.h> //strcat()函数的原型
#define SIZE 80
char *s_gets(char *st, int n);
int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    puts("What is your favorite flowers?");
    if (s_gets(flower, SIZE))
    {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }
    else
        puts("End of the file encountered!");
    puts("bye");
    return 0;
}

char *s_gets(char *st, int n)
{
    char *rel_val;
    int i = 0;
    rel_val = fgets(st, n, stdin);
    if (rel_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return rel_val;
}