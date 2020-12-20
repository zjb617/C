/*praise1.c -- 使用不同类型的字符串*/
#include <stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
    char name[40];
    printf("What's your name?");
    scanf("%s", name);//  %s只读取字符串中的一个单词，不会读取整个句子
    printf("Hello, %s.%s\n", name, PRAISE);
    return 0;
}