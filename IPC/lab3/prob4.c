//Fie a și b două numere întregi citite de la tastatură. Scrieți un algoritm care să verifice dacă a și b sunt numere consecutive.
#include<stdio.h>

int main()
{
int a,b;


printf("a=");
scanf("%d", &a);
printf("b=");
scanf("%d",&b);


if (a+1==b)
printf("\nNumerele sunt consecutive ");
else if(a-1==b)
printf("\nNumerele sunt consecutive ");
else
printf("\nNumerele nu sunt consecutive ");

return 0;
}
