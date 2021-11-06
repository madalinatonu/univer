#include <stdio.h>
#include <math.h>

int main()
{
    int grade;

    printf("\nGrade: ");
    scanf("%d", &grade);
    printf("\nRadiani: %f", grade * M_PI / 180);

    return 0;
}