#include <stdio.h>

int main()
{
    float data;
    printf("Enter the data of floating point type: ");
    scanf("%f", &data);
    printf("The Integer Part = %d \n", (int)data);
    printf("The Decimal Part (after the floating point) = %.2f \n", data - (int)data);
    return 0;
}