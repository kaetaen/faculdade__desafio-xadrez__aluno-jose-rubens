#include <stdio.h>

int main() {

    int MOVIMENTACAO_CASAS = 5;

    // determina os primeiros movimentos do cavalo, que são na vertical.
    int MOVIMENTAÇÃO_CAVALO_INICIAL  = 2;

    // Movimento da Torre (5 casas para a direita) - usando for
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= MOVIMENTACAO_CASAS; i++) {
        printf("Direita (%d) \n", i);
    }

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) - usando while
    printf("\nMovimento do Bispo:\n");
    int count = 1;
    while (count <= MOVIMENTACAO_CASAS) {
        printf("Cima, Direita (%d)\n", count);
        count++;
    }

    // Movimento da Rainha (8 casas para a esquerda) - usando do-while
    printf("\nMovimento da Rainha:\n");
    int steps = 1;
    do {
        printf("Esquerda (%d) \n", steps);
        steps++;
    } while (steps <= MOVIMENTACAO_CASAS);

    // Movimento do Cavalo (2 casas para baixo e 1 casa para a esquerda) - usando loops aninhados
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1; i <= MOVIMENTAÇÃO_CAVALO_INICIAL; i++) {
        printf("Baixo (%d) \n", i);
        for (int j = 1; j <= 1; j++) {
            if (i == 2) {
                printf("Esquerda (%d) \n", j);
            }
        }
    }

    return 0;
}