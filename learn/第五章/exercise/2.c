#include <stdio.h>
int main(void)
{
    int a, b=0;
    printf("Please input an integer:");
    scanf("%d", &a);
    while (b++<11)
    {
        printf("%d  ", a++);  //先把a放到%d，再把a加1
    }
    return 0;
}
