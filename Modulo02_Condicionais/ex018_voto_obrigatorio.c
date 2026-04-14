/*Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade dela e depois mostre se ela pode ou não votar.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"pt-BR.UTF-8");

    int ano_nascimento, ano_atual,idade;

    printf("===============================================\n");
    printf("       TSE - Tribunal Superior Eleitoral       \n");
    printf("===============================================\n");
    printf("Informe o ano de nascimento: ");
    scanf(" %d",&ano_nascimento);
    printf("-----------------------------------------------\n");

    ano_atual = 2026;
    idade = ano_atual - ano_nascimento;

    if (idade>=16) {
        printf("Você tem mais de 16 anos e pode votar.\n");
    } else {
        printf("Você tem menos de 16 anos e não pode votar. \n");
    }

    printf("==============================================\n");
    
    return 0;
}