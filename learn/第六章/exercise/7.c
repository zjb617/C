#include <stdio.h>
#include <string.h>
int main(void)
{
    int n,a;
    char word[40];
    printf("Please enter a word:");
    scanf("%s", word);
    n = strlen(word);
    printf("This word written in reverse is:");
    for (a=0;a<n; a++)
        printf("%c", word[n-a-1]);
    return 0;
}