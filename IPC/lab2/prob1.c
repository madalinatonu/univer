#include<stdio.h>

int main()
{
    char nume[15];
    int varsta;
    printf("\nintroduceti numele dumneavoastra: ");
    scanf("%s", nume);
    printf("\nintroduceti varsta dumneavoastra: ");
    scanf("%d", &varsta);

    printf("\nnumele: %s, varsta:%d",nume,varsta);

    return 0;
}