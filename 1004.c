#include <stdio.h>
 
int main() {
 
    long long number_1, number_2, PROD;
    
    scanf("%lld %lld", &number_1, &number_2);
    
    PROD = number_1 * number_2;
    
    printf("PROD = %lld\n", PROD);
 
    return 0;
}