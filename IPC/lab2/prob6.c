#include <stdio.h>
#include <math.h>


int main()
{
    float a, b, c, s;

    printf("\na=");
    scanf("%f", &a);
    printf("\nb=");
    scanf("%f", &b);
    printf("\nc=");
    scanf("%f", &c);

    s=(a+b+c)/2;
    printf("\nAria=%f", sqrt(s*(s-a)*(s-b)*(s-c)) );

    return 0;
}