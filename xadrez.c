#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
        // Simulação do movimento da Torre (5 casas para a direita) usando FOR
        printf("Movimento da Torre:\n");
        for (int i = 1; i <= 5; i++) {
            printf("Direita\n");
        }
    
        // Simulação do movimento do Bispo (5 casas na diagonal para cima e à direita) usando WHILE
        printf("\nMovimento do Bispo:\n");
        int casa = 1;
        while (casa <= 5) {
            printf("Cima, Direita\n");
            casa++;
        }
    
        // Simulação do movimento da Rainha (8 casas para a esquerda) usando DO-WHILE
        printf("\nMovimento da Rainha:\n");
        int casaRainha = 1;
        do {
            printf("Esquerda\n");
            casaRainha++;
        } while (casaRainha <= 8);
    
        return 0;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


