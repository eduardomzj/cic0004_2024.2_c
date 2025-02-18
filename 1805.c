#include <stdio.h>

typedef long long ll;
 
int main() {
 
    ll number_1, number_2, natural_sum;
    
    scanf("%lld %lld", &number_1, &number_2);
    
    // +1 include the number_1 in the range
    
    natural_sum = (number_1 + number_2) * (number_2 - number_1 + 1)/2; 
    
    printf("%lld\n", natural_sum);
 
    return 0;
}