/*Desenvolva um programa que leia uma distância em metros e mostre os valores relativos em outras medidas.
Ex: Digite uma distância em metros: 185.72
A distância de 185.72m corresponde a:
0.18572Km
1.8572Hm
18.572Dam
1857.2dm
18572.0cm
185720.0mm*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"pt_BR.UTF-8");

    float metros,KM,HM,Dam,dm,cm,mm;

    printf("==========================================\n");
    printf("         CONVERSOR DE MEDIDAS            \n");  
    printf("==========================================\n");
    printf("Digite uma distancia em metros: ");
    scanf("%f",&metros);
    printf("------------------------------------------\n");

    KM=metros/1000;
    HM=metros/100;
    Dam=metros/10;
    dm=metros*10;
    cm=metros*100;
    mm=metros*1000;
    printf("A distancia de %.2fm corresponde a: \n",metros);
    printf("%.5fKM \n",KM);
    printf("%.4fHM \n",HM);
    printf("%.3fDam \n",Dam);
    printf("%.1fdm \n",dm);
    printf("%.1fcm \n",cm);
    printf("%.1fmm \n",mm);
    printf("==========================================\n");
    return 0;
}

