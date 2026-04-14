\*Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a sua
terça parte. Ex: Digite um número: 3.5 O dobro de 3.5 é 7.0 A terça parte de 3.5 é 1.16666*/

#include <stdio.h>
#include <locale.h>

int main() {
    
    float n1,dobro,terca;
    
    printf("=====================================\n");
    printf("         DOBRO E TERÇA PARTE         \n");
    printf("=====================================\n");
    printf("Digite um número: ");
    scanf("%f",&n1);
    dobro=(n1*2);
    terca=(n1/3.0);
    printf("--------------------------------------\n");
    printf("O dobro do número %f é: %f \n",n1,dobro);
    printf("A terça parte do número %f é: %f \n",n1,terca);
    printf("======================================\n");
    
    return 0;
}