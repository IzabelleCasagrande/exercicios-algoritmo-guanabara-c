/*27) Crie um programa que leia duas notas de um aluno e calcule a sua média,
mostrando uma mensagem no final, de acordo com a média atingida:
 - Média até 4.9: REPROVADO
 - Média entre 5.0 e 6.9: RECUPERAÇÃO
 - Média 7.0 ou superior: APROVADO*/

 #include <stdio.h>
 #include <locale.h>

 int main() {
    
    setlocale(LC_ALL, "pt_Br.UTF-8");

    float n1,n2,media;

    printf("Digite a primeira nota do aluno:");
    scanf("%f",&n1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &n2);
    media =(n1+n2)/2;
    if (media<5.0) {
        printf("Média: %.2f - REPROVADO!\n",media);
    }else if (media<7.0) {
        printf("Média: %.2f - RECUPERAÇÃO!\n",media);
    }else {
        printf("Média: %.2f - APROVADO!\n",media);
    }

    return 0;
 }