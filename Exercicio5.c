/*Faça um programa que leia a idade de uma pessoa e verifique se ela pode votar ou não
(idade mínima para votar: 18 anos).*/
#include <stdio.h>

int main()
{
    int x;
    
    printf("Digite sua idade ");
    scanf("%d", &x);
    
    if(x > 18){
        printf("Você pode votar! ");
    } else if(x < 0){
        printf("Essa idade não existe!");
    } else if (x < 18) {
        printf("Você não tem idade para votar! ");
    }
    return 0;
}
