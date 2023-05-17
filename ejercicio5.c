#include<stdio.h>

int main()
{
int num1, num2, aux;
printf("\n por favor ingrese su primer número");
scanf("%d", &num1);
printf("\n por favor ingrese su segundo número");
scanf("%d", &num2);
aux=num1;
num1=num2;
num2=aux;
printf("ahora su primer número es:%d", num1);
printf("ahora su segundo número es:%d", num2);
}