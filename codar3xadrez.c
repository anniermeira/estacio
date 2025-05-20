#include <stdio.h>
 
void recursive(int numero) {
    if (numero > 0) {
        //para imprimir na ordem decrescente, nesse caso é necessário se atentar a ordem dos fatores
        //printf("%d \n", numero) - com o printf antes ele imprime do maior para o menor
        recursive(numero - 1);
        printf("%d \n", numero); //já com o printf em baixo, ele imprime de forma crescente, pois o 1 por exemplo foi o ultimo valor a ser calculado
    }
}
 
int main() {
    int quantidade = 10;

    printf("Contagem regressiva:\n");
    recursive(quantidade);

    return 0;
}