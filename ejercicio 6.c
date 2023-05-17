#include<stdio.h>

int main()
{
int cantidad;
float result;
printf("\n por favor ingrese la cantidad en dólares");
scanf ("%d", &cantidad);
result= cantidad/1.66386;
printf("cantidad en Euros:%.f", result);
}