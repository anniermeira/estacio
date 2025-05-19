#include <stdio.h>
 
int main() {
    for (int i = 100; i >= 0; i -= 10) {
        printf("%d\n", i);
    }
    printf("A condição passou a ser falsa, por tanto finaliza!");
   
    return 0;
}