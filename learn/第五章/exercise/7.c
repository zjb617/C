#include <stdio.h>
void cube (double n);
int main(void)
{
    double number = 0.0;
    printf("Please input a number:");
    scanf("%lf", &number);
    cube(number);
    return 0;
}

void cube (double n)
{
    printf("The cube of %f is: %f.\n", n,n*n*n);
}