#include <stdio.h>

//Recursivo - TORRE: Direita
void moverTorre(int passos) {
    if (passos <= 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

//Recursivo - RAINHA: Esquerda
void moverRainha(int passos) {
    if (passos <= 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

//Recursivo - BISPO: Cima, direita
void moverBispoRecursivo(int passos) {
    if (passos <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(passos - 1);
}

// PRINCIPAIS FUNÇÕES
int main() {
    //TORRE - RECURSIVO
    int passosTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(passosTorre);

    //BISPO - RECURSIVO
    int passosBispo = 5;
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(passosBispo);

    //Movimento do Bispo (Loops Aninhados)
    //FEITO UM LOOP EXTERNO QUE FAZ MOVIMENTOS VERTICAIS (CIMA)
    //FEITO UM LOOP INTERNO QUE FAZ MOVIMENTOS HORIZONTAIS (DIREITA)
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    int passosVertical = 5;
    int passosHorizontal = 1;  // 1 passo para a direita a cada passo na vertical
    for (int v = 0; v < passosVertical; v++) {
        for (int h = 0; h < passosHorizontal; h++) {
            printf("Direita ");
        }
        printf("Cima\n");
    }

    //RAINHA - RECURSIVO
    int passosRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(passosRainha);

    //CAVALO - LOOPS COMPLEXOS
    //"L" = DUAS CASAS PARA CIMA + UMA CASA PARA A DIREITA
    printf("\nMovimento do Cavalo:\n");

    int movimentosCavalo = 1; // número de movimentos "L"
    for (int m = 0; m < movimentosCavalo; m++) {
        int casasVerticais = 0;
        int casasHorizontais = 0;

        //MOVIMENTO VERTICAL - DUAS CASAS PARA CIMA
        for (int i = 0; i < 3; i++) {
            if (i == 2) break; //BREAK PARA PARAR NAS DUAS CASAS
            printf("Cima\n");
            casasVerticais++;

            //CONDIÇÃO ESPECIAL SE POR ALGUM MOTIVO O MOVIMENTO VERTICAL FALHAR
            if (casasVerticais > 2) {
                printf("Erro no movimento vertical\n");
                break;
            }
        }

        //MOVIMENTO HORIZONTAL - UMA CASA PARA A DIREITA
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                printf("Direita\n");
                casasHorizontais++;
            } else {
                continue; //IGNORA QUALQUER INTERÇÃO EXTRA
            }
        }
    }
    
    
    return 0;
}