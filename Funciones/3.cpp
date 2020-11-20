#include <stdio.h>;
#include <stdlib.h>;

void porcentaje();
int main()
{
float H,M,Total,PorM,PorH;
printf("Ingrese cantidad de curriculums que fueron enviados por hombres ");
scanf("%d",&H);
printf("ingrese cantidad de curriculums que fueron enviados por mujeres ");
scanf("%d",&M);
Total=(H+M);
PorH=(H*100/Total);
PorM=((M*100)/(Total));
printf("Porcentaje de hombres que han enviado su curriculum es de %2.f\n",PorH);
printf("Porcentaje de mujeres que han enviado su curriculum es de %2.f\n",PorM);
return 0;
}
