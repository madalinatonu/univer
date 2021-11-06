//Se considera un numar intreg n. Sa se afiseze reprezentarea lui in baza 2 folosind operatii pe biti
#include<stdio.h>

    int main()
 {
    int n, i;
    printf("\nDati valorea lui n: ");
    scanf("%d", &n);

    for (i=15; i>=0; i -- )
    printf("%d", (n>>i) & 1);
    return 0;



}