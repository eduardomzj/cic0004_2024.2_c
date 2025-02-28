#include <stdio.h>

#define MAX_N 200000

int main(){
    int quantidade_predios;
    scanf("%d", &quantidade_predios);

    int andares[MAX_N];
    for(int i = 0; i < quantidade_predios; i++){
        scanf("%d", &andares[i]);
    }

    int maior_distancia = 0;
    int melhor_esquerda = andares[0] - 0;

    for(int j = 1; j < quantidade_predios; j++){
        int distancia_atual = andares[j] + j + melhor_esquerda;
        if(distancia_atual > maior_distancia){
            maior_distancia = distancia_atual;
        }

        if(andares[j] - j > melhor_esquerda){
            melhor_esquerda = andares[j] - j;
        }
    }

    printf("%d\n", maior_distancia);
    
    return 0;
}
