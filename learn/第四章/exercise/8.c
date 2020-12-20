#include <stdio.h>
#define A 3.785
#define B 1.609
int main(void)
{
    double mileage, gasoline, mg;
    printf("Please input mileage(miles) and gasonline consumed(gallons):");
    scanf("%f%f", &mileage, &gasoline);
    mileage = (mileage * B);
    gasoline = gasoline * A;
    mg = gasoline / (mileage * 100);
    printf("%.1f km per liter of gasoline.\n", mg);
    printf("Use %.1f liter gasoline per 1 km.\n", 1 / mg);
    return 0;
}