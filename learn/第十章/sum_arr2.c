//数组元素之和
#include <stdio.h>
#define SIZE 10
int sump(int *start, int *end);
int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    return 0;
}

int sump(int *start, int *end) //这个数组的大小是
{
    int total = 0;
    while (start < end)
    {
        //total += *start;
        //start++;这两行等同于
        total += *start++;//*和++优先级相同，故按照从右到左，所以先执行start++，而start++表达式的值是start（不是执行的结果，是表达式）；++start表达式的值是start+1，所以total加的是start指向的值
    }
    
    return total;
}