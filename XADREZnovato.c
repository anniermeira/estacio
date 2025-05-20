#include <stdio.h>

int main() {
    //USANDO FOR - TORRE: 5 casas para a direita
    int torre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < torre; i++) {
        printf("Direita\n");
    }

    //USANDO WHILE - BISPO: 5 casas na diagonal para cima e à direita
    int bispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < bispo) {
        printf("Cima, direita\n");
        contadorBispo++;
    }
    
    //USANDO DO-WHILE - RAINHA: 8 casas para a esquerda
    int rainha = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < rainha);

    return 0;
}