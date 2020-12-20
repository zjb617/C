#include <stdio.h>
int main(void)
{
    char letter[26];
    char a = 'a';
    int i;
    for (i=0;i < 26; i++)
    {
        letter[i] = a + i;
        printf("%c ", letter[i]);
    }
    return 0;
}