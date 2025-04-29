#include <stdio.h>

int main() {
    // Definição das variáveis para a quantidade de casas de movimento
    int casasTorre = 5;   // Torre move 5 casas para a direita
    int casasBispo = 5;   // Bispo move 5 casas na diagonal (cima e direita)
    int casasRainha = 8;  // Rainha move 8 casas para a esquerda

    int i; // Variável de controle dos laços

    // Movimentação da Torre usando 'for'
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação do Bispo usando 'while'
    printf("Movimento do Bispo:\n");
    i = 1; // Resetando o contador
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // Movimentação da Rainha usando 'do-while'
    printf("Movimento da Rainha:\n");
    i = 1; // Resetando o contador
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0;
}
