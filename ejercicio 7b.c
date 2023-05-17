#include<stdio.h>

int main()
{
int num;
printf("\n por favor ingrese un número");
scanf("%d", &num);
if (num%2==0)
{
printf("el siguiente número es  par%d",num);
}
else
{
printf("el siguiente número es impar:%d", num);
}
return 0;
}