#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[40];
    char surname[40];
    int widthn, widths;
    printf("Input your name:");
    scanf("%s", name);
    printf("Input your surname:");
    scanf("%s", surname);
    widthn=strlen(name)+3;
    widths=strlen(surname)+3;
    printf("a:Your name is \"%s\", surname is \"%s\".\n", name, surname);
    printf("b:Your name is \"%20s\", surname is \"%20s\".\n", name, surname);
    printf("b:Your name is \"%-20s\", surname is \"%-20s\".\n", name, surname);
    printf("d:Your name is\"%*s\", surname is \"%*s\".\n", widthn, name, widths ,surname);
    return 0;
}