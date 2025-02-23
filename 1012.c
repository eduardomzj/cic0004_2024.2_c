#include <stdio.h>

//Area

int main()
{
    double A, B, C, tri, cir, trap, squa, rect;
    scanf("%lf %lf %lf", &A, &B, &C);
    tri = A * C * (0.5);
    cir = 3.14159 * C * C;
    trap = (0.5) * (A + B) * C;
    squa = B * B;
    rect = A * B;
    
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", squa);
    printf("RETANGULO: %.3lf\n", rect);

    return 0;
}