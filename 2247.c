#include <stdio.h>

int main() {
    int N, i = 1; 
    
    while (scanf("%d", &N) && N != 0) {
        printf("Teste %d\n", i++); 
        
        int diferenca = 0; 

        for (int j = 0; j < N; j++) {
            int J, Z;
            scanf("%d %d", &J, &Z);
            diferenca += J - Z;
            printf("%d\n", diferenca); 
        }
        
        printf("\n"); 
    }
    
    return 0;
}
