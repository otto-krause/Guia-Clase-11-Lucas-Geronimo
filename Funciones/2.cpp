#include <stdio.h>;
#include <stdlib.h>;
int main ()
{
int base,altura,A,P;
printf("Ingrese la base del rectangulo ");
scanf("%d",&base);
printf("\ningrese cual es la altura del rectangulo ");
scanf("%d",&altura);

A=(altura*base);
P=(2*altura)+(2*base);

printf("\nEl area del rectangulo es: %d",A);
printf("\nEl perimetro del rectangulo es: %d",P);
return 0;

}
