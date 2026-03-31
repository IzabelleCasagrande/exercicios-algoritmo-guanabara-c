/*Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela:
Ex:Qual é o seu nome? João da Silva
Olá João da Silva, é um prazer te conhecer!*/

#include <stdio.h>

int main() {

    char nome [20];
    printf("Digite seu nome: ");
    /*Só é possível fazer leitura de nomes sem espaço*/
    scanf("%s",nome);
    printf("Ola %s , e um prazer te conhecer!\n",nome);
    /*O terminal não reconhece letras com acento, para que nao fiquem aparecendo vários simbolos sem 
    sentido, as frases não serão acentuadas.*/

    printf("Digite enter para encerrar.");

    /*getchar(); impede que o executavel feche diretamente após a leitura do nome. Como o computador 
    realiza a execução muito rápido, isso impede que o usuário consiga ler a mensagem final. Dessa forma,
    adicionamos outro printf, instruindo o usuario a digitar enter, quando desejar finalizar a aplicação.
    São utilizados duas vezes, a primeira para limpar o enter da primeira leitura de variavel, a segunda
    para ler o enter do usuário sinalizando o desejo da finalização. Isso acontece, porque quando o computador
    le a variavel com o scanf, ele só guarda a variavel pra si e acaba deixando o Enter do usuário como se 
    fosse um lixo. O primeiro getchar pega esse lixo(buffer) para ele e armazena, o segundo armazena o Enter final.
    Existe uma maneira "mais facil" de se fazer isso, usando o system("pause") que fica armazenado na biblioteca
    stdlib.h porém a compatibilidade com esse comando é somente no Windows logo, o programa quando rodado em mac
    ou linux não irá funcionar. O getchar garante essa compatibilidade multiplataforma. Isso só é necessário
    para rodar os executáveis clicando diretamente neles. Em ambientes profissionais, os programas são rodados
    ou pelo terminal ou ja tem a interface grafica para o usuario.*/
    getchar();
    getchar();

    return 0;
}