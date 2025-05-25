#include <stdio.h>

#define TAMANHO 10      //TAMANHO DO TABULEIRO 10X10
#define NAVIO 3         //VALOR QUE REPRESENTA PARTE DO NAVIO
#define TAM_NAVIO 3     //TAMANHO FIXO DOS NAVIOS

//EXIBE O TABULEIRO
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("   ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d ", i); //CABEÇALHO DAS COLUNAS
    }
    printf("\n");

    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d ", i); //ÍNDICE DA LINHAS
        for (int j = 0; j < TAMANHO; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

//VERIFICA SE É POSSÍVEL POSICIONAR O NAVIO E SE HÁ SOBREPOSEÇÃO
int podePosicionar(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, char direcao) {
    for (int i = 0; i < TAM_NAVIO; i++) {
        int l = linha, c = coluna;

        if (direcao == 'H') c += i;                 //HORIZONTAL
        else if (direcao == 'V') l += i;            //VERTICAL
        else if (direcao == 'D') { l += i; c += i; }  //DIAGONAL ↘
        else if (direcao == 'E') { l += i; c -= i; }  //DIAGONAL ↙

        if (l >= TAMANHO || c >= TAMANHO || c < 0)
            return 0;

        if (tabuleiro[l][c] == NAVIO)
            return 0;
    }
    return 1;
}

//POSICIONA O NAVIO NA MATRIZ
void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, char direcao) {
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (direcao == 'H')
            tabuleiro[linha][coluna + i] = NAVIO;
        else if (direcao == 'V')
            tabuleiro[linha + i][coluna] = NAVIO;
        else if (direcao == 'D')
            tabuleiro[linha + i][coluna + i] = NAVIO;
        else if (direcao == 'E')
            tabuleiro[linha + i][coluna - i] = NAVIO;
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    //CORDENADAS E DIREÇÕES DOS NAVIOS
    struct {
        int linha;
        int coluna;
        char direcao;
    } navios[4] = {
        {2, 1, 'H'}, //HORIZONTAL
        {5, 6, 'V'}, //VERTICAL
        {0, 0, 'D'}, //DIAGONAL ↘
        {1, 8, 'E'}  //DIAGONAL ↙
    };

    //TENTA POSICIONAR OS QUATRO NAVIOS
    for (int i = 0; i < 4; i++) {
        if (podePosicionar(tabuleiro, navios[i].linha, navios[i].coluna, navios[i].direcao)) {
            posicionarNavio(tabuleiro, navios[i].linha, navios[i].coluna, navios[i].direcao);
        } else {
            printf("Erro ao posicionar navio %d!\n", i + 1);
        }
    }
    printf("\n--- TABULEIRO COM NAVIOS DIAGONAIS ---\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
