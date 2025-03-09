#include <stdio.h>

// Função recursiva para o movimento da Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo (5 casas na diagonal para cima e à direita)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para o movimento do Cavalo (2 casas para cima e 1 casa para a direita) usando loops aninhados
void moverCavalo() {
    for (int i = 1; i <= 2; i++) { // Loop para as duas casas para cima
        printf("Cima\n");
    }
    for (int j = 1; j <= 1; j++) { // Loop para uma casa para a direita
        printf("Direita\n");
    }
}

// Função para o movimento do Bispo com loops aninhados (5 casas na diagonal)
void moverBispoComLoops() {
    for (int i = 1; i <= 5; i++) { // Loop externo para o movimento vertical
        for (int j = 1; j <= 1; j++) { // Loop interno para o movimento horizontal
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(5); // Chama a função recursiva para 5 casas
    printf("\n");

    // Movimento do Bispo (recursivo)
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(5); // Chama a função recursiva para 5 casas
    printf("\n");

    // Movimento da Rainha (recursivo)
    printf("Movimento da Rainha:\n");
    moverRainha(8); // Chama a função recursiva para 8 casas
    printf("\n");

    // Movimento do Cavalo (loops aninhados)
    printf("Movimento do Cavalo:\n");
    moverCavalo(); // Chama a função com loops aninhados
    printf("\n");

    // Movimento do Bispo com loops aninhados
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoComLoops(); // Chama a função com loops aninhados

    return 0;
}