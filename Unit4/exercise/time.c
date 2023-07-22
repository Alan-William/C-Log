#include <stdio.h>
int main(void)
{
    float spend;
    float size;
    printf("Please enter download speed:");
    scanf("%f",&spend);
    printf("Please enter file size:");
    scanf("%f",&size);
    printf("At %0.2f megabits per second, a file of %0.2f meabytes\n",spend,size);
    printf("downloads in %0.2f seconds.",size/spend);

    return 0;
}
