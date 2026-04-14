/*[DESAFIO] Escreva um programa para calcular a redução do tempo de vida de um fumante. Pergunte a quantidade de cigarros fumados por dias e 
quantos anos ele já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule quantos dias de vida um fumante perderá e 
exiba o total em dias.*/

#include <stdio.h>
#include <locale.h> 

int main() {
    
    setlocale(LC_ALL,"pt_BR.UTF-8");

    float dias_perdidos;
    int cigarro_diario,anos_fumados;

    printf("=======================================================\n");
    printf("              CALCULADORA DE VIDA DE FUMANTE           \n");
    printf("=======================================================\n");
    printf("Digite a quantidade de cigarros fumados por dia: ");
    scanf("%d",&cigarro_diario);
    printf("Digite a quantidade de anos que fumou: ");
    scanf(" %d",&anos_fumados);
    printf("-------------------------------------------------------\n");

    dias_perdidos = (cigarro_diario*10.0*365*anos_fumados)/(60*24);

    printf("Estimativa de dias perdidos: %.2f dias \n",dias_perdidos);
    printf("Nunca é tarde para parar de fumar e recuperar sua saúde! \n");
    printf("=======================================================\n");    
    
    return 0;
}