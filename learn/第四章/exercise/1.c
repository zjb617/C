#include <stdio.h>
int main(void)
{
    char name[40];
    char surname[40];
    printf("Input your name:");
    scanf("%s", name);
    printf("Input your surname:");
    scanf("%s", surname);
    printf("Your name is %s,surname is %s\n", name, surname);
    return 0;
}