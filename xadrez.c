#include <stdio.h>

// recursividade torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// recursividade bispo
void moverBispo(int vertical, int horizontal) {
    if (vertical > 0 && horizontal > 0) {
        printf("Diagonal Cima-Direita \n");
        moverBispo(vertical - 1, horizontal - 1);
    }
}
// recursividade rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}
// recursividade cavalo
void moverCavalo(int maxY, int maxX) {
    for (int y = maxY; y >= 2; y--) {
        for (int x = 0; x <= maxX - 1; x++) {
            if ((y - 2) >= 0 && (x + 1) <= maxX) {
                printf("Cavalo: 2 para cima, 1 para direita\n");
                continue;
            } else {
                break;
            }
        }
    }
}

int main() {
    // função principal
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int movimentoCavaloY = 4;
    int movimentoCavaloX = 4;

    printf("\nMovimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo, casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo(movimentoCavaloY, movimentoCavaloX);

    return 0;
}



    
    
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
