#include <stdio.h>
 
int main() {
 
    int L, D, K, P; // road length, distance between tolls, cost per kilometer,  toll free
    
    scanf("%d %d", &L, &D);
    scanf("%d %d", &K, &P);
    
    int total_cost = L*K + (L/D)*P;
    
    printf("%d\n", total_cost);
 
    return 0;
}