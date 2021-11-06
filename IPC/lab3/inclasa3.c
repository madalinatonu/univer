#include<stdio.h>
#include<math.h>

//Se considera un numar natural n. Sa se verifice daca n este putere a lui 2, folosind operatii cu biti

int main()

{
int n,k;
printf("\nIntroduceti numarul n in baza 10");
scanf("%d", &n);
//(8)10=(1000)2
//(7)10=(0111)2

if((n & (n-1)==0)
{
printf("\n%d este puterea lui 2", n);
}
else
{
    printf("\n%d nu este putere a lui 2", n);
}

return 0;
}
