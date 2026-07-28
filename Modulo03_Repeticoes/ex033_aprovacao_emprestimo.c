//Escreva um programa para aprovar ou não o empréstimo bancário para a compra de uma casa. O programa vai perguntar o valor da casa, o salário
// do comprador e em quantos anos ele vai pagar. Calcule o valor da prestação mensal, sabendo que ela não pode exceder 30% do salário ou então 
//o empréstimo será negado.

#include <stdio.h>
int main() {

    float valor_casa, salario, prestacao;
    int anos;

    printf("=========================================\n");
    printf("CASAGRANDE BANK - Simulador de Empréstimo\n");
    printf("=========================================\n");
    printf("Digite o valor da casa: R$");
    scanf("%f",&valor_casa);
    printf("Digite o valor do seu salário: R$");
    scanf("%f",&salario);
    printf("Digite em quantos anos você pretende pagar: ");
    scanf("%d",&anos);
    
    prestacao=valor_casa/(anos*12);

    if (prestacao<=0) {
        printf("Empréstimo negado! O valor da prestação não pode ser menor ou igual a zero.");
    }else if (prestacao>salario*0.3) {
        printf("Empréstimo negado! A prestação mensal de R$%.2f excede 30%% do seu salário.",prestacao);
    }else {
        printf("Empréstimo aprovado! A prestação mensal será de R$%.2f.",prestacao);
    }
    return 0;
}