#include<stdio.h>

int main ()
{
int num1, num2, num3;
printf("\n por favor ingrese su primer número:");
scanf("%d", &num1);
printf("\n por favor ingrese su segundo número");
scanf("%d", &num2);
printf("\n por favor ingrese su tercera número");
scanf("%d", &num3);
if((num1>2)&&(num1>num3))
{

printf("el número mayor es:%d", num1);
}
else
{
if((num2>num1)&&(num2>num3))
{
printf("el número mayor es:%d", num2);
}
else
{
printf("el número mayor es:%d", num3);
}
}
return 0;
}

