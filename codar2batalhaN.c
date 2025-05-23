#include <stdio.h>

#define LINHAS 5      //POSIBILIDADE DE ALTERAR A QUANTIDADE DE LINHAS DO VETOR
#define COLUNAS 5     //POSIBILIDADE DE ALTERAR A QUANTIDADE DE COLUNAS DO VETOR
 
int main() {
    int matriz [LINHAS][COLUNAS];
    int soma = 0;

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            soma++;
                matriz[i][j] = soma;
                printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}