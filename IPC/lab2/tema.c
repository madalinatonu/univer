#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int min;
    int max;
    int sum = 0;
    int opt;

    printf("\nIntroduceti lungimea vectorului: ");
    scanf("%d", &n);

    for (int i = 0; i < 4; i++)
    {
        printf("\nIntroduceti numarul: ");
        scanf("%d", &arr[i]);

        if (i == 0)
        {
                min = arr[i];
                max = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }

        sum += arr[i];
    }

    printf("\nAlegeti optiunea dorita:");
    printf("\n1. Suma numerelor mai mare decat minimul din vector");
    printf("\n2. Suma numerelor mai mici decat maximul din vector");
    printf("\nOptiunea: ");
    scanf("%d", &opt);

    if (opt == 1)
    {
        printf("\nSuma: %d", sum - min);
    }
    else if (opt == 2)
    {
        printf("\nSuma: %d", sum - max);
    }
    else
        printf("\nOptioune invalida");

    return 0;
}
