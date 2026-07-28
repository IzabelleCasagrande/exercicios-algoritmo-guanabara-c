//[DESAFIO] Refaça o algoritmo 25, acrescentando o recurso de mostrar que tipo de triângulo será formado:
// - EQUILÁTERO: todos os lados iguais
// - ISÓSCELES: dois lados iguais
// - ESCALENO: todos os lados diferentes

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

    if (l1==l2 && l2==l3) {
        printf("Os segmentos informados podem formar um triângulo equilátero!");
    }else if (l1==l2 || l1==l3 || l2==l3) {
        printf("Os segmentos informados podem formar um triângulo isósceles!");
    }else if (l1!=l2 && l1!=l3 && l2!=l3) {
        printf("Os segmentos informados podem formar um triângulo escaleno!");
    }

    return 0;
}