#include <stdio.h>

int main() {
    // =============================
    // MOVIMENTO DA TORRE (usando FOR)
    // =============================
    int casasTorre = 5; // número de casas que a torre vai mover
    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n"); // separação visual

    // =============================
    // MOVIMENTO DO BISPO (usando WHILE)
    // =============================
    int casasBispo = 5; // número de casas que o bispo vai mover
    int i = 1;
    printf("Movimento do Bispo:\n");

    while (i <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    printf("\n");

    // =============================
    // MOVIMENTO DA RAINHA (usando DO-WHILE)
    // =============================
    int casasRainha = 8; // número de casas que a rainha vai mover
    int j = 1;
    printf("Movimento da Rainha:\n");

    do {
        printf("Casa %d: Esquerda\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\n");

    // =============================
    // MOVIMENTO DO CAVALO (usando loops aninhados)
    // =============================
    printf("Movimento do Cavalo:\n");

    int casasBaixo = 2;    // duas casas para baixo
    int casasEsquerda = 1; // uma casa para a esquerda

    // O primeiro loop (for) representa o movimento vertical: 2 casas para baixo
    for (int passoVertical = 1; passoVertical <= casasBaixo; passoVertical++) {
        printf("Casa %d: Baixo\n", passoVertical);

        // Após o segundo movimento para baixo, o cavalo se move uma casa para a esquerda
        if (passoVertical == casasBaixo) {
            int passoHorizontal = 1;

            // Loop while interno controla a casa para a esquerda
            while (passoHorizontal <= casasEsquerda) {
                printf("Casa %d: Esquerda\n", passoVertical + passoHorizontal);
                passoHorizontal++;
            }
        }
    }

    printf("\nMovimentação concluída!\n");

    return 0;
}
