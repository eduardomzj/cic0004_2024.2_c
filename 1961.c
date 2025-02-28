#include <stdio.h>
#include <stdlib.h>

void validador(int p, int n) {
    int array[n];  
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);  
    }

    for(int i = 1; i < n; i++) { 
        if(abs(array[i] - array[i - 1]) > p) { 
            printf("GAME OVER\n");
            return;  
        }
    }

    printf("YOU WIN\n");
}

int main() {
    int P, N;
    scanf("%d %d", &P, &N);
    
    validador(P, N);  

    return 0;
}
