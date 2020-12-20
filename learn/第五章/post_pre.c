//post_pre.c -- 前缀和后缀
#include <stdio.h>
int main(void)
{
    int a=1, b=1;
    int a_post, pre_b;
    a_post = a++;  //后缀递增   先将a赋值给a_post，得a_post=1,再执行a++，得到a=2，   即++号在后，则最后执行+
    pre_b = ++b;  //前缀递增   先执行++b，得b=2,再将b赋值给pre_b,得pre_b=2          即++号在前，则最先执行+
    printf("a  a_post  b  pre_b  \n");
    printf("%ld %5d %5d %5d\n", a, a_post, b, pre_b);
    return 0;
}