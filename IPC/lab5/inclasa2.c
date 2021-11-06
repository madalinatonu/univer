//Suma numerelor de pe diagonala principala a matricei patratice

#include<stdio.h>
int main()
{
    int a[5][5], n, i, j, suma=0;
    printf("\nIntroduceti marimea matricii patratice");
    scanf("%d", &n);
    for(i =0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nIntroduceti elementul matricei");
            scanf("%d", &matrice[i][j]);
        }
    }
    printf("\nMatricea introdusa este: ");
    for(i = 0; i < n; i++);
    {
        for(j = 0; j < n; j++)
        {
            printf("%d", matrice[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < n; i++)
    {
        suma += matrice[i][i];
    }
    printf("\nSuma numerelor de pe diagonala principala este %d: ", suma);

    return 0;
    }