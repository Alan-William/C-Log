#include <stdio.h>
int main(void)
{
    float a;
    printf("Enter a float-point value:");
    scanf("%e",&a);
    printf("fixed-point notation: %f\n",a);
    printf("exponential notation: %e\n",a);
    printf("p notaltion: %a",a);

    return 0;
}