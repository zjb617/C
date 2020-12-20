#include <stdio.h>
int main(void)
{
    int a, b;
    char c = 'A';
    for (a = 1; a <= 6; a++)
    {
        for (b = 1; b <= a; b++)
            printf("%c", c++);
        printf("\n");
    }
    return 0;
}