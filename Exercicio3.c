//Faça um programa que leia vários números inteiros e exiba apenas os números positivos lidos. A leitura deve ser interrompida quando for lido o número 0. 

 

#include <stdio.h>
int main (){
    int numero, x;

 

do {
printf ("Digite um numero qualquer:");
scanf ("%d",&numero);

 

if (numero>0) {

 

printf("seu numero e = %d \n", numero);
}
else {
    printf ("sinto muito, digite outro numero\n");

 

}
}
while (numero!=0||numero<0);

 

return (0);
}
