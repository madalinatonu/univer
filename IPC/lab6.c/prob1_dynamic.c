/*Să se scrie un program în C care, folosind un meniu interactiv să realizeze următoarele opțiuni:
0. Ieșire
1. Citirea unui vector de n caractere
2. Afișarea elementelor vectorului
3. Afișarea elementelor vectorului în ordine alfabetică
4. Afișarea elementelor vectorului în ordine invers alfabetică
5. Transformarea literelor mari în litere mici
6. Afișarea vocalelor conținute în vector */

#include <stdio.h>
#include <stdlib.h>

// asta nu știu cum lucrează, nu ne-ați învățat soratera !!!
void insertionSort(char arr[], int n)
{
    int i, j;
    char clone;
    for (i = 1; i < n; i++)
        for (j = i; j > 0 && arr[j] < arr[j - 1]; j--)
        {
            clone = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = clone;
        }
}

int main()
{
    char *vector, *aux;
    int n = 0, optiune, i;

    do
    {
        printf("\n\n0.Iesire");
        printf("\n1.Citirea unui vector de n caractere");
        printf("\n2.Afisarea elementelor vectorului");
        printf("\n3.Afisarea elementelor vectorului in ordine alfabetica");
        printf("\n4.Afisarea elementelor vectorului in ordine invers alfabetica");
        printf("\n5.Transformarea literelor mari in litere mici");
        printf("\nAfisarea vocalelor continute in vector");
        printf("\nIntroduceti optiunea dorita: ");
        scanf("%d", &optiune);

        switch (optiune)
        {
        case 0:
            return 0;
            break;

        case 1:
            printf("\nCate elemente are vectorul? ");
            scanf("%d", &n);
            vector = (char *)malloc(sizeof(char) * n);
            aux = (char *)malloc(sizeof(char) * n);
            
            for (i = 0; i < n; i++)
            {
                scanf(" %c", &vector[i]);
                aux[i] = vector[i];
            }

            break;

        case 2:
            for (i = 0; i < n; i++)
            {
                printf("%c ", vector[i]);
            }
            break;

        case 3:
            insertionSort(aux, n);
            for (i = 0; i < n; i++)
                printf("%c ", aux[i]);

            break;

        case 4:
            insertionSort(aux, n);
            for (i = n-1; i >= 0; i--)
                printf("%c ", aux[i]);

            break;

        case 5:
            for (i = 0; i < n; i++) {
                if (vector[i] < 97)
                {
                    vector[i] += 32;
                }
            }
            break;
        case 6:
            for (i = 0; i < n; i++) {
                if (vector[i] == 'a' || vector[i] == 'e' || vector[i] == 'i' || vector[i] == 'o' || vector[i] == 'u')
                {
                    printf("%c ", vector[i]);
                }
            }
            break;

        default:
            printf("\nOptiune gresita\n");
            break;
        }
    } while (optiune != 0);

    return 0;
}