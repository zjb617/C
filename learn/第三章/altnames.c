#include <stdio.h>
#include <inttypes.h>
int main(void)
{
    int32_t me32;
    me32 = 45933945;
    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");//注意\"为转义序列，用来显示双引号
    printf("me32 = %" PRId32 "\n", me32);//等价于printf("me16 = %" "d" "\n", me16);又等价于printf("me16 = %d\n", me16);
    return 0;
}