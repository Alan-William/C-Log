#include <stdio.h>
int main(void)
{
    float feet;
    float tall;
    float cetremeter;
    cetremeter = 2.54f;
    printf("Please enter your heigt in feet:");
    scanf("%f",&feet);
    tall = cetremeter * feet;
    printf("%f feet height in cetremeter is %.2fcm.\n",feet,tall);

    return 0;
}