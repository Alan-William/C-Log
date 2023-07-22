#include <stdio.h>
#include <string.h>
int main(void)
{
    const char fname[40];
    const char lname[40];
    printf("Please enter your first name:");
    scanf("%s",fname);
    printf("Please enter your last name:");
    scanf("%s",lname);
    printf("%s %s\n",fname,lname);
    int fnames=strlen(fname);
    int lnames=strlen(lname);
    printf("%*d %*d\n",fnames,fnames,lnames,lnames);
    printf("%s %s\n",fname,lname);
    printf("%-*zd %-*zd",strlen(fname),strlen(fname),strlen(lname),strlen(lname));

    return 0;
}