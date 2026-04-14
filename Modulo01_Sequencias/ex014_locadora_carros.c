/*A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva um programa que pergunte a quantidade de Km percorridos por um 
carro alugado e a quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar, sabendo que o carro custa R$90 por dia e 
R$0,20 por Km rodado.*/

#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL,"pt-BR.UTF-8");

    float km_percorridos, dias_alugados, valor_km, valor_dia, valor_total;

    printf("=======================================================\n");
    printf("                 CALCULADORA DE ALUGUEL                \n");
    printf("=======================================================\n");
    printf("Digite a quantidade de Km percorridos: ");
    scanf(" %f",&km_percorridos);
    printf("Digite a quantidade de dias alugados: ");
    scanf(" %f",&dias_alugados);
    printf("-------------------------------------------------------\n");
    
    valor_km = km_percorridos*0.20;
    valor_dia = dias_alugados*90;
    valor_total = valor_km + valor_dia;
    
    printf("O valor total a pagar pelo aluguel de %.0f dias e %.2f Km é de R$%.2f \n",dias_alugados,km_percorridos,valor_total);
    printf("=======================================================\n");

    return 0;
}