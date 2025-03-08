#include <stdio.h>

const int PERCURSO_PECA = 5;
const int MOVIMENTO_INICIAL = 1;
const int PERCURSO_CAVALO_VERTICAL = 2;

void movimentoTorre(int step) {
    if (step > PERCURSO_PECA) {
        printf("\n");
        return;
    }
    
    printf("Direita\n");
    movimentoTorre(step + 1);
}

void movimentoBispo(int step) {

    if (step > PERCURSO_PECA) {
        printf("\n");
        return;
    }

    while (1) {
        printf("Cima \n");

        while (1) {
            printf("Direita \n");
            break;
        }

        break;
    }

    step = step + 1;

    movimentoBispo(step);
}

void movimentoRainha(int step) {
    if (step > PERCURSO_PECA) {
        printf("\n");
        return;
    }
    printf("Esquerda\n");
    movimentoRainha(step + 1);
}

void movimentoCavalo() {
    for (int i = 1; i <= PERCURSO_CAVALO_VERTICAL; i++) {
        printf("Cima \n");
        for (int j = 1; j <= 1; j++) {
            if (i == 2) {
                printf("Direita\n");
            }
        }
    }
}

int main() {
    printf("Movimento do BISPO: \n");
    movimentoBispo(MOVIMENTO_INICIAL);
    
    printf("Movimento do TORRE: \n");
    movimentoTorre(MOVIMENTO_INICIAL);
    
    printf("Movimento do RAINHA: \n");
    movimentoRainha(MOVIMENTO_INICIAL);

    // Movimento do Cavalo (2 casas para baixo e 1 casa para a esquerda) - usando loops aninhados
    printf("\nMovimento do CAVALO:\n");
    movimentoCavalo();

    return 0;
}