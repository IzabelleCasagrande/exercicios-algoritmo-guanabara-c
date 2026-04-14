/*Desenvolva uma lógica que leia os valores de A, B e C de uma equação do segundo grau e mostre o
valor de Delta.*/

#include <stdio.h>
#include <locale.h> 

int main() {
    
    setlocale(LC_ALL,"pt_BR.UTF-8");

    float a,b,c,delta;

    printf("=======================================================\n");
    printf("                  CALCULADORA DE DELTA                 \n");        
    printf("=======================================================\n");
    printf("Digite o valor de A: ");
    scanf(" %f",&a);
    printf("Digite o valor de B:");
    scanf(" %f",&b);
    printf("Digite o valor de C:");
    scanf(" %f",&c);
    printf("-------------------------------------------------------\n");
    
    delta=(b*b)-(4*a*c);
    
    printf("delta=( %.2f* %.2f)-(4* %.2f* %.2f) \n",b,b,a,c);
    printf("O valor de Delta é: %.2f \n",delta);
    printf("=======================================================\n");
    
    return 0;
}