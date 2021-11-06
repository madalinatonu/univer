//Să se scrie un program în C care să rezolve o ecuație de gradul 2, cu coeficienții a, b, c reali introduși de la tastatura.
#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    printf("\nIntroducti numarul a ");
    scanf("%f",&a);
    printf("\nIntroduceti numarul b ");
    scanf("%f", &b);
    printf("\nIntroduceti al numarul c ");
    scanf("%f", &c);

    delta=b*b-4*a*c;

    if(a==0)
    {
        printf("\nRaspuns: %f", b/c);
    } 
    else if(delta>=0)
    {
        x1 = (-b-sqrt(delta))/2*a;
        x2 = (-b+sqrt(delta))/2*a;
        printf("\nRaspuns: %.2f, %.2f", x1, x2);
    }
    else
    {
        printf("\nMultimea vida");
    }
    return 0;
}