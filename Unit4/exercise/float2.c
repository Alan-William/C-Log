#include <stdio.h>
int main(void)
{
    char name[40];
    float tall;
    printf("Please enter your name:");
    scanf("%s",&name);
    printf("Please enter your height:");
    scanf("%f",&tall);
    printf("%s, you are %.3f feet tall",name,tall/12);

    return 0;
}