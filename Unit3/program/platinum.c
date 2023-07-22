//platinum.c
#include <stdio.h>
int main(void)
{
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    //获取用户的输入
    scanf("%f",&weight);
    //假设白金的价格是每盎司$1700.0
    value = 1700.0 * weight * 14.5833;
    printf("Your weight inplatinum is worth $%.2f.\n",value);
    printf("Your are easily worth that! If platimun prices drop,\n");
    printf("eat more to maintain your value.\n");
    getchar();
    getchar();

    return 0;
}