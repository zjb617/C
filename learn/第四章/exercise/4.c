#include <stdio.h>
#define CM 100
int main(void)
{
    float height;
    char name[40];
    printf("Please input name and height(cm):");
    scanf("%s%f", name, &height);
    height = height/CM;
    printf("%s, you are %.3fm feet tall\n", name, height);
    return 0;
}