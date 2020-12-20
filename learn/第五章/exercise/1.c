#include <stdio.h>
#define M_PER_H 60
int main(void)
{
    int mins;
    printf("Please input the minutes:");
    scanf("%d", &mins);
    while (mins > 0)
    {
        printf("The result is %d H %d min.\n", mins/M_PER_H, mins%M_PER_H);
        printf("Try to input a number >0 to continue,<=0 to quit.");
        scanf("%d", &mins);
    }
    printf("Done!");
    return 0;
}