#include <stdio.h>
#include <stdlib.h>

//The Greatest
 
int main() {
 
    long long int a, b, c, maiorab, maiorabc;
    scanf("%lld %lld %lld", &a, &b, &c);
    maiorab = (a + b + abs(a-b)) / 2;
    maiorabc = (maiorab + c + abs(maiorab-c)) / 2;
    printf("%lld eh o maior\n", maiorabc);
    
    return 0;
}