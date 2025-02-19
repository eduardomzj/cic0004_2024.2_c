#include <stdio.h>

int main() {
    int L, C, X, Y;
    
    // rows, columns, row index, column index
    scanf("%d %d %d %d", &L, &C, &X, &Y);
    
    
    int numero_azulejos = X * C + Y;
    
    
    if (numero_azulejos % 2 == 0) {
        printf("Direita\n");  // Right hand
    } else {
        printf("Esquerda\n"); // Left hand
    }

    return 0;
}