/*Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$) e mostre quantos dólares ela pode comprar. 
Considere US$1,00 = R$3,45.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"pt_BR.UTF-8");

    float reais, dolares;

    printf("==========================================\n");
    printf("           CONVERSOR DE MOEDAS            \n");
    printf("==========================================\n");
    printf("Informe o valor em reais: R$");
    scanf("%f",&reais);
    printf("------------------------------------------\n");
    dolares = reais/3.45;
    printf("O valor de R$%.2f que você tem na carteira corresponde a U$%.2f \n",reais,dolares);
    printf("==========================================\n");
    return 0;
}