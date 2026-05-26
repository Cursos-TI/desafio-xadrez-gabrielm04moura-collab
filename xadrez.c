#include <stdio.h>

int main() {

    // Torre: 5 casas para a direita - loop FOR
    int casasTorre = 5;
    printf("=== Torre (5 casas para a Direita) ===\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Bispo: 5 casas na diagonal (Cima + Direita) - loop WHILE
    int casasBispo = 5;
    int movBispo = 0;
    printf("\n=== Bispo (5 casas na Diagonal: Cima e Direita) ===\n");
    while (movBispo < casasBispo) {
        printf("Cima Direita\n");
        movBispo++;
    }

    // Rainha: 8 casas para a esquerda - loop DO-WHILE
    int casasRainha = 8;
    int movRainha = 0;
    printf("\n=== Rainha (8 casas para a Esquerda) ===\n");
    do {
        printf("Esquerda\n");
        movRainha++;
    } while (movRainha < casasRainha);

    // Cavalo: movimento em "L" - 2 casas para Baixo e 1 casa para Esquerda
    // Loop externo FOR: controla as 2 casas verticais (Baixo)
    // Loop interno WHILE: controla a 1 casa horizontal (Esquerda)
    int casasBaixo = 2;
    int casasEsquerda = 1;
    printf("\n=== Cavalo (2 casas para Baixo, 1 casa para Esquerda) ===\n");
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }
    int movEsquerda = 0;
    while (movEsquerda < casasEsquerda) {
        printf("Esquerda\n");
        movEsquerda++;
    }

    return 0;
}

