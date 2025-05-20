#include <stdio.h>
 
void recursive(int numero) {
    if (numero > 0) {
        printf("%d \n", numero);
        recursive(numero - 1);
    }
}
 
int main() {
    int quantidade = 10;
    printf("Contagem regressiva:\n");
    recursive(quantidade);
    return 0;
}