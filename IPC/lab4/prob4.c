//Să se scrie un program în C care citește de la tastatură un şir de numere încheiat cu numărul 0 şi afișează media aritmetică a numerelor introduse
#include<stdio.h>
#include<math.h>
int main()
{
int n=0,x;
float s=0;

do {
    printf("\nNumarul : ");
    scanf("%d", &x);
    s=s+x;
    n++;
}
while (x!=0);

printf("\nMedia aritmetica a numerelor este: %.2f", s/(n-1));

return 0;
}

