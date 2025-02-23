#include <stdio.h>

//Simple Calculate
 
int main() {
 
    double p1, n1, pr1, p2, n2, pr2, valor;
    scanf("%lf %lf %lf", &p1, &n1, &pr1);
    scanf("%lf %lf %lf", &p2, &n2, &pr2);
    valor = (n1 * pr1) + (n2 * pr2);
    printf("VALOR A PAGAR: R$ %.2lf\n", valor);
 
    return 0;
}