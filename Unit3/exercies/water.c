#include <stdio.h>
int main(void)
{
    float Awater = 3.0e-23;
    float quarts;
    float molecules;
    printf("Enter the number of quarts of water:");
    scanf("%f",&quarts);
    molecules = quarts*950/Awater;
    printf("%f quarts of water contain %e molecules.\n", quarts, molecules);

    return 0;
}    
