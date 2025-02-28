#include <stdio.h>

void ordem_decrescente(int a[101], int b){
    for(int i=0; i<b; i++){
        for(int j=0; j<b; j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int tentativas;
    scanf("%d", &tentativas);
    
    for(int i=0; i<tentativas; i++){
        int numero;
        scanf("%d", &numero);
        
        int notas[numero], notas_ordenadas[numero];
        
        for(int j=0; j<numero; j++){
            scanf("%d", &notas[j]);
            notas_ordenadas[j] = notas[j];
        } 
        
        ordem_decrescente(notas_ordenadas, numero);
        
        int lugar_certo = 0;
        
        for(int cont=0; cont<numero; cont++){
            if(notas_ordenadas[cont]==notas[cont]) lugar_certo++;
        }
        printf("%d\n", lugar_certo);
    }

    return 0;
}
