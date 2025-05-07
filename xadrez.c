#include <stdio.h>

int main() {
    // Definição das variáveis para a quantidade de casas de movimento
    int casasTorre = 5;   // Torre move 5 casas para a direita
    int casasBispo = 5;   // Bispo move 5 casas na diagonal (cima e direita)
    int casasRainha = 8;  // Rainha move 8 casas para a esquerda

    int i; // Variável de controle dos laços

    // --------------------- Movimento da TORRE ---------------------
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --------------------- Movimento do BISPO ---------------------
    printf("Movimento do Bispo:\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // --------------------- Movimento da RAINHA ---------------------
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);
    printf("\n");

    // --------------------- Movimento do CAVALO ---------------------
    // O cavalo se move 2 casas para baixo, depois 1 para a esquerda (formando um L).
    // Usamos um loop for externo e um loop while interno para representar isso.

    printf("Movimento do Cavalo:\n");

    int passosBaixo = 2;     // Número de passos para baixo
    int passosEsquerda = 1;  // Número de passos para esquerda
    int j;                   // Contador interno para o while

    // Loop for para cada movimento completo em L (poderíamos fazer vários, mas aqui faremos 1 L)
    for (i = 1; i <= 1; i++) {
        // Movimento para baixo (2 casas)
        j = 1;
        while (j <= passosBaixo) {
            printf("Baixo\n");
            j++;
        }

        // Movimento para a esquerda (1 casa)
        printf("Esquerda\n");
    }

    return 0;
}
