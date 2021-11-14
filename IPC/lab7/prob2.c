/*Să se scrie un program C care să citească de la tastatură un cuvânt şi să verifice dacă
respectivul cuvânt este palindrom (cuvânt care poate fi citit de la stânga la dreapta şi 
de la dreapta la stânga fără să-şi piardă sensul: cojoc, capca, rar).*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int lastIndex, middle = 0;;

    printf("\nScrieti un cuvant pentru a vedea daca este polindrom: ");
    scanf("%s", str);

    lastIndex = strlen(str) - 1;

    // handle odd str len
    middle = (lastIndex + 2) / 2;

    for (int i = 0; i < middle; i++)
    {
        if (str[i] != str[lastIndex - i])
        {
            printf("Cuvantul nu este polindrom");
            return 0;
        }
    }

    printf("Cuvantul este polindrom");

    return 0;
}