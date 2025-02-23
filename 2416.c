#include <stdio.h>

//Corrida
 
int main() {
 
    int C, N, PT;
    scanf("%d%d", &C, &N);
    PT = C % N;
    printf("%d\n", PT);
 
    return 0;
}