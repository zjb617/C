#include <stdio.h>
int main(void)
{
    float size,time,speed;
    printf("Please input the file size(MB) and bandwidth(Mb/s):");
    scanf("%f%f", &size,&speed);
    time=size*8.0/speed;
    printf("At %.2f megabits per second,a file of %.2f"
    " megabytes\ndownloads in %.2f seconds.\n", speed, size, time);
    return 0;
}