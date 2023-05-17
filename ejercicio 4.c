#include<stdio.h>

int main()
{
int hh, mm, ss, aux;
printf("\n por favor ingrese la hora en formato horas, minutos y segundos, por favor ingresar primero las horas:");
scanf ("%d", &hh);
printf("\n ahora ingrese los minutos restantes de ésa hora:");
scanf("%d", &mm);
printf("\n por último ingrese los segundos:");
scanf("%d", &ss);
hh=hh*3600;
mm=mm*60;
aux=ss+hh+mm;
printf("hora expresada en segundos:%d", aux);
}