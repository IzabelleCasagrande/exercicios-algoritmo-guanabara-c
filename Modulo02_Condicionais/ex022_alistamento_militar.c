#include <stdio.h>

int main () {

    int ano_nascimento, ano_atual, idade;

    printf("=========================================================================\n");
    printf("   ALISTAMENTO MILITAR     \n");
    printf("=========================================================================\n");
    printf("Digite o ano de nascimento: ");
    scanf("%d",&ano_nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    printf("-------------------------------------------------------------------------\n");
    idade = ano_atual - ano_nascimento;
    if (idade<18) {

        printf("Você ainda não tem a idade necessária para o alistamento militar.\n");
        printf("Faltam %d anos para o seu alistamento\n", 18-idade);

    } else if (idade==18) {

        printf("Você tem a idade necessária para o alistamento militar.\n");
        printf("Faça seu alistamento o quanto antes!\n");

    } else {
        printf("Você já passou da idade para o alistamento militar.\n");
        printf("Você deveria ter se alistado há %d anos. \n",idade-18);

    }
    printf("=========================================================================\n");

    return 0;
}