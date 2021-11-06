//Să se realizeze un program care citește două numere reale de la tastaură și apoi afișează un meniu cu următoarele opțiuni:
// a. Suma numerelor introduse
// b. Diferenta numerelor introduse
// c. Produsul numerelor introdue
// d. Raportul numerelor introduse
// e. Iesire
// Opțiunea dvs:

#include<stdio.h>
#include <stdlib.h>
int main(void)

{
float a;
float b;
float x;
char optiune;

printf("\nIntroduceti valori pentru a și b ");
scanf("%f%f",&a, &b);
printf("\nCe operatie doriti sa efectuati?");
scanf("\n%c", &optiune);

switch(optiune)
{
case '+':
x=a+b;
break;

case '-':
x=a-b;
break;

case '*':
x=a*b;
break;

case '/':
x=a/b;
break;
}
printf("\nRezultatul operatiei este %f",x);
return 0;
}
