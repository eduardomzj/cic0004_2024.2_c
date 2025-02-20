#include <stdio.h>

// distance / (number number of dwarves + 2)

int main()
{
    int N, X;
    scanf("%d %d", &N, &X);
    
    printf("%.2lf\n", X*1.0/(N+2));

    return 0;
}