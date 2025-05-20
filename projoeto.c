#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça irá se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ------------------ Movimento da Torre ------------------
    // Estrutura de repetição: for
    // Movimento: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // ------------------ Movimento do Bispo ------------------
    // Estrutura de repetição: while
    // Movimento: 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // ------------------ Movimento da Rainha ------------------
    // Estrutura de repetição: do-while
    // Movimento: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    return 0;
} 