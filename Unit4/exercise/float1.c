#include <stdio.h>
int main(void)
{
    float num;
    printf("Please enter a float number:\n");
    scanf("%f",&num);
    printf("The input is %0.1f or %0.1e\n",num,num);
    printf("The input is %+0.3f or %0.3E",num,num);

    return 0;
}