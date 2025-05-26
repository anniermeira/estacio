#include <stdio.h>
#include <string.h>

#define TAM_TAB 10
#define TAM_HAB 5

//FUNÇÃO PARA INICIAR O TABULEIRO COM ÁGUA = 0 E NAVIOS = 3
void inicializarTabuleiro(int tabuleiro[TAM_TAB][TAM_TAB]) {
    for (int i = 0; i < TAM_TAB; i++) {
        for (int j = 0; j < TAM_TAB; j++) {
            tabuleiro[i][j] = 0; //ÁGUA
        }
    }

    //EXEMPLO DE NAVIOS FIXOS
    tabuleiro[2][2] = 3;
    tabuleiro[4][4] = 3;
    tabuleiro[6][6] = 3;
}

//EXIBIR TABULEIRO COM CARACTERIS SIMBÓLICOS
void exibirTabuleiro(int tabuleiro[TAM_TAB][TAM_TAB]) {
    for (int i = 0; i < TAM_TAB; i++) {
        for (int j = 0; j < TAM_TAB; j++) {
            if (tabuleiro[i][j] == 0) printf("~ ");     //ÁGUA
            else if (tabuleiro[i][j] == 3) printf("N "); //NAVIO
            else if (tabuleiro[i][j] == 5) printf("* "); //HABILIDADE
            else printf("? "); //QUALQUER OUTRA SITUAÇÃO
        }
        printf("\n");
    }
}

//CRIA HABILIDADE CONE (forma de pirâmide invertida)
void criarCone(int cone[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            cone[i][j] = (j >= TAM_HAB / 2 - i && j <= TAM_HAB / 2 + i) ? 1 : 0;
        }
    }
}

//CRIA HABILIDADE CRUZ
void criarCruz(int cruz[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            cruz[i][j] = (i == TAM_HAB / 2 || j == TAM_HAB / 2) ? 1 : 0;
        }
    }
}

//CRIA HABILIDADE OCTAEDRO (losango)
void criarOctaedro(int oct[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            oct[i][j] = (abs(i - TAM_HAB / 2) + abs(j - TAM_HAB / 2) <= TAM_HAB / 2) ? 1 : 0;
        }
    }
}

//APLICA MATRIZ DE HABILIDADE NO TABULEIRO (linhaOrigem, colOrigem)
void aplicarHabilidade(int tabuleiro[TAM_TAB][TAM_TAB], int habilidade[TAM_HAB][TAM_HAB], int linhaOrigem, int colOrigem) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (habilidade[i][j] == 1) {
                int linhaTab = linhaOrigem - TAM_HAB / 2 + i;
                int colTab = colOrigem - TAM_HAB / 2 + j;

                if (linhaTab >= 0 && linhaTab < TAM_TAB && colTab >= 0 && colTab < TAM_TAB) {
                    if (tabuleiro[linhaTab][colTab] == 0) {
                        tabuleiro[linhaTab][colTab] = 5; //MARCA COMO ÁREA DE HABILIDADE
                    }
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAM_TAB][TAM_TAB];
    int cone[TAM_HAB][TAM_HAB];
    int cruz[TAM_HAB][TAM_HAB];
    int octaedro[TAM_HAB][TAM_HAB];

    inicializarTabuleiro(tabuleiro);
    criarCone(cone);
    criarCruz(cruz);
    criarOctaedro(octaedro);

    //APLICA HABILIDADE EM OUTRA POSIÇÃO
    aplicarHabilidade(tabuleiro, cone, 2, 5);       //CONE (2,5)
    aplicarHabilidade(tabuleiro, cruz, 5, 5);       //CRUZ (5,5)
    aplicarHabilidade(tabuleiro, octaedro, 7, 2);   //OCTAEDRO (7,2)

    //MOSTRA TABULEIRO
    printf("Tabuleiro com habilidades aplicadas:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
