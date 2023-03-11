#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ganhar(char jogador, char oponente);

int main() {
    char usuario;
    char computador;
    srand(time(NULL));
    printf("Escolha um: 'r' para pedra, 'p' para papel, 't' para tesoura\n");
    scanf("%c", &usuario);
    computador = rand() % 3;
    if (computador == 0) {computador = 'r';}
    else if (computador == 1) {computador = 'p';} 
    else {computador = 't';}
    if (usuario == computador) {printf("Empatou :/\n");}
    else if (ganhar(usuario, computador)) {printf("Você ganhou! :D\n");} 
    else {printf("Você perdeu ;-;\n");}
    return 0;}

int ganhar(char jogador, char oponente) {
    if ((jogador == 'r' && oponente == 't') || (jogador == 't' && oponente == 'p') || (jogador == 'p' && oponente == 'r')) {return 1;}
    return 0;}
