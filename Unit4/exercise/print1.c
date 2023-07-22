#include <stdio.h>
int main(void)
{
    char first_name[40];
    char last_name[40];
    printf("Please enter your first name and last name:");
    scanf("%s %s",first_name,last_name);
    printf("Your name is %s,%s,right?",first_name,last_name);
    getchar();
    getchar();
    return 0;
}