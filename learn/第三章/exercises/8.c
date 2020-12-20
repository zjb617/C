#include <stdio.h>
int main(void)
{
    float p=0.0,b=0.0,a=0.0,d=0.0,c=0.0;
    printf("Please input the amount of the cup:");
    scanf("%f",&b);
    p = b/2;
    a = b*8;
    d = a*2;
    c = d*3;
    printf("pint:%.3f,ounces:%.3f,tablespoons:%.3f,teespoons:%.3f", p, a, d, c);

    return 0;
}