#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);
    
    int array[numero];
    array[numero-1] = 1;
    array[numero-2] = 1;
    
    for(int i = numero - 3; i >= 0; i--){
        array[i] = array[i + 1] + array[i + 2];
    }
    
    for(int i = 0; i < numero; i++) {
        printf("%d", array[i]);
        if(i!=numero-1) putchar(' ');
    }
    printf("\n");

    return 0;
}
