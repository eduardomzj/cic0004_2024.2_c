#include <stdio.h>

void encher(int array[5]){
    for(int i=0; i<5; i++){
        scanf("%d", &array[i]);
    }
}

char comparar(int a[5], int b[5]){
    for(int i=0; i<5; i++){
        if(a[i]==b[i]) return 'N';
    }
    return 'Y';
}

int main(){
    int maquina_1[5], maquina_2[5];
    
    encher(maquina_1);
    encher(maquina_2);
    
    char resultado = comparar(maquina_1, maquina_2);
    printf("%c\n", resultado);
    
    return 0;
}