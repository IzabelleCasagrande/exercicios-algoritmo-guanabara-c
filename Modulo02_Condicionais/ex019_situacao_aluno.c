/*Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua média e mostre na tela.
No final, analise a média e mostre se o aluno teve ou não um bom aproveitamento 
(se ficou acima da média 7.0).*/

#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL,"pt-BR.UTF-8");

    char nome[30];
    float n1,n2,media;

    printf("===============================\n");
    printf("        ESCOLA DO SABER        \n");
    printf("===============================\n");
    printf("Digite o nome do aluno: ");
    scanf(" %s",nome);
    printf("Digite a primeira nota: ");
    scanf(" %f",&n1);
    printf("Digite a segunda nota: ");
    scanf(" %f",&n2);
    printf("-------------------------------\n");

    media = (n1+n2)/2;

    if (media>=7) {
        printf("O aluno tirou média %.2f e passou.\n",media);
    } else {
        printf("O aluno tirou média %.2f e não passou.\n",media);
    }
    
    printf("=================================\n");

    return 0;
}