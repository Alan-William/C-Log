#include <stdio.h>
#include <limits.h>
#include <stdint.h>
int main(void)
{
    char ch;

    printf("Please enter a charcter.\n");
    scanf("%c",&ch);
    printf("The code for %c is %d.\n",ch,ch);

    return 0;
}
