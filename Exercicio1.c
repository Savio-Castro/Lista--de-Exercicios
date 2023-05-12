[10:38] GIULIA POLICARPO SILVA




//Faça um programa que leia vários números inteiros e exiba o dobro de cada número ímpar lido. A leitura deve ser interrompida quando for lido o número 0.

 

 

 

#include <stdio.h>

 

int main (){

 

int numero, x;

 

 

 

do {

 

printf ("Digite um numero qualquer:");

 

scanf ("%d",&numero);

 

 

 

if (numero%2==1) {

 

 

 

    printf("dobro = %d \n", numero*2);

 

}

 

else {

 

    printf ("sinto muito, digite outro numero\n");

 

 

 

}

 

}

 

while (numero!=0);

 

 

 

 

return (0);

 

}

 

 






