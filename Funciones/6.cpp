#include <stdio.h>
#include <stdlib.h>
void octavaparte (float num, float octava);
int main()
{
	
float num,octava;
octavaparte(num,octava);
return 0;
}
void octaparte(float num, float octava)
{
printf("Ingrese un numero\n");
scanf ("%f",num);
octava=num/8;
scanf("%d",octava);
printf("La octava parte de %2.f es de %f",num, octava);
}
