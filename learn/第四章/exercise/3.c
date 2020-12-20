#include <stdio.h>
int main(void)
{
    double a=0;
    printf("Input a decimal:");
    scanf("%lf", &a);
    printf("a.Input %.1lf or %.1e\n", a, a);
    printf("b.Input %+.3lf or %.3E\n", a ,a);
    return 0;
}