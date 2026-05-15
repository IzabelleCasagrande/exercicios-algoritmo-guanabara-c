/*25) [DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta. Analise seus comprimentos
e diga se é possível formar um triângulo com essas retas. Matematicamente, para três segmentos formarem 
um triângulo, o comprimento de cada lado deve ser menor que a soma dos outros dois.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_Br.UTF-8");

    int l1,l2,l3;

    printf("Digite o tamanho do primeiro segmento de reta: ");
    scanf("%d", &l1);
    printf("Digite o tamanho do segundo segmento de reta: ");
    scanf("%d", &l2);   
    printf("Digite o tamanho do terceiro segmento de reta: ");
    scanf("%d", &l3);

    if (l1<l2+l3 && l2<l1+l3 && l3<l1+l2) {
        printf("Os segmentos informados podem formar um triângulo!");
    }else {
        printf("Os segmentos informados não podem formar um triângulo!");
    }

    return 0;
}
