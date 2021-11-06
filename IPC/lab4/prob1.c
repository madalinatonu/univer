//Să se scrie un program în C care citește de la tastatură un număr şi afișează toți divizorii acestuia.

#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;

    printf("\nIntroduceti un numar ");
    scanf("%d", &n);

    for ( i=1; i<=n/2; i++)
    {
        if ( n%i==0)
       printf("\nDivizorul numarului este: %d", i); 
    }

    printf("\nDivizorul numarului este: %d", n);


    return 0;

}