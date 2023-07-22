#include <stdio.h>
int main(void)
{
    int pint;
    int cup;
    int ounce;
    int big_spoon;
    int tea_spoon;
    printf("Please enter the pint you want to know:");
    scanf("%d",&pint);
    cup=pint*2;
    ounce=cup*8;
    big_spoon=ounce*2;
    tea_spoon=big_spoon*3;
    printf("%dpint=%dcup=%dounce=%dbig_spoon=%dtea_spoon.",pint,cup,ounce,big_spoon,tea_spoon);

    return 0;
}