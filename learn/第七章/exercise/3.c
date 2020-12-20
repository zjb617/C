#include <stdio.h>
int main(void)
{
    long even_num = 0, odd_num = 0;
    long num;
    long even_sum = 0, odd_sum = 0;
    printf("Please enter an integer (0 to quit):");
    for (scanf("%ld", &num); num != 0;)
    {
        if (num % 2 == 0)
        {
            even_num++;
            even_sum += num; //计算偶数和
        }
        else
        {
            odd_num++;
            odd_sum += num; //计算奇数和
        }
        printf("Please enter another integer(0 to quit):");
        scanf("%ld", &num);
    }
    printf("\n");
    printf("even numbers:%ld, average:%.3f\n", even_num, (even_num == 0) ? 0 : ((float)even_sum / even_num));
    printf("odd numbers:%ld, average:%.3f\n", odd_num, (odd_num == 0) ? 0 : ((float)odd_sum / odd_num));
    return 0;
}