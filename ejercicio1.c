#include<stdio.h>

int main ()
{
float media, exam1, exam2, exam3;
printf("\n por favor ingrese la primera nota:");
scanf("%f", &exam1);
printf("\n por favor ingrese la segunda nota");
scanf("%f", &exam2);
printf("\n por favor ingrese la tercera nota");
scanf("%f", &exam3);
media=(exam1+exam2+exam3)/3;
printf("la media de los exámenes es:%.2f", media);
}