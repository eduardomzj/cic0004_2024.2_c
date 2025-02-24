#include <stdio.h>

int main() {
    int D, I, X, F;
    scanf("%d %d %d %d", &D, &I, &X, &F);
    
    int valor = I; 
    int dia_atual = D; 
    
    for (int i = 0; i < F; i++) {
        
        dia_atual++; 
        (dia_atual % 2 == 0) ? (valor += X) : (valor -= X); 
    }
    
    printf("%d\n", valor);
    
    return 0;
}

