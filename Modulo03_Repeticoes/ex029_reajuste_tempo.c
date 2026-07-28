/*Desenvolva um programa que leia o nome de um funcionário, seu salário, quantos anos ele trabalha na empresa e mostre seu novo salário, 
reajustado de acordo com a tabela a seguir:
 - Até 3 anos de empresa: aumento de 3%
 - entre 3 e 10 anos: aumento de 12.5%
 - 10 anos ou mais: aumento de 20%*/

 #include <stdio.h>
 #include <locale.h>

 int main() {
    setlocale(LC_ALL, "pt_Br.UTF-8");   

    char nome[50];
    float salario,novo_salario;  
    int anos_de_empresa;

    printf("Digite o nome do funcionário: ");
    scanf("%s", nome);
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);
    printf("Digite quantos anos o funcionário trabalha na empresa: ");
    scanf("%d", &anos_de_empresa);

    if (anos_de_empresa <= 3) {
        novo_salario = salario + (salario*0.03);
    }else if (anos_de_empresa < 10) {
        novo_salario = salario + (salario*0.125);
    }else {
        novo_salario = salario + (salario*0.20);
    }   

    printf("O novo salário do funcionário é: %.2f\n", novo_salario);

    return 0;
 }