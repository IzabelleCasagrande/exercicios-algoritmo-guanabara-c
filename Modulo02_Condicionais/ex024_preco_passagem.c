/*24) Faça um algoritmo que pergunte a distância que um passageiro deseja percorrer em Km. Calcule o preço da passagem, 
cobrando R$0.50 por Km para viagens até 200Km e R$0.45 para viagens mais longas.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_Br.UTF-8");
    
    float distancia,preco;

    printf("Digite a distância que você deseja percorrer em Km: ");
    scanf("%f", &distancia);

    if (distancia<=200) {
        preco = distancia*0.50;
        printf("O valor pago por km será de R$0,50\n");
    }else {
        preco = distancia*0.45;
        printf("O valor pago por km será de R$0,45\n");
    }

    printf("O preço da passagem para a distância de %.2fkm é: R$%.2f\n",distancia,preco);
    
    return 0;
}