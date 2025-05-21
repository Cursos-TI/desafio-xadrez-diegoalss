#include <stdio.h>

int main() {
//declarando variaveis
    int torre = 5;
    int bispo = 5;
    int rainha = 8;

//movimento da torre
    printf("\nMovimento da torre:\n");
    for (int i = 0; i < torre; i++) {
        printf("Movimentação para direita\n");
    }

//movimento do bispo
    printf("\nMovimento do bispo:\n");
    int i = 0;
    while (i < bispo) {
        printf("Cima direita\n");
        i++;
    }

//movuimento da rainha
    printf("\nMovimento da rainha:\n");
    int I = 0;
    do {
        printf("Esquerda\n");
        I++;
    } while (I < rainha);

//declarando variaveis
    int movimentoBaixo = 2;
    int movimentoEsquerda = 1;

//movimento do cavalo
    printf("\nmovimento do cavalo\n");
    for (i = 1; i < 2; i++) {
        printf("baixo\n");
    }

    int j = 0;
    if (i == movimentoBaixo - i) {    
    }
    while (j < movimentoEsquerda) {
        printf("esquerda\n");
        j++; 
    }

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
