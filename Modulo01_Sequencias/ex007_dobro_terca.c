/*Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a sua terça parte. 
Ex: Digite um número: 3.5 O dobro de 3.5 é 7.0 A terça parte de 3.5 é 1.16666*/

#include<stdio.h>
#include<locale.h>

int main() {
    
    setlocale(LC_ALL,"pt_BR.UTF-8");

    float num,dobro,terca_parte;

    printf("=======================================\n");
    printf("         DOBRO E TERÇA PARTE           \n");    
    printf("=======================================\n");
    printf("Digite um numero real: ");
    scanf("%f",&num);
    printf("---------------------------------------\n");
    dobro=num*2;
    terca_parte=num/3;
    printf("O dobro de %.2f é %.2f \n",num,dobro);
    printf("A terça parte de %.2f é %.6f \n",num,terca_parte);
    printf("=======================================\n");

}