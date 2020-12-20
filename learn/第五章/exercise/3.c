#include <stdio.h>
#define D_PER_W 7
int main(void)
{
    int days;
    printf("Please input days:");
    scanf("%d", &days);
    while (days>0)
    {
        printf("%d days are %d weeks, %d days.\n", days, days/D_PER_W, days%D_PER_W);
        printf("Input a number > 0 to continue, <=0 to quit.");
        scanf("%d", &days);
    }
    printf("Done!");
    return 0;
}