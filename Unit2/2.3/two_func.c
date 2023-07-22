#include <stdio.h>
void butler(void);
int main(void)
{
    printf("I will summon the butler function.\n\n");
    butler();
    printf("Yes. Bring me some tea and writeteable DVDs.\n");
    getchar();

    return 0;

}

void butler(void)
{
    printf("you rang, sir?\n");
    getchar();
}
