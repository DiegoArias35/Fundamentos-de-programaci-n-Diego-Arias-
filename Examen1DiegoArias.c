#include<stdio.h>

int main ()
{
int punto_bluec=0, punto_bluef=0, punto_whitec=0, punto_whitef=0, punto_pinkc=0, punto_pinkf=0, roundsc_blue=0,roundsc_white=0, roundsc_pink=0, roundsf_blue=0, roundsf_white=0, roundsf_pink=0, roundsE_blue=0, roundsE_white=0, roundsE_pink=0, i=0, n=0,j=0;
float precio, sueldo_ganador, sueldo_perdedor;
int ganadorblue=0, ganadorwhite=0, ganadorpink=0;
int caso=0, puntofinal_blue=0, puntofinal_white=0, puntofinal_pink=0;
printf("\n tarjeta azul:");
for(i=1;i<=12;i++){
printf("\n por favor ingrese los puntos del Boxeador Canelo, [%d]", i);
scanf("%d", &n);
printf("\n por favor ingrese los puntos del Boxeador Floyd, [%d]", i);
scanf("%d", &j);
punto_bluec=punto_bluec+n;
punto_bluef=punto_bluef+j;
if(n<j){
roundsf_blue=roundsf_blue+1; 
} 
else {
if(n==j){
roundsE_blue=roundsE_blue+1;
} 
else {
roundsc_blue=roundsc_blue+1;
}
}
}
printf("\n tarjeta blanca:");
for(i=1;i<=12;i++){
printf("\n por favor ingrese los puntos del Boxeador Canelo, [%d]", i);
scanf("%d", &n);
printf("\n por favor ingrese los puntos del Boxeador Floyd, [%d]", i);
scanf("%d", &j);
punto_whitec=punto_whitec+n;
punto_whitef=punto_whitef+j;
if(n<j){
roundsf_white=roundsf_white+1; 
} 
else {
if(n==j){
roundsE_white=roundsE_white+1;
} 
else {
roundsc_white=roundsc_white+1;
}
}
}
printf("\n tarjeta rosa:");
for(i=1;i<=12;i++){
printf("\n por favor ingrese los puntos del Boxeador Canelo, [%d]", i);
scanf("%d", &n);
printf("\n por favor ingrese los puntos del Boxeador Floyd, [%d]", i);
scanf("%d", &j);
punto_pinkc=punto_pinkc+n;
punto_pinkf=punto_pinkf+j;
if(n<j){
roundsf_pink=roundsf_pink+1; 
} 
else {
if(n==j){
roundsE_pink=roundsE_pink+1;
} 
else {
roundsc_pink=roundsc_pink+1;
}
}
}
if(roundsf_blue<roundsc_blue) {
ganadorblue=1;
} 
else {
if(roundsf_blue==roundsc_blue) {
ganadorblue=0;
}
else {
ganadorblue=2;
}
}
if(roundsf_white<roundsc_white) {
ganadorwhite=1;
} 
else {
if(roundsf_white==roundsc_white) {
ganadorwhite=0;
}
else {
ganadorwhite=2;
}
}
if(roundsf_pink<roundsc_pink) {
ganadorpink=1;
} 
else {
if(roundsf_pink==roundsc_pink) {
ganadorpink=0;
}
else {
ganadorpink=2;
}
}
if((ganadorwhite==1)&&(ganadorblue==1)&&(ganadorpink==1))
{
caso=1;
}
else{
if((ganadorwhite==2)&&(ganadorblue==2)&&(ganadorpink==2))
{caso=2;
}
}
if((ganadorwhite==1)&&(ganadorblue==1)&&(ganadorpink==2))
{
caso=3;
}
else{
if((ganadorwhite==2)&&(ganadorblue==2)&&(ganadorpink==1))
{caso=4;
}
}
if((ganadorwhite==1)&&(ganadorblue==1)&&(ganadorpink==0))
{
caso=5;
}
else{
if((ganadorwhite==2)&&(ganadorblue==2)&&(ganadorpink==0))
{caso=6;
}
}
if((ganadorwhite==0)&&(ganadorblue==0)&&(ganadorpink==0))
{caso=7;
printf("no hubo ganador, rotundo empate");}
precio=100000;
switch (caso) {
case 1: printf("\n el ganador es Canelo por desición unánime, su puntaje es: %d" ,punto_bluec);
printf(", %d", punto_whitec);
printf(", %d", punto_pinkc);
printf("\n el puntaje del perdedor Floyd fue: %d", punto_bluef);
printf(", %d", punto_whitef);
printf(", %d", punto_pinkf);
printf("\n rounds del ganador, según tarjeta azul:%d", roundsc_blue );
printf("\n según la tarjeta blanca: %d", roundsc_white);
printf("\n según la tarjeta rosa: %d", roundsc_pink);
printf("\n rondas del perdedor, según tarjeta azul:%d", roundsf_blue );
printf("\n según la tarjeta blanca: %d", roundsf_white);
printf("\n según la tarjeta rosa: %d", roundsf_pink);
printf("\n rounds empatados, según tarjeta azul:%d", roundsE_blue );
printf("\n según la tarjeta blanca: %d", roundsE_white);
printf("\n según la tarjeta rosa: %d", roundsE_pink);
if((punto_bluec>punto_whitec) && (punto_bluec>punto_pinkc)){
printf("\n la tarjeta con más puntos fue la tarjeta azul con:%d", punto_bluec);
sueldo_ganador=precio+ (precio*10/100*roundsc_blue);
printf("\n el sueldo del ganador es: %d", sueldo_ganador);
} else {
if((punto_whitec>punto_bluec) && (punto_whitec>punto_pinkc))
{printf("la tarjeta con mayor puntuación fue la tarjeta blanca con:%d", punto_whitec);
sueldo_ganador=precio+ (precio*10/100*roundsc_white);
printf("\n el sueldo del ganador es: %d", sueldo_ganador);
}else{
if((punto_pinkc>punto_whitec) && (punto_pinkc>punto_bluec))
{printf("la tarjeta con mayor puntuación fue la tarjeta rosa con:%d", punto_pinkc);
sueldo_ganador=precio+ (precio*10/100*roundsc_pink);
printf("\n el sueldo del ganador es: %d", sueldo_ganador);

}
}
}
if((punto_bluec<punto_whitec) && (punto_bluec<punto_pinkc)){
printf("la tarjeta con menor puntuación fue la tarjeta azul con:%d", punto_bluec);
} else {
if((punto_whitec<punto_bluec) && (punto_whitec<punto_pinkc))
{printf("la tarjeta con menor puntuación fue la tarjeta blanca con:%d", punto_whitec);
}else{
if((punto_pinkc<punto_whitec) && (punto_pinkc<punto_bluec))
{printf("la tarjeta con menor puntuación fue la tarjeta rosa con:%d", punto_pinkc);
}
}
}
printf("\nlas tarjetas tienen la misma puntuación");
sueldo_ganador=precio+((precio*10/100)*roundsc_blue);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);
break;
case 2: printf("\n el ganador es Floyd por desición unánime, su puntaje es: %d" ,punto_bluef);
printf(", %d", punto_whitef);
printf(", %d", punto_pinkf);
printf("\n el puntaje del perdedor Canelo fue: %d", punto_bluec);
printf(", %d", punto_whitec);
printf(", %d", punto_pinkc);
printf("\n rounds del ganador, según tarjeta azul:%d", roundsf_blue );
printf("\n según la tarjeta blanca: %d", roundsf_white);
printf("\n según la tarjeta rosa: %d", roundsf_pink);
printf("\n rondas del perdedor, según tarjeta azul:%d", roundsc_blue );
printf("\n según la tarjeta blanca: %d", roundsc_white);
printf("\n según la tarjeta rosa: %d", roundsc_pink);
printf("\n rounds empatados, según tarjeta azul:%d", roundsE_blue );
printf("\n según la tarjeta blanca: %d", roundsE_white);
printf("\n según la tarjeta rosa: %d", roundsE_pink);
if((punto_bluef>punto_whitef) && (punto_bluef>punto_pinkf)){
printf("\n la tarjeta con más puntos fue la tarjeta azul con:%d", punto_bluef);
sueldo_ganador=precio+ ((precio*10/100)*roundsf_blue);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);
} else {
if((punto_whitef>punto_bluef) && (punto_whitef>punto_pinkf))
{
printf("la tarjeta con mayor puntuación fue la tarjeta blanca con:%d", punto_whitef);
sueldo_ganador=precio+((precio*10/100)*roundsf_white);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);
}else{
if((punto_pinkf>punto_whitef) && (punto_pinkf>punto_bluef))
{
printf("la tarjeta con mayor puntuación fue la tarjeta rosa con:%d", punto_pinkf);
sueldo_ganador=precio+ ((precio*10/100)*roundsf_pink);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);

}
}
}
printf("\nlas tarjetas tienen la misma puntuación");
sueldo_ganador=precio+((precio*10/100)*roundsf_blue);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);
if((punto_bluef<punto_whitef) && (punto_bluef<punto_pinkf)){
printf("la tarjeta con menor puntuación fue la tarjeta azul con:%d", punto_bluef);
} else {
if((punto_whitef<punto_bluef) && (punto_whitef<punto_pinkf))
{
printf("la tarjeta con menor puntuación fue la tarjeta blanca con:%d", punto_whitef);
}else{
if((punto_pinkf<punto_whitef) && (punto_pinkf<punto_bluef))
{
printf("la tarjeta con menor puntuación fue la tarjeta rosa con:%d", punto_pinkf);
}
}
}
break;
case 3: printf("\n el ganador es Canelo por desición dividida, su puntaje es: %d" ,punto_bluec);
printf(", %d", punto_whitec);
printf(", %d", punto_pinkc);
printf("\n el puntaje del perdedor Floyd fue: %d", punto_bluef);
printf(", %d", punto_whitef);
printf(", %d", punto_pinkf);
printf("\n rounds del ganador, según tarjeta azul:%d", roundsc_blue );
printf("\n según la tarjeta blanca: %d", roundsc_white);
printf("\n según la tarjeta rosa: %d", roundsc_pink);
printf("\n rondas del perdedor, según tarjeta azul:%d", roundsf_blue );
printf("\n según la tarjeta blanca: %d", roundsf_white);
printf("\n según la tarjeta rosa: %d", roundsf_pink);
printf("\n rounds empatados, según tarjeta azul:%d", roundsE_blue );
printf("\n según la tarjeta blanca: %d", roundsE_white);
printf("\n según la tarjeta rosa: %d", roundsE_pink);
if((punto_bluec>punto_whitec) && (punto_bluec>punto_pinkc)){
printf("\n la tarjeta con más puntos fue la tarjeta azul con:%d", punto_bluec);
sueldo_ganador=precio+ (precio*5/100*roundsc_blue);
printf("\n el sueldo del ganador es: %d", sueldo_ganador);
} else {
if((punto_whitec>punto_bluec) && (punto_whitec>punto_pinkc))
{printf("la tarjeta con mayor puntuación fue la tarjeta blanca con:%d", punto_whitec);
sueldo_ganador=precio+ (precio*5/100*roundsc_white);
printf("\n el sueldo del ganador es: %d", sueldo_ganador);
}else{
if((punto_pinkc>punto_whitec) && (punto_pinkc>punto_bluec))
{printf("la tarjeta con mayor puntuación fue la tarjeta rosa con:%d", punto_pinkc);
sueldo_ganador=precio+ (precio*5/100*roundsc_pink);
printf("\n el sueldo del ganador es: %d", sueldo_ganador);

}
}
}
if((punto_bluec<punto_whitec) && (punto_bluec<punto_pinkc)){
printf("la tarjeta con menor puntuación fue la tarjeta azul con:%d", punto_bluec);
} else {
if((punto_whitec<punto_bluec) && (punto_whitec<punto_pinkc))
{printf("la tarjeta con menor puntuación fue la tarjeta blanca con:%d", punto_whitec);
}else{
if((punto_pinkc<punto_whitec) && (punto_pinkc<punto_bluec))
{printf("la tarjeta con menor puntuación fue la tarjeta rosa con:%d", punto_pinkc);
}
}
}
printf("\nlas tarjetas tienen la misma puntuación");
sueldo_ganador=precio+((precio*5/100)*roundsc_blue);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);
break;
case 4:printf("\n el ganador es Floyd por desición dividida, su puntaje es: %d" ,punto_bluef);
printf(", %d", punto_whitef);
printf(", %d", punto_pinkf);
printf("\n el puntaje del perdedor Canelo fue: %d", punto_bluec);
printf(", %d", punto_whitec);
printf(", %d", punto_pinkc);
printf("\n rounds del ganador, según tarjeta azul:%d", roundsf_blue );
printf("\n según la tarjeta blanca: %d", roundsf_white);
printf("\n según la tarjeta rosa: %d", roundsf_pink);
printf("\n rondas del perdedor, según tarjeta azul:%d", roundsc_blue );
printf("\n según la tarjeta blanca: %d", roundsc_white);
printf("\n según la tarjeta rosa: %d", roundsc_pink);
printf("\n rounds empatados, según tarjeta azul:%d", roundsE_blue );
printf("\n según la tarjeta blanca: %d", roundsE_white);
printf("\n según la tarjeta rosa: %d", roundsE_pink);
if((punto_bluef>punto_whitef) && (punto_bluef>punto_pinkf)){
printf("\n la tarjeta con más puntos fue la tarjeta azul con:%d", punto_bluef);
sueldo_ganador=precio+ ((precio*5/100)*roundsf_blue);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);
} else {
if((punto_whitef>punto_bluef) && (punto_whitef>punto_pinkf))
{
printf("la tarjeta con mayor puntuación fue la tarjeta blanca con:%d", punto_whitef);
sueldo_ganador=precio+((precio*5/100)*roundsf_white);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);
}else{
if((punto_pinkf>punto_whitef) && (punto_pinkf>punto_bluef))
{
printf("la tarjeta con mayor puntuación fue la tarjeta rosa con:%d", punto_pinkf);
sueldo_ganador=precio+ ((precio*5/100)*roundsf_pink);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);

}
}
}
printf("\nlas tarjetas tienen la misma puntuación");
sueldo_ganador=precio+((precio*5/100)*roundsf_blue);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);
if((punto_bluef<punto_whitef) && (punto_bluef<punto_pinkf)){
printf("la tarjeta con menor puntuación fue la tarjeta azul con:%d", punto_bluef);
} else {
if((punto_whitef<punto_bluef) && (punto_whitef<punto_pinkf))
{
printf("la tarjeta con menor puntuación fue la tarjeta blanca con:%d", punto_whitef);
}else{
if((punto_pinkf<punto_whitef) && (punto_pinkf<punto_bluef))
{
printf("la tarjeta con menor puntuación fue la tarjeta rosa con:%d", punto_pinkf);
}
}
}
break; 
case 5 :printf("\n el ganador es Canelo por mayoría, su puntaje es: %d" ,punto_bluec);
printf(", %d", punto_whitec);
printf(", %d", punto_pinkc);
printf("\n el puntaje del perdedor Floyd fue: %d", punto_bluef);
printf(", %d", punto_whitef);
printf(", %d", punto_pinkf);
printf("\n rounds del ganador, según tarjeta azul:%d", roundsc_blue );
printf("\n según la tarjeta blanca: %d", roundsc_white);
printf("\n según la tarjeta rosa: %d", roundsc_pink);
printf("\n rondas del perdedor, según tarjeta azul:%d", roundsf_blue );
printf("\n según la tarjeta blanca: %d", roundsf_white);
printf("\n según la tarjeta rosa: %d", roundsf_pink);
printf("\n rounds empatados, según tarjeta azul:%d", roundsE_blue );
printf("\n según la tarjeta blanca: %d", roundsE_white);
printf("\n según la tarjeta rosa: %d", roundsE_pink);
if((punto_bluec>punto_whitec) && (punto_bluec>punto_pinkc)){
printf("\n la tarjeta con más puntos fue la tarjeta azul con:%d", punto_bluec);
sueldo_ganador=precio+ (precio*15/100*roundsc_blue);
printf("\n el sueldo del ganador es: %d", sueldo_ganador);
} else {
if((punto_whitec>punto_bluec) && (punto_whitec>punto_pinkc))
{printf("la tarjeta con mayor puntuación fue la tarjeta blanca con:%d", punto_whitec);
sueldo_ganador=precio+ (precio*15/100*roundsc_white);
printf("\n el sueldo del ganador es: %d", sueldo_ganador);
}else{
if((punto_pinkc>punto_whitec) && (punto_pinkc>punto_bluec))
{printf("la tarjeta con mayor puntuación fue la tarjeta rosa con:%d", punto_pinkc);
sueldo_ganador=precio+ (precio*15/100*roundsc_pink);
printf("\n el sueldo del ganador es: %d", sueldo_ganador);

}
}
}
if((punto_bluec<punto_whitec) && (punto_bluec<punto_pinkc)){
printf("la tarjeta con menor puntuación fue la tarjeta azul con:%d", punto_bluec);
} else {
if((punto_whitec<punto_bluec) && (punto_whitec<punto_pinkc))
{printf("la tarjeta con menor puntuación fue la tarjeta blanca con:%d", punto_whitec);
}else{
if((punto_pinkc<punto_whitec) && (punto_pinkc<punto_bluec))
{printf("la tarjeta con menor puntuación fue la tarjeta rosa con:%d", punto_pinkc);
}
}
}
printf("\nlas tarjetas tienen la misma puntuación");
sueldo_ganador=precio+((precio*15/100)*roundsc_blue);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);
break;
case 6: printf("\n el ganador es Floyd por mayoría, su puntaje es: %d" ,punto_bluef);
printf(", %d", punto_whitef);
printf(", %d", punto_pinkf);
printf("\n el puntaje del perdedor Canelo fue: %d", punto_bluec);
printf(", %d", punto_whitec);
printf(", %d", punto_pinkc);
printf("\n rounds del ganador, según tarjeta azul:%d", roundsf_blue );
printf("\n según la tarjeta blanca: %d", roundsf_white);
printf("\n según la tarjeta rosa: %d", roundsf_pink);
printf("\n rondas del perdedor, según tarjeta azul:%d", roundsc_blue );
printf("\n según la tarjeta blanca: %d", roundsc_white);
printf("\n según la tarjeta rosa: %d", roundsc_pink);
printf("\n rounds empatados, según tarjeta azul:%d", roundsE_blue );
printf("\n según la tarjeta blanca: %d", roundsE_white);
printf("\n según la tarjeta rosa: %d", roundsE_pink);
if((punto_bluef>punto_whitef) && (punto_bluef>punto_pinkf)){
printf("\n la tarjeta con más puntos fue la tarjeta azul con:%d", punto_bluef);
sueldo_ganador=precio+ ((precio*15/100)*roundsf_blue);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);
} else {
if((punto_whitef>punto_bluef) && (punto_whitef>punto_pinkf))
{
printf("la tarjeta con mayor puntuación fue la tarjeta blanca con:%d", punto_whitef);
sueldo_ganador=precio+((precio*15/100)*roundsf_white);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);
}else{
if((punto_pinkf>punto_whitef) && (punto_pinkf>punto_bluef))
{
printf("la tarjeta con mayor puntuación fue la tarjeta rosa con:%d", punto_pinkf);
sueldo_ganador=precio+ ((precio*15/100)*roundsf_pink);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);

}
}
}
printf("\nlas tarjetas tienen la misma puntuación");
sueldo_ganador=precio+((precio*15/100)*roundsf_blue);
printf("\n el sueldo del ganador es: %f", sueldo_ganador);
if((punto_bluef<punto_whitef) && (punto_bluef<punto_pinkf)){
printf("la tarjeta con menor puntuación fue la tarjeta azul con:%d", punto_bluef);
} else {
if((punto_whitef<punto_bluef) && (punto_whitef<punto_pinkf))
{
printf("la tarjeta con menor puntuación fue la tarjeta blanca con:%d", punto_whitef);
}else{
if((punto_pinkf<punto_whitef) && (punto_pinkf<punto_bluef))
{
printf("la tarjeta con menor puntuación fue la tarjeta rosa con:%d", punto_pinkf);
}
}
}
break; 
}
if(caso!=7){
sueldo_perdedor=60000.00;
printf("\n el sueldo del perdedor es: %f", sueldo_perdedor);
}
}

    