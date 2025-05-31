#include <stdio.h>

int main() {
    // Simulação do movimento da TORRE (usando for)
    // A Torre se move 5 casas para a direita.
    printf("--- Movimento da TORRE ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n"); // Adiciona uma linha em branco para separar os movimentos das peças

    // Simulação do movimento do BISPO (usando while)
    // O Bispo se move 5 casas na diagonal para cima e à direita.
    printf("--- Movimento do BISPO ---\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n"); // Representa o movimento diagonal
        j++;
    }
    printf("\n"); // Adiciona uma linha em branco para separar os movimentos das peças

    // Simulação do movimento da RAINHA (usando do-while)
    // A Rainha se move 8 casas para a esquerda.
    printf("--- Movimento da RAINHA ---\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    printf("\n"); // Adiciona uma linha em branco final

    return 0;
}
