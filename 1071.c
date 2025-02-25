#include <stdio.h>

int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    int soma_impares = 0;
    
    for(int i=Y+1; i<X; i++){
        if(i%2!=0) soma_impares+=i;
    }
    printf("%d\n", soma_impares);

    return 0;
}