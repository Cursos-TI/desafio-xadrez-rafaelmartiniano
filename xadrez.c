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
    printf("\n"); // Adiciona uma linha em branco para separar os movimentos das peças

    // Simulação do movimento do CAVALO (usando loops aninhados: for e while)
    // O Cavalo se move duas casas para baixo e uma casa para a esquerda.
    printf("--- Movimento do CAVALO ---\n");

    // Define o número de casas para cada parte do movimento em 'L'
    int casas_para_baixo = 2;
    int casas_para_esquerda = 1;

    // Primeiro loop (for) para simular o movimento vertical (duas casas para baixo)
    for (int m = 0; m < casas_para_baixo; m++) {
        printf("Baixo\n");
    }

    // Segundo loop (while) aninhado para simular o movimento horizontal (uma casa para a esquerda)
    int n = 0;
    while (n < casas_para_esquerda) {
        printf("Esquerda\n");
        n++;
    }
    printf("\n"); // Adiciona uma linha em branco final para o Cavalo

    return 0;
}
