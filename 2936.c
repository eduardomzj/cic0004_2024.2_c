#include <stdio.h>

// Cassava
 
int main() {
 
    int Cu, Boi, Bo, Ma, Ia;
    scanf("%d%d%d%d%d", &Cu, &Boi, &Bo, &Ma, &Ia);
    int Cassava = Cu * 300 + Boi * 1500 + Bo * 600 + Ma * 1000 + Ia * 150 + 225;
    printf("%d\n", Cassava);
 
    return 0;
}