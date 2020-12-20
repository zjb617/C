/*longstrg.c -- 打印较长的字符串*/
#include <stdio.h>
int main(void)
{
    printf("Here's one way to print a");
    printf("long string.\n");
    printf("Here's another way to print a\
long string.\n");//必须靠左，否则空格也会到输出的字符串中
    printf("Here's the newest way to print a"
    "long string.\n");  //ANSIC
    return 0;
}