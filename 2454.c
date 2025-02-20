#include <stdio.h>

//fliper

int main()
{
    int P, R;
    scanf("%d %d", &P, &R);
    
    (P==0) ? printf("C\n") : ((R==0) ? printf("B\n") : printf("A\n"));

    return 0;
}