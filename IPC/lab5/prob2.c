/*Să se scrie un program în C care, folosind un meniu interactive să conțină următoarele opțiuni:
1. Citirea unui vector cu n elemente
2. Afișarea vectorului
3. Afișarea elementelor de pe poziițile pare
4. Afișarea produsului elementelor impare
5. Ieșire*/

#include <stdio.h>

int main()
{
    int vector[20];
    int optiune = 0, p = 1, n = 0, i;

    do
    {
        printf("\n1. Citirea unui vector cu n elemente");
        printf("\n2. Afișarea vectorului");
        printf("\n3. Afișarea elementelor de pe poziițile pare");
        printf("\n4. Afișarea produsului elementelor impare");
        printf("\n5. Ieșire");
        printf("\nIntroduceti optiunea dorita: ");
        scanf("%d", &optiune);

        switch (optiune)
        {
        case 1:
            printf("\nCate elemente are vectorul? ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                scanf("%d", &vector[i]);
            }
            break;
        case 2:
            for (i = 0; i < n; i++)
            {
                printf("%d ", vector[i]);
            }
            break;
        case 3:
            for (i = 0; i < n; i++)
            {
                if (vector[i] % 2 == 0)
                {
                    printf("%d ", vector[i]);
                }
            }
            break;
        case 4:
            p = 1;
            for (i = 0; i < n; i++)
            {
                if (vector[i] % 2)
                {
                    p *= vector[i];
                }
            }
            printf("%d ", p);
            break;

        case 5:
            return 0;

        default:
            printf("\nOptiune gresita\n");
            break;
        }

    } while (optiune != 5);

    return 0;
}