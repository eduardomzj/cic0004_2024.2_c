#include <stdio.h>

int main() {
    int X1, Y1, X2, Y2, teste = 1;
    
    while (scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2) && (X1 != 0 || Y1 != 0 || X2 != 0 || Y2 != 0)) {
        int N, cont = 0;
        scanf("%d", &N);
        
        for (int i = 0; i < N; i++) {
            int X, Y;
            scanf("%d%d", &X, &Y);
            
            int minX = (X1 < X2) ? X1 : X2;
            int maxX = (X1 > X2) ? X1 : X2;
            int minY = (Y1 < Y2) ? Y1 : Y2;
            int maxY = (Y1 > Y2) ? Y1 : Y2;

            if (X >= minX && X <= maxX && Y >= minY && Y <= maxY) {
                cont++;
            }
        }
        
        printf("Teste %d\n%d\n", teste++, cont);
    }

    return 0;
}
