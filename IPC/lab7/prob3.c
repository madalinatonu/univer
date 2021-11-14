//Să se implementeze funcţiile strlen, strcpy, strcmp, strstr, strcat.

#include <stdio.h>
#include <stdlib.h>

int mystrlen(char *sir)
{
    int lenght = 0;

    while (sir[lenght] != '\0')
        lenght++;

    return lenght;
}

char *mystrcpy(char *destinatie, char *sursa)
{
    for (int i = 0; sursa[i] != '\0'; i++)
    {
        destinatie[i] = sursa[i];
    }

    return destinatie;
}

int mystrcmp(char *str1, char *str2)
{
    int diferenta = 0;
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        diferenta = str1[i] - str2[i];
        if (diferenta != 0)
        {
            return diferenta;
        }
    }

    return diferenta;
}
char *mystrstr(char *string, char *substring)
{
    int gap = 0, lenght = mystrlen(substring);
    char *retunedStr = (char *)malloc(sizeof(string) - gap + 1);

    retunedStr = NULL;

    if (mystrlen(string) < lenght)
        return NULL;

    for (int i = 0; string[i] != '\0'; i++)
    {

        // append substing chars to returned string
        if (retunedStr == NULL & string[i] == substring[0])
        {
            retunedStr = (char *)realloc(retunedStr, sizeof(string) - gap + 1);
            retunedStr[0] = string[i];

            for (int j = 1; substring[j] != '\0'; j++)
            {
                if (substring[j] != string[i + j])
                {
                    retunedStr = NULL;
                    break;
                }

                retunedStr[j] = string[i + j];
            }

            if (retunedStr != NULL)
            {
                i += lenght + 1;
                retunedStr[i - gap - 1] = string[i - 1];
            }
        }

        if (retunedStr == NULL)
            gap++;
        else // append remaining chars from the string to returned string
            retunedStr[i - gap] = string[i];
    }

    return retunedStr;
}

char *mystrcat(char *destinatie, char *sursa) {
    int start = mystrlen(destinatie);
    char aux[100];
    
    mystrcpy(aux, destinatie);
    destinatie = (char *)malloc(sizeof(destinatie) + sizeof(sursa));
    mystrcpy(destinatie, aux);

    for (int i = 0; sursa[i] != '\0'; i++)
        destinatie[start + i] = sursa[i];

    return destinatie;
}

int main()
{
    int option = 0;
    char str1[100], str2[100];

    do
    {
        printf("\n1. strlen");
        printf("\n2. strcpy");
        printf("\n3. strcmp");
        printf("\n4. strstr");
        printf("\n5. strcat");
        printf("\n0. Exit");
        printf("\nOption: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\nStr: ");
            scanf("%s", str1);
            printf("\nLength: %d", mystrlen(str1));
            break;

        case 2:
            printf("\nStr: ");
            scanf("%s", str1);
            printf("\nCopia: %s", mystrcpy(str2, str1));
            break;

        case 3:
            printf("\nStr1: ");
            scanf("%s", str1);
            printf("\nStr2: ");
            scanf("%s", str2);
            printf("\nComparatia: %d", mystrcmp(str1, str2));
            break;

        case 4:
            printf("\nString: ");
            scanf("%s", str1);
            printf("Substring: ");
            scanf("%s", str2);

            printf("\n%s\n", mystrstr(str1, str2));
            break;

        case 5:
            printf("\nStr1: ");
            scanf("%s", str1);
            printf("\nStr2: ");
            scanf("%s", str2);
    
            printf("\nStr1: %s", mystrcat(str1, str2));
            break;

        default:
            break;
        }

    } while (option != 0);

    return 0;
}