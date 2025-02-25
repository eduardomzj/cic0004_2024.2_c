#include <stdio.h>

int main() {
    int N;
    
    while (scanf("%d", &N) && N != 0) {
        int pares = 0, varetas, comprimento;
        
        for (int i = 0; i < N; i++) {
            scanf("%d %d", &comprimento, &varetas);
            pares += varetas / 2;  
        }
        
        printf("%d\n", pares / 2); 
    }
    
    return 0;
}
