#include <stdio.h>

int main()

{
    int numar;
    
    printf("\nIntroduceti un numar intreg ");
    scanf("%d", &numar);
    printf("\nCifra unitatilor este %d", numar%10);

    return 0;
}