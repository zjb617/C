#include <stdio.h>
int main(void)
{
    long a, b, c, d, e;
    printf("Please enter an upper integer limit:");
    scanf("%ld", &a);
    printf("Please enter an integer lower limit:");
    scanf("%ld", &b);
    printf("%20s%20s%20s%20s\n", "No.", "number", "square", "cube");
    for (c=1; c<=a-b+1; c++)
    {
        d = (b+c-1)*(b+c-1);
        e = (b+c-1)*(b+c-1)*(b+c-1);
        printf("%20d%20ld%20ld%20ld\n", c,b+c-1,d,e);
    }
    return 0;
}