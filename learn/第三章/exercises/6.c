#include <stdio.h>
int main(void)
{
    float water=0.0, n=0.0;
    double m;
    printf("Please input the quart of water:\n");
    scanf("%f", &water);
    n = water*950;
    m = n/3.0e-23;
    printf("So the hydrone of %.2f gram is %le\n", n, m);

    return 0;
}