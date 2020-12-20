#include <stdio.h>
int main(void)
{
    int a,b;
    for (a = 1; a <= 6; a++)
    {
        for (b = 0; b < a; b++)
            printf("%c", (int)'F' - b);
        printf("\n");
    }
    return 0;
}