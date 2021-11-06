/*Să se scrie un program în C care să citească de la tastatură două matrice pătratice de numere întregi,
 de dimensiune specificată de utilizator şi să afişeze suma celor două matrice*/

 #include<stdio.h>

 int main()
 {
     int a[10][10], b[10][10], n, rand, coloana, s[10][10];
     printf("\nCe dimensiune au matricile ( MAX 10)? ");
     scanf("%d", &n);
     printf("\nIntroduceti valorile matricilor:\n");
     for (rand = 1; rand <= n; rand++)
    {
         for (coloana = 1; coloana <= n; coloana++)
         {
            printf("\na[%d][%d]=", rand, coloana);
            scanf("%d", &a[rand][coloana]);

            printf("b[%d][%d]=", rand, coloana);
            scanf("%d", &b[rand][coloana]);

            s[rand][coloana] = a[rand][coloana] + b[rand][coloana];
         }
    }
    for(rand = 1; rand <= n; rand++)
    {
        printf("\n");
        for ( coloana = 1; coloana <= n; coloana++)
        {
            printf("%d ", s[rand][coloana]);
        }  
    }
    

    return 0;
 }


 