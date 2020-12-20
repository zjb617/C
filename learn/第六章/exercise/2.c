#include <stdio.h>
#define ROWS 5
int main(void)
{
    int a, b;
    for (a = 1; a<=ROWS; a++)
    {
        for (b = 0; b < a; b++)
            printf("$");
        printf("\n");
    }
    return 0;
}