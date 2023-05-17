#include<stdio.h>

int main()
{
float arista, volumen;
printf("\n por favor ingrese la arista:");
scanf("%f", &arista);
volumen=(arista*arista*arista);
printf("el volumen del cubo es:%.2f", volumen);
}