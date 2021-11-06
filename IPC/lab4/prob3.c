//Să se scrie un program în C care citește de la tastatură un şir de numere încheiat cu numărul 0 şi afișează suma numerelor introduse.

#include<stdio.h>
int main() {
    int n, s=0;

    do {
        printf("\nnumarul: ");
        scanf("%d", &n);
        s=s+n;

    } while (n != 0);

    printf("Suma numerelor introduse este: %d", s);

    return 0;
}