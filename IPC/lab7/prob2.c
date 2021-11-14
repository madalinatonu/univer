/*Să se scrie un program C care să citească de la tastatură un cuvânt şi să verifice dacă
respectivul cuvânt este palindrom (cuvânt care poate fi citit de la stânga la dreapta şi 
de la dreapta la stânga fără să-şi piardă sensul: cojoc, capac, rar).*/

#include<stdio.h>
#include<string.h>

int main(void)
{
    char a[100],b[100];
    printf("\nScrieti un cuvant pentru a vedea daca este poliedru: ");
    gets(a);
    printf("\nAti tastat: %s ", a);
    strcpy(b,a);//Copiem sirul a in sirul b
    printf("\nAti tastat: %s", b) ;
    strlen(b);
    if (strcpy(b,a)==0)
        printf("\nCuvantul este polindrom");
    else 
        printf("\nCuvantul nu este polindrom");

return 0;
}