/*5) Faça um programa que leia as duas notas de um aluno em uma matéria e mostre
na tela a sua média na disciplina.
Ex:Nota 1: 4.5
Nota 2: 8.5
A média entre 4.5 e 8.5 é igual a 6.5*/

#include <stdio.h>

int main() {
    
    float n1,n2,media;
    
    printf("=======================================\n");
    printf("            ESCOLA DO SABER            \n");
    printf("=======================================\n");
    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    printf("Digite a segunda nota: ");
    scanf("%f",&n2);
    media=(n1+n2)/2;
    printf("----------------------------------------\n");
    printf("Nota 1: %.2f\n",n1);
    printf("Nota 2: %.2f\n",n2);
    printf("Media: %.2f\n",media);
    printf("=======================================\n");

    return 0;
}