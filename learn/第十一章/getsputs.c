//使用get()和puts()
#include <stdio.h>
#define STLEN 81
int main(void)
{
    char words[STLEN];
    puts("Enter a string, please.");
    gets(words); //典型用法
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");
    return 0;
}