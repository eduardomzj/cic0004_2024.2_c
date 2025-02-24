#include <stdio.h>

//Inseto

typedef long long ll;

int main()
{
    int C;
    scanf("%d", &C);
    
    for(int i=0; i<C; i++){
        ll N;
        scanf("%lld", &N);
        (N>8000)? printf("Mais de 8000!\n") : printf("Inseto!\n");
    }

    return 0;
}