/*Faça um programa que leia um número inteiro e mostre o seu antecessor e seu sucessor.
Ex:Digite um número: 9 O antecessor de 9 é 8 O sucessor de 9 é 10 */
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"pt_BR.UTF-8");
    int num,antecessor,sucessor;
    printf("==========================================\n");
    printf("           ANTECESSOR E SUCESSOR          \n");
    printf("==========================================\n");
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
    printf("------------------------------------------\n");
    antecessor=num-1;
    sucessor=num+1;
    printf("O antecessor de %d é %d \n",num,antecessor);
    printf("O sucessor de %d é %d \n",num,sucessor);
    printf("==========================================\n");
    return 0;
}
