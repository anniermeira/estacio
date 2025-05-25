#include <stdio.h>
#include <string.h>

#define TAM_TAB 10
#define TAM_HAB 5

// Função para inicializar o tabuleiro com água (0) e alguns navios (3)
void inicializarTabuleiro(int tabuleiro[TAM_TAB][TAM_TAB]) {
    for (int i = 0; i < TAM_TAB; i++) {
        for (int j = 0; j < TAM_TAB; j++) {
            tabuleiro[i][j] = 0; // Água
        }
    }

    // Exemplos de navios fixos
    tabuleiro[2][2] = 3;
    tabuleiro[4][4] = 3;
    tabuleiro[6][6] = 3;
}

// Exibir o tabuleiro com caracteres simbólicos
void exibirTabuleiro(int tabuleiro[TAM_TAB][TAM_TAB]) {
    for (int i = 0; i < TAM_TAB; i++) {
        for (int j = 0; j < TAM_TAB; j++) {
            if (tabuleiro[i][j] == 0) printf("~ ");     // Água
            else if (tabuleiro[i][j] == 3) printf("N "); // Navio
            else if (tabuleiro[i][j] == 5) printf("* "); // Habilidade
            else printf("? "); // Qualquer outro caso
        }
        printf("\n");
    }
}

// Criar matriz de habilidade: Cone (forma de pirâmide invertida)
void criarCone(int cone[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            cone[i][j] = (j >= TAM_HAB / 2 - i && j <= TAM_HAB / 2 + i) ? 1 : 0;
        }
    }
}

// Criar matriz de habilidade: Cruz
void criarCruz(int cruz[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            cruz[i][j] = (i == TAM_HAB / 2 || j == TAM_HAB / 2) ? 1 : 0;
        }
    }
}

// Criar matriz de habilidade: Octaedro (losango)
void criarOctaedro(int oct[TAM_HAB][TAM_HAB]) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            oct[i][j] = (abs(i - TAM_HAB / 2) + abs(j - TAM_HAB / 2) <= TAM_HAB / 2) ? 1 : 0;
        }
    }
}

// Aplica matriz de habilidade no tabuleiro na posição (linhaOrigem, colOrigem)
void aplicarHabilidade(int tabuleiro[TAM_TAB][TAM_TAB], int habilidade[TAM_HAB][TAM_HAB], int linhaOrigem, int colOrigem) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (habilidade[i][j] == 1) {
                int linhaTab = linhaOrigem - TAM_HAB / 2 + i;
                int colTab = colOrigem - TAM_HAB / 2 + j;

                if (linhaTab >= 0 && linhaTab < TAM_TAB && colTab >= 0 && colTab < TAM_TAB) {
                    if (tabuleiro[linhaTab][colTab] == 0) {
                        tabuleiro[linhaTab][colTab] = 5; // Marca como área de habilidade
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

    // Aplicar habilidades em posições diferentes
    aplicarHabilidade(tabuleiro, cone, 2, 5);       // Cone com origem em (2,5)
    aplicarHabilidade(tabuleiro, cruz, 5, 5);       // Cruz com origem em (5,5)
    aplicarHabilidade(tabuleiro, octaedro, 7, 2);   // Octaedro com origem em (7,2)

    // Exibir tabuleiro final
    printf("Tabuleiro com habilidades aplicadas:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}