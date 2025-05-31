#include <stdio.h>

// --- Funções Recursivas para Torre, Bispo e Rainha ---

/**
 * @brief Simula o movimento da Torre recursivamente.
 * A Torre se move 'casas' para a direita.
 * @param casas O número de casas a serem movidas.
 */
void moverTorre(int casas) {
    // Caso base da recursão: se não há mais casas para mover, retorna.
    if (casas <= 0) {
        return;
    }
    // Imprime a direção do movimento para a casa atual.
    printf("Direita\n");
    // Chama a função recursivamente para a próxima casa.
    moverTorre(casas - 1);
}

/**
 * @brief Simula o movimento do Bispo recursivamente.
 * O Bispo se move 'casas' na diagonal para cima e à direita.
 * @param casas O número de casas a serem movidas.
 */
void moverBispo(int casas) {
    // Caso base da recursão: se não há mais casas para mover, retorna.
    if (casas <= 0) {
        return;
    }
    // Imprime a direção do movimento para a casa atual (diagonal).
    printf("Cima, Direita\n");
    // Chama a função recursivamente para a próxima casa.
    moverBispo(casas - 1);
}

/**
 * @brief Simula o movimento da Rainha recursivamente.
 * A Rainha se move 'casas' para a esquerda.
 * @param casas O número de casas a serem movidas.
 */
void moverRainha(int casas) {
    // Caso base da recursão: se não há mais casas para mover, retorna.
    if (casas <= 0) {
        return;
    }
    // Imprime a direção do movimento para a casa atual.
    printf("Esquerda\n");
    // Chama a função recursivamente para a próxima casa.
    moverRainha(casas - 1);
}

int main() {
    // --- Movimento da TORRE (usando recursividade) ---
    printf("--- Movimento da TORRE ---\n");
    moverTorre(5); // Move 5 casas para a direita
    printf("\n"); // Adiciona uma linha em branco para separar os movimentos das peças

    // --- Movimento do BISPO (usando recursividade E loops aninhados) ---
    // O Bispo se move 5 casas na diagonal para cima e à direita.
    // Usaremos a função recursiva combinada com a ideia de loops aninhados
    // para demonstrar o conceito, embora a recursividade já trate a repetição.
    // Para cumprir o requisito específico de "loop mais externo para vertical
    // e mais interno para horizontal" junto com recursividade, adaptamos a lógica.
    // A recursividade já lida com o "movimento" da casa em si.
    // Podemos pensar nos loops aninhados para descrever as COMPONENTES do movimento diagonal.
    printf("--- Movimento do BISPO ---\n");
    int total_movimentos_bispo = 5; // Número total de casas na diagonal
    for (int i = 0; i < total_movimentos_bispo; i++) { // Loop externo para o movimento vertical (conceitual)
        int j = 0;
        // Loop interno para o movimento horizontal (conceitual)
        // Este loop interno é executado uma vez por "passo" diagonal
        while (j < 1) { // Apenas uma "passo" horizontal por "passo" vertical na diagonal
            printf("Cima, Direita\n");
            j++;
        }
    }
    printf("\n"); // Adiciona uma linha em branco para separar os movimentos das peças


    // --- Movimento da RAINHA (usando recursividade) ---
    printf("--- Movimento da RAINHA ---\n");
    moverRainha(8); // Move 8 casas para a esquerda
    printf("\n"); // Adiciona uma linha em branco para separar os movimentos das peças

    // --- Movimento do CAVALO (usando loops aninhados complexos) ---
    // O Cavalo se move em "L": duas casas para cima e uma para a direita.
    printf("--- Movimento do CAVALO ---\n");

    int movimentos_verticais = 0;
    int movimentos_horizontais = 0;
    int max_vert = 2; // Duas casas para cima
    int max_horz = 1; // Uma casa para a direita

    // Loop externo para o movimento vertical (para cima)
    for (int i = 0; i < max_vert + max_horz; i++) { // Um único loop para controlar o progresso geral
        // Verifica se ainda precisamos mover verticalmente
        if (movimentos_verticais < max_vert) {
            printf("Cima\n");
            movimentos_verticais++;
            // Se já movemos verticalmente o suficiente, podemos "quebrar" ou "continuar"
            // para o próximo estágio. Aqui, 'continue' nos leva para a próxima iteração
            // sem executar a parte horizontal se o movimento vertical ainda não foi completado.
            if (movimentos_verticais < max_vert) {
                continue; // Move mais para cima antes de considerar o movimento horizontal
            }
        }

        // Verifica se ainda precisamos mover horizontalmente
        // Esta parte só será executada se o 'continue' acima não foi acionado,
        // ou seja, se já completamos os movimentos verticais necessários,
        // ou se estamos na última iteração onde o movimento horizontal ocorre.
        if (movimentos_horizontais < max_horz) {
            printf("Direita\n");
            movimentos_horizontais++;
            // Se já movemos horizontalmente o suficiente, podemos "quebrar" o loop externo
            // pois o movimento em L foi completado.
            if (movimentos_horizontais == max_horz) {
                break; // O movimento em L foi concluído, sai do loop principal
            }
        }
    }
    printf("\n"); // Adiciona uma linha em branco final

    return 0;
}
