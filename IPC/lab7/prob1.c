//Să se implementeze funcţiile strlen, strcpy, strcmp, strstr, strcat.
/*Să se scrie un program C care realizează următoarele:
a) Şterge dintr-un şir de caractere un subşir specificat prin poziţie şi lungime.
b) Inserează într-un şir începând cu o poziţie dată un al şir.
c) Citeşte doua cuvinte şi înlocuieşte într-un text introdus de la tastatură toate apariţiile
primului cuvânt prin cel de-al doilea*/
#include<stdio.h>

int main()
{
    char s[100];
    int optiune;
    do
    {
        printf("\na.Şterge dintr-un şir de caractere un subşir specificat prin poziţie şi lungime");
        printf("\nb.Inserează într-un şir începând cu o poziţie dată un al şir");
        printf("\nc.Citeşte doua cuvinte şi înlocuieşte într-un text introdus de la tastatură toate apariţiile
primului cuvânt prin cel de-al doilea");
        printf("\nIntroduceti optiunea dorita");
        scanf("%d",&s);
        switch (optiune)
        {
        case a:/* constant-expression */:
            /* code */
            break;
            case b:/* constant-expression */:
            /* code */
            break;
            case c: /* constant-expression */:
            /* code */
            break;
        
        default:
            break;
        }

    } while (optiune=0);
    


return 0;
}