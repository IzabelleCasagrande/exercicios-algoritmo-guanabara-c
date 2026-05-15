/*28) Faça um programa que leia a largura e o comprimento de um terreno retangular, calculando e mostrando a sua área em m². 
O programa também deve mostrar a classificação desse terreno, de acordo com a lista abaixo:
 - Abaixo de 100m² = TERRENO POPULAR
 - Entre 100m² e 500m² = TERRENO MASTER
 - Acima de 500m² = TERRENO VIP*/

 #include <stdio.h>
 #include <locale.h>

 int main() {

    setlocale(LC_ALL, "pt_Br.UTF-8");

    float largura, comprimento,area;

    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    if (area <100.00) {
        printf("Área do terreno: %.2f m² - TERRENO POPULAR!\n",area);
    }else if (area <=500.00) {
        printf("Área do terreno: %.2f m² - TERRENO MASTER!\n",area);
    }else {
        printf("Área do terreno: %.2f m² - TERRENO VIP!\n",area);
    }

    return 0;
 }