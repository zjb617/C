#include <stdio.h>
int main(void)
{
    char ch;
    int space = 0, enter = 0, other = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            space++;
        else if (ch == '\n')
            enter++;
        else 
            other++;
    }
    printf("space:%d, enter:%d, other:%d",space ,enter, other);
    return 0;
}