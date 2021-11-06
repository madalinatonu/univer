#include <stdio.h>

int main()
{
    float grade;

    printf("\nGrade: ");
    scanf("%f", &grade);
    printf("\nFahrenheit: %f", grade*9/5+32);

    return 0;
}