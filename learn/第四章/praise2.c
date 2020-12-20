#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
    char name[40];
    printf("What's your name?");
    scanf("%s", name);
    printf("Hello, %s.%s\n", name, PRAISE);
    printf("Your name of %zd lettera occupies %zd memory cells.\n", strlen(name), sizeof name);  //sizelen计算字符串的长度，而sizeof计算把不可见的空字符串也计算进去了
    printf("The phrase of praise has %d letters", strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);
    return 0;
}