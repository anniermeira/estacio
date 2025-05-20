#include <stdio.h>
int main() {
    //LOOP EM FOR: MOVIMENTO DA TORRE
    int torre;

    printf("Informe quantas casa a TORRE irá andar: ");
    scanf("%d", &torre);
    printf("Movimento da Torre\n");
    for (int i = 0; i < torre; i++) {
        printf("Direita\n");
    }

    //LOOP EM WHILE: MOVIMENTO BISPO
    int bispo;
    int contadorBispo = 0;

    printf("\nInforme quantas casas o BISPO irá andar: ");
    scanf("%d", &bispo);
    printf("Movimento do Bispo\n");
    while (contadorBispo < bispo) {
        printf("Cima, direita\n");
        contadorBispo++;
    }

    //LOOP EM DO-WHILE: MOVIMENTO RAINHA
    int rainha;
    int contadorRainha = 0;

    printf("\nInforme quantas casas a RAINHA irá andar: ");
    scanf("%d", &rainha);
    printf("Movimento da Rainha\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < rainha);

    //LOOP EM FOR + WHILE: MOVIMENTO DO CAVALO
    int cavalo;
    int i;

    printf("\nInforme quantas vezes o cavalo irá se movimentar: ");
    scanf("%d", &cavalo);
    printf("Movimento do Cavalo\n");
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