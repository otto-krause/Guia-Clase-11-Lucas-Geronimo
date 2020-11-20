#include<stdio.h>;
#include<stdlib.h>;
int main()
{
int RTOTAL, R1, R2, R3, R4, R5;
printf("ingrese las resitencias\n");
scanf("%d %d %d %d %d",R1, R2, R3, R4, R5);
RTOTAL=R1+R2+R3+R4+R5;
scanf("%d",RTOTAL);
printf("Resistencia total es  %d",RTOTAL);
return 0;
}
