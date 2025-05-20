#include <stdio.h>
 
int main() {
    int i = 0;
   
    while (i <= 10) {
        if(i % 2 == 0){
//podemos colocar a condição (i % 2 != 0) para mostrar os numeros impares
            printf("O número %d é par! \n", i);
//caso a alteração seja feita, lembre de alterar a imformação no printf
        }
        i++;
    }
   
    return 0;
}