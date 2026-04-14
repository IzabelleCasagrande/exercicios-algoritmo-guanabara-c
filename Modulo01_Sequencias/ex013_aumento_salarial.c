/*Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o seu novo salário, com 15% de aumento.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"pt_BR.UTF-8");

    float salario, aumento, novo_salario;

    printf("=======================================================\n");
    printf("             CALCULADORA DE AUMENTO SALARIAL           \n");
    printf("=======================================================\n");
    printf("Digite o salário do funcinário: R$");
    scanf(" %f",&salario);
    printf("-------------------------------------------------------\n");
    
    aumento = 0.15;
    novo_salario = salario + (salario*aumento);

    printf("O novo salário do funcionário é de R$%.2f \n",novo_salario);
    printf("=======================================================\n");

    return 0;

}