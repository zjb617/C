/*your weight in platinum*/
#include <stdio.h>
int main(void)
{
    float weight;//your weight
    float value;//equal to the weight value of platinum
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    //获取用户的输入
    scanf("%f", &weight);//将所输入的赋值给weight
    //假如白金的价格是每盎司$1700
    //14.5833用于把英镑常衡盎司转换为金衡盎司
    value = 1700.0*weight*14.58333;
    printf("Your weight in platinum is worth $%.2f.\n", value);//%.2f中的.2表示显示两位小数
    printf("You are easily worth that! If plainum prices drop,\n");
    printf("eat more to maintain your value.\n");
    return 0;
}