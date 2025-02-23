#include <stdio.h>

//Average 2
 
int main() {
 
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);
    A = A * 2;
    B = B * 3;
    C = C * 5;
    
    float MEDIA = (A + B + C) / 10;
    printf("MEDIA = %.1f\n", MEDIA);
 
    return 0;
}
