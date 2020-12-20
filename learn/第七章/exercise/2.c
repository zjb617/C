#include <stdio.h>
int main(void)
{
    char ch;
    int n = 1;  //字符数
    printf("Please enter some words(# to quit):");
    while ((ch = getchar()) != '#')
        {
            printf("%3c: %3d", ch, ch);
            if (n++ % 8 == 0)
                printf("\n");
        }
        return 0;
}