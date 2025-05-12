#include <stdio.h>

// --------------------- TORRE - Recursividade ---------------------
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// --------------------- RAINHA - Recursividade ---------------------
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// --------------------- BISPO - Recursividade + Loops Aninhados ---------------------
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return;

    for (int i = 1; i <= horizontal; i++) {
        printf("Cima Direita\n");
    }

    moverBispo(vertical - 1, horizontal); // Chamada recursiva para simular o movimento "subindo"
}

// --------------------- CAVALO - Loops Aninhados com múltiplas variáveis ---------------------
void moverCavalo() {
    int movimentos = 1;  // Número de movimentos em "L" (pode ser aumentado)
    int passoVertical = 2;
    int passoHorizontal = 1;

    printf("Movimento do Cavalo:\n");

    for (int m = 0; m < movimentos; m++) {
        int i, j;

        // Movimento para cima (2 casas)
        for (i = 1; i <= passoVertical; i++) {
            if (i == 2) {
                // Continua o movimento normalmente
                printf("Cima\n");
            } else {
                printf("Cima\n");
                continue; // Vai para o próximo passo sem verificar nada
            }
        }

        // Movimento para direita (1 casa)
        for (j = 1; j <= passoHorizontal; j++) {
            if (j > 1) {
                break; // Nunca deve acontecer, mas demonstra controle de fluxo
            }
            printf("Direita\n");
        }
    }

    printf("\n");
}

// --------------------- FUNÇÃO PRINCIPAL ---------------------
int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispoVertical = 5;  // Número de vezes que o bispo sobe
    int casasBispoHorizontal = 1;  // Em cada subida, anda 1 casa para a direita (diagonal)
    int casasRainha = 8;

    // --------------------- TORRE ---------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // --------------------- BISPO ---------------------
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);
    printf("\n");

    // --------------------- RAINHA ---------------------
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // --------------------- CAVALO ---------------------
    moverCavalo();

    return 0;
}
