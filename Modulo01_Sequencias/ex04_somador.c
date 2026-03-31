/*Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
entre eles.
Ex:Digite um valor: 8
Digite outro valor: 5
A soma entre 8 e 5 é igual a 13*/

#include <stdio.h>

int main() {

    int n1,n2,soma;
    
    printf("==============================================\n");
    printf("                    SOMADORA                  \n");
    printf("==============================================\n");
    printf("Digite um valor: ");
    scanf("%d",&n1);
    printf("Digite outro valor: ");
    scanf("%d",&n2);
    soma=n1+n2;
    printf("----------------------------------------------\n");
    printf("A soma entre %d e %d e igual a %d\n",n1,n2,soma);
    printf("==============================================\n");

    return 0;
}