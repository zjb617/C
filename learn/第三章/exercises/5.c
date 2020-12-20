#include <stdio.h>
int main(void)
{
    int ages;
    double seconds;
    printf("How old are you?");
    scanf("%d", &ages);
    seconds = ages*3.156e7;
    printf("Your age is corresponding to the number of seconds:%e s.", seconds);

    return 0;
}