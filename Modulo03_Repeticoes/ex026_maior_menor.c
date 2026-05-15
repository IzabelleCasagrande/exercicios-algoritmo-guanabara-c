/*26) Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando na tela uma das mensagens abaixo:
 - O primeiro valor é o maior
 - O segundo valor é o maior
 - Não existe valor maior, os dois são iguais*/
 #include <stdio.h>
 #include <locale.h>

 int main() {

    setlocale(LC_ALL, "pt_Br.UTF-8");

    int n1,n2;

    printf("Digite o primeiro número inteiro:");
    scanf("%d", &n1);
    printf("Digite o segundo número inteiro:");
    scanf("%d", &n2);

    if (n1>n2) {
        printf("O primeiro valor é o maior!\n");
    }else if (n2>n1) {
        printf("O segundo valor é o maior!\n");
    }else {
        printf("Não existe valor maior, os dois são iguais!\n");
    }

    return 0;
 }