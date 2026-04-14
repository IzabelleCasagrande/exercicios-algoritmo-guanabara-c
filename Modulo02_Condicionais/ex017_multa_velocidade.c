/*Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 80Km/h, exiba uma mensagem dizendo que o usuário foi multado. 
Nesse caso, exiba o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida.*/

#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float velocidade, multa,limite_excedido;

    printf("=======================================================\n");
    printf("                  CALCULADORA DE MULTA                 \n");
    printf("=======================================================\n");
    printf("Digite a velocidade do carro (Km/h): ");
    scanf(" %f",&velocidade);
    printf("-------------------------------------------------------\n");
    if (velocidade>80) {
        limite_excedido = velocidade-80;
        multa = limite_excedido*5;
        printf("Você foi multado por exceder %.2f Km/h acima do limite permitido. \n",limite_excedido);
        printf("O valor da multa é de R$ %.2f. \n",multa);
    } else {
        printf("Você está dentro do limite de velocidade. \n");
    }
    printf("=======================================================\n");
    return 0;
}