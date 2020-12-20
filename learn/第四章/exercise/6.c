#include <stdio.h>
#include <string.h>
int main(void)
{
    char firstname[40],secondname[40];
    int a,b;
    printf("Input your firstname:");
    scanf("%s", firstname);
    printf("Input your secondname:");
    scanf("%s", secondname);
    a=strlen(firstname);
    b=strlen(secondname);
    printf("%s %s\n",firstname,secondname);
    printf("%*d %*d\n",a,a,b,b);
    printf("%s %s\n",firstname,secondname);
    printf("%-*d %-*d\n", a,a,b,b);
    return 0;
}