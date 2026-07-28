//Crie um jogo de JoKenPo (Pedra-Papel-Tesoura)

#include <stdio.h>

int main() {

    int jog1,jog2;

    printf("===================================\n");
    printf("Bem-vindo ao jogo de JoKenPo!\n");
    printf("===================================\n");
    printf("Escolha um movimento!\n");
    printf("[1]Pedra\n");
    printf("[2]Papel\n");
    printf("[3]Tesoura\n");
    printf("[0]Sair\n");
    printf("------------------------------------\n");
    printf("Jogador 1, digite sua opção: ");
    scanf("%d",&jog1);
    printf("Jogador 2, digite sua opção: ");
    scanf("%d",&jog2);
    
    if (jog1<0 || jog1>3 || jog2<0 || jog2>3) {
        printf("Opção inválida! Digite um número entre 0 e 3.");
    }else if (jog1==0 || jog2==0) {
        printf("Saindo do jogo...");
    }else if (jog1==jog2) {
        printf("Empate!");
    }else if (jog1==1 && jog2==3 || jog1==2 && jog2==1 || jog1==3 && jog2==2) {
        printf("Jogador 1 venceu!");
    }else {
        printf("Jogador 2 venceu!");
    }
    return 0;

}