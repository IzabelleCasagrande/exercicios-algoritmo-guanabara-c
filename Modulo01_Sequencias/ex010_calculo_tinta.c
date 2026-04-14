/*Faça um algoritmo que leia a largura e altura de uma parede, calcule e mostre a área a ser pintada e a quantidade de tinta 
necessária para o serviço, sabendo que cada litro de tinta pinta uma área de 2metros quadrados.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"pt_BR.UTF-8");

    float largura, altura, area,tinta;

    printf("=======================================================\n");
    printf("                  CALCULADORA DE TINTA                 \n");
    printf("=======================================================\n");
    printf("Digite a largura da parede (em metros): ");
    scanf(" %f",&largura);
    printf("Digite a altura da parede (em metros):");
    scanf(" %f",&altura);
    printf("-------------------------------------------------------\n");
    
    area = largura*altura;
    tinta = area/2;
    
    printf("A área a ser pintada é de %.2f \n",area);
    printf("Será preciso %.2f litros de tinta. \n",tinta);
    printf("=======================================================\n");
    
    return 0;
}