/*Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou ÍMPAR.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"pt-BR.UTF-8");

    int numero;

    printf("===========================\n");
    printf("        PAR OU IMPAR       \n");
    printf("===========================\n");
    printf("Digite um número inteiro: ");
    scanf(" %d",&numero);
    printf("---------------------------\n");
    
    if (numero%2==0) {
        printf("O número %d é PAR \n",numero);
    }else{
        printf("O número %d é IMPAR \n",numero);
    }
    
    printf("===========================\n");

    return 0;
}
