//animals.c -- 使用switch语句
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    printf("Give me a letter of the alphabet, and I will give");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");
    while ((ch = getchar()) != '#')  //假如输入的是dab，则第一次读取d，赋值给ch
    {
        if ('\n' == ch)
            continue;
        if (islower(ch))  //只接受小写字母
            switch (ch)
            {
                case 'a':
                    printf("argali, a wild sheep of Asia\n");
                    break;
                case 'b':
                    printf("babirusa, a wild pig of Malay\n");
                    break;
                case 'c':
                    printf("coati, racoonlike mammal\n");
                    break;
                case 'd':
                    printf("desman, aquatic, molelike critter\n");
                    break;
                case 'e':
                    printf("echidna, the spiny anteater\n");
                    break;
                case 'f':
                    printf("fisher, brownish marten\n");
                    break;
                default:
                printf("That's a stumper!\n");
            }  //switch结束
        else
            printf("I recognize only lowercase letters.\n");
        while (getchar() != '\n')  //跳到此处，读取第二个字母a，再读取第三个b，最后读取\n，然后跳出循环，执行下一条命令
            continue;  //跳过输入行的剩余部分   40和41两行代码实现了 只读每行的首字符 的功能
        printf("Please type another letter or a #.\n");
    }
    printf("Bye!\n");
    return 0;
}