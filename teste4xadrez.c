#include <stdio.h>
 
int main() {
    int i = 1;
   
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
    printf("A condição passou a ser falsa, por tanto finaliza! \n");
   
    return 0;
}