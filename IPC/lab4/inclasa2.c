//Sa se scrie un program care afiseaza toate numerele prime pana la n cu ajutorul unui meniu altfel
//1.Cu ajutorul instructiunii for
//2.Cu while
//3.do while
//4.iesire

#include<stdio.h>
#include

int main()
{
    int n,i, opt, j, prim;
    printf("\nIntroduceti pana la ce valoare vreti sa se afiseze numerele prime ");
    scanf("%d", &n);

    do {
        printf("\n1.Instructiunea for");
        printf("\n2.Instructiunea while");
        printf("\nInstructiunea do while");
        printf("\nInstructiunea iesire");

        printf("\nDati o optiune");
        scanf("%d", &opt);

        switch (opt)
        {

            case 1: printf("\nNumerele prime pana la %d sunt : ",n );
            for( i=2; i<=n; i++)
            {
                prim=1;
                for (j=2; i<=j/2; j++)
                {
                    if (i%j==0)
                    prim=0;
                }
                if (prim==1) printf("%d ", i);
            }
            
            break;

            case 2:
            printf("\nNumerele prime pana la %d sunt : ",n );
             i=2;
             while(i<=n)
                for (j=2; i<=j/2; j++)
                {
                    if (i%j==0)
                    prim=0;
                }
                if (prim==1) printf("%d ", i);
            break;
            
            case 3:
            break;

            case 4:
            break;
            default: printf("\nInstructiune gresita");
        }


    } while( opt!=4);



return 0;
}