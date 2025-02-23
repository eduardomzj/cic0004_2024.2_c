#include <stdio.h>

//Difference
 
int main() {
 
    long long A, B, C, D, DIFERENCA;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    DIFERENCA = (A * B - C * D);
    printf("DIFERENCA = %lld\n", DIFERENCA);
 
    return 0;
}