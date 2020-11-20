#include <stdlib.h>
#include <stdio.h>
void FYS(float n1,float n2);
 int main ()
 {
     float n1,n2;
     FYS( n1, n2);
     return 0;
 }
 void FYS(float n1,float n2)
 {
     float p=0;

    printf ("Ingrese la fuerza\n ");
    scanf ("%f",&n1);
    printf ("Ingrese la superficie\n ");
    scanf ("%f",&n2);
    p=n1/n2;
    printf ("La presion es de: %2.f",p);
 }
