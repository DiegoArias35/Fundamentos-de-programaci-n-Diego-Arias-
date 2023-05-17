#include<stdio.h>

int main()
{
float cant, sobrante, aux1, aux2, kilo_azucar, kilo_cafe;
printf("\n por favor ingrese una cantidad");
scanf ("%f", &cant);
aux1=cant/2;
aux2=cant/3;
sobrante=cant-aux1-aux2;
kilo_azucar=aux1/3;
kilo_cafe=aux2/0.72;
printf("kilos de azúcar:%f", kilo_azucar);
printf("kilos de café:%f", kilo_cafe);
printf("cantidad sobrante:%.f", sobrante);
}