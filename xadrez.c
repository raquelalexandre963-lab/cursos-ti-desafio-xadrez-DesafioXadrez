#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Exemplo de uso de estruturas de repetição: for, while, do-while e loops aninhados.

int main() {
    // Definimos constantes para o número de casas de cada peça.
    const int BISHOP_STEPS = 5; // bispo se move 5 casas na diagonal
    const int ROOK_STEPS = 5;  // torre se move 5 casas para a direita
    const int QUEEN_STEPS = 8; // rainha se move 8 casas para a esquerda

    // 1) Movimentação do Bispo usando for.
    printf("Bispo (diagonal superior direita):\n");
    for (int passo = 1; passo <= BISHOP_STEPS; passo++) {
        // A cada repetição, mostramos a direção combinada da diagonal:
        printf("%d: Direita + Cima\n", passo);
    }
    printf("\n");

    // 2) Movimentação da Torre usando while.
    printf("Torre (direita):\n");
    int torrePasso = 1;
    while (torrePasso <= ROOK_STEPS) {
        // Enquanto o passo atual for menor ou igual ao máximo,
        // continuamos imprimindo "Direita".
        printf("%d: Direita\n", torrePasso);
        torrePasso++; // avança o contador do loop
    }
    printf("\n");

    // 3) Movimentação da Rainha usando do-while.
    printf("Rainha (esquerda):\n");
    int rainhaPasso = 0;
    do {
        // O corpo do do-while é executado ao menos uma vez.
        rainhaPasso++;
        printf("%d: Esquerda\n", rainhaPasso);
    } while (rainhaPasso < QUEEN_STEPS);
    printf("\n");

    // 4) Movimentação do Cavalo usando loops aninhados.
    // Aqui simulamos o movimento em L: primeiro 2 passos para baixo,
    // depois 1 passo para a esquerda.
    printf("Cavalo (L para baixo e esquerda):\n");
    int movimentoCavalo = 1;

    for (int bloco = 1; bloco <= 2; bloco++) {
        int passos = 0;
        // No primeiro bloco, movemos 2 vezes para baixo.
        // No segundo bloco, movemos 1 vez para a esquerda.
        int passosMax = (bloco == 1) ? 2 : 1;

        while (passos < passosMax) {
            if (bloco == 1) {
                printf("%d: Baixo\n", movimentoCavalo);
            } else {
                printf("%d: Esquerda\n", movimentoCavalo);
            }
            passos++;
            movimentoCavalo++;
        }
    }

    return 0;
}
