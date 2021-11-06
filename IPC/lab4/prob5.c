//Să se scrie un program în C care citește de la tastatură un şir de numere încheiat cu numărul 0 şi afișează maximul dintre numerele introduse.
#include<stdio.h>
#include<limits.h>

int main()
{
    int n, max = INT_MIN;
    
    do {
        printf("\nNumarul : ");
        scanf("%d",&n);

        if (n>max && n != 0) {
            max=n;
        }
    }
    while(n!=0);
    printf("\nNumarul maxim este :%d ", max);
    
    return 0;
}