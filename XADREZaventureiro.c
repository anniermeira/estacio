#include <stdio.h>

int main() {
    //LOOP EM FOR: MOVIMENTO DA TORRE
    int torre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < torre; i++) {
        printf("Direita\n");
    }

    //LOOP EM WHILE: MOVIMENTO BISPO
    int bispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < bispo) {
        printf("Cima, direita\n");
        contadorBispo++;
    }

    //LOOP EM DO-WHILE: MOVIMENTO RAINHA
    int rainha = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < rainha);

    //LOOP EM FOR + WHILE: MOVIMENTO DO CAVALO
    int cavalo = 1; // AQUI POSSO ALTERAR QUANTAS VEZES VOU MOVIMENTAR O CAVALO EM L
    int i;

    printf("\nMovimento do Cavalo:\n");

    for (i = 0; i < cavalo; i++) {
        // DUAS CASAS PARA BAIXO
        int passosParaBaixo = 0;
        while (passosParaBaixo < 2) {
            printf("Baixo\n");
            passosParaBaixo++;
        }
        //UMA CASA PRA ESQUERDA
        printf("Esquerda\n");
    }

    return 0;
}
