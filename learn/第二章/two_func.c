//一个文件中包含两个函数
#include <stdio.h>
void butler(void);//ANSI/SO C函数原型,第一个void表示无返回值，第二个表示无参数
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    return 0;
}
//先在第三行声明要用butler函数，然后在第11行定义函数butler，再在第七行调用函数butler
void butler(void)
{
    printf("You rang, sir?\n");
}