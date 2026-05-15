/* Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos para todos, mas especialmente para mulheres. 
Faça um programa que leia nome, sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendo que:
 - Homens ganham 5% de desconto
 - Mulheres ganham 13% de desconto*/

 #include <stdio.h>

 int main () {

    char nome[30];
    int sexo;
    float valor_compras, valor_desconto;
    
    printf("===================================================\n");
    printf("   CASAGRANDE STORE - PROMOÇÃO DIA DAS MULHERES    \n");
    printf("===================================================\n");
    printf("Informe o nome da(o) cliente: ");
    scanf("%s", nome);
    printf("Informe o valor total das compras: R$");
    scanf("%f", &valor_compras);
    printf("Selecione o sexo do cliente (M/F):\n");
    printf("[1] Feminino\n");
    printf("[2] Masculino\n");
    scanf("%d", &sexo);
    

    switch (sexo) {
      case 1:
         valor_desconto = valor_compras-(valor_compras*0.13) ;
         printf("O valor total das compras de %s com desconto é: R$%.2f\n", nome, valor_desconto);
         break;
      case 2:
         valor_desconto = valor_compras-(valor_compras*0.05);
         printf("O valor total das compras de %s com desconto é: R$%.2f\n", nome, valor_desconto);
         break;
      default:
         printf("Opção inválida. Por favor, selecione 1 para Feminino ou 2 para Masculino.\n");
         break;
    }

    return 0;

 }