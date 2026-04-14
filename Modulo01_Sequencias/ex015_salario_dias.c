/*Crie um programa que leia o número de dias trabalhados em um mês e mostre o salário de um funcionário, sabendo que ele 
trabalha 8 horas por dia e ganha R$25 por hora trabalhada.*/

#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL,"pt-BR.UTF-8");

    int dias_trabalhados;
    float salario, horas_trabalhadas, valor_hora;

    printf("=======================================================\n");
    printf("                 CALCULADORA DE SALÁRIO                \n");    
    printf("=======================================================\n");
    printf("Digite a quantidade de dias trabalhados: ");
    scanf(" %d",&dias_trabalhados);
    printf("-------------------------------------------------------\n");

    horas_trabalhadas = 8;
    valor_hora = 25;
    salario = (valor_hora*horas_trabalhadas) * dias_trabalhados;

    printf("O salário do funcionário que trabalhou %.0f horas por dia durante %d dias é de R$%.2f \n",horas_trabalhadas,dias_trabalhados,salario);
    printf("=======================================================\n");

    return 0;

}