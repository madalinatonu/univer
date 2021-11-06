//Să se scrie un program în C care citește 2 numere de la tastatură și verfică dacă sunt divizile cu 3. Dacă sunt divizibile se va face suma dintre ele, dacă nu produsul.
#include<stdio.h>
#include<math.h>

int main() {

    int nr1;
    int nr2;
    int suma;
    int produsul;

    printf("\nIntroduceti primul numar");
    scanf("%d", &nr1);
    printf("\nIntroduceti al doilea numar");
    scanf("%d", &nr2);

    if (nr1%3 == 0 && nr2%3 == 0) 
    {
        printf("\nSuma numerelor este %d", nr1+nr2);
    }
    else
    {
        printf("\nProdusul numerelor este %d", nr1*nr2);
    }

    return 0;
}