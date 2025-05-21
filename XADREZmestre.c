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
    
    
    return 0;
}