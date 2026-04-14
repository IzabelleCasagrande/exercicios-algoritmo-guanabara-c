/* Crie um programa que leia o preço de um produto, calcule e mostre o seu PREÇO PROMOCIONAL, com 5% de desconto. */

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"pt_BR.UTF-8");

    float preco,precso_promocional,desconto;

    printf("=======================================================\n");
    printf("                  CALCULADORA DE DESCONTO              \n");    
    printf("=======================================================\n");
    printf("Digite o preço do produto: R$");
    scanf(" %f",&preco);
    printf("-------------------------------------------------------\n");

    desconto = 0.05;
    preco_promocional = preco -(preco*desconto);

    printf("Preço do produto: R$%.2f \n",preco);
    printf("Desconto de: %.2f%% \n",desconto*100);
    printf("Preço promocional: R$%.2f \n",preco_promocional);   
    printf("=======================================================\n");

    return 0;   
}