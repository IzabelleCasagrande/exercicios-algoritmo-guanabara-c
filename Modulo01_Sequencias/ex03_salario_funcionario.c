/*Crie um programa que leia o nome e o salário de um funcionário, mostrando no
final uma mensagem.
Ex:Nome do Funcionário: Maria do Carmo
Salário: 1850,45
O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.*/
#include <stdio.h>

int main() {
    
    char nome [20];
    float salario;

    printf("========================================\n");
    printf("           CASAGRANDE LTDA              \n");
    printf("========================================\n");
    printf("Digite o nome do funcionario: ");
    scanf("%s",nome);
    printf("Digite o salario: R$");
    scanf("%f",&salario);
    printf("---------------------------------------\n");
    printf("Nome do funcionario: %s\n",nome);
    printf("Salario do funcionario: R$%.2f\n",salario);
    /*Para evitar que o computador mostre 6 casas após a virgula, colocamos um .n após o marcador de lugar (%) e antes
    da variavel, para dizer ao computador que vamos mostrar um numero real com n casas decimais.*/
    printf("---------------------------------------\n");
    printf("Digite enter para sair.\n");
    printf("========================================\n");

    getchar();
    getchar();
    return 0;
}