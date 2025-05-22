#include <stdio.h>

int main() {
    const int TAMANHO_TABULEIRO = 10;   //TAMANHO DO TABULEIRO - LINHAS E COLUNAS(10x10)
    const int TAMANHO_NAVIO = 3;        //TAMANHO DO NAVIO
    const int OCUPADO = 3;              //VALOR QUE REPRESENTA UMA PARTE DO NAVIO
    const int AGUA = 0;                 //VALOR QUE REPRESENTA ÁGUA

    //MATRIZ TAMANHO 10x10
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    //TABULEIRO COM ÁGUA = 0
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    //NAVIOS - VETORES UNIDIMENSIONAIS COM 3 POSIÇÕES CADA
    int navioHorizontal[TAMANHO_NAVIO] = {OCUPADO, OCUPADO, OCUPADO};
    int navioVertical[TAMANHO_NAVIO] = {OCUPADO, OCUPADO, OCUPADO};

    //COORDENADAS DEFINIDAS DIRETAMENTE NO CÓDIGO
    int linhaNavioHorizontal = 2;    //LINHA - NAVIO HORIZONTAL
    int colunaNavioHorizontal = 4;   //COLUNA - NAVIO HORIZONTAL

    int linhaNavioVertical = 6;      //LINHA - NAVIO VERTICAL
    int colunaNavioVertical = 1;     //LINHA - NAVIO VERTICAL

    //VERIFICAÇÃO - NAVIO HORIZONTAL CABE NO TABULEIRO?
    if (colunaNavioHorizontal + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = navioHorizontal[i];
        }
    } else {
        printf("Erro: Navio horizontal não cabe no tabuleiro nas coordenadas especificadas.\n");
        return 1; 

    //VERIFICAÇÃO - NAVIO HORIZONTAL CABE NO TABULEIRO?
    if (linhaNavioVertical + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        //ANALISA SE SOBREPÕEM O NAVIO HORIZONTAL
        int sobreposicao = 0;  //VARIAVEL PARA SINALIZAR SOBREPOSIÇÃO
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linhaNavioVertical + i][colunaNavioVertical] == OCUPADO) {
                sobreposicao = 1;
                break;
            }
        }

        if (sobreposicao) {
            printf("Erro: Os navios se sobrepõem.\n");
            return 1;
        }

        //POSICIONAMENTO DO NAVIO VERTICAL
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = navioVertical[i];
        }
    } else {
        printf("Erro: Navio vertical não cabe no tabuleiro nas coordenadas especificadas.\n");
        return 1;
    }

    //MOSTRA O TABULEIRO
    printf("Tabuleiro de Batalha Naval:\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); //QUEBRA DE LINHA APÓS O PREENCHIMENTO DAS 10 CASAS DA LINHA
    }

    return 0;
}