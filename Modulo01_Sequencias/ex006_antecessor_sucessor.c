/*Faça um programa que leia um número inteiro e mostre o seu antecessor e seu sucessor.
Ex:Digite um número: 9 O antecessor de 9 é 8 O sucessor de 9 é 10*/

#include <stdio.h>
#include <locale.h>

int main() {
  int n1,ant,suc;
  
  printf("===========================================\n");
  printf("           ANTECESSOR E SUCESSOR           \n");
  printf("===========================================\n");
  printf("Digite um número inteiro: ");
  scanf("%d",&n1);
  ant=(n1-1);
  suc=(n1+1);
  printf("-------------------------------------------\n");
  printf("Sucessor:%d \n",suc);
  printf("Antecessor:%d \n",ant);
    
  return 0;
}
