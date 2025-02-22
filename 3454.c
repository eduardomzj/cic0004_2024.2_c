#include <stdio.h>
#include <string.h>

//Alice in Noughts and Crosses Wonderland

void retorna_ganhador(char a[4]){
    
    if (strcmp(a, "XXO") == 0 || strcmp(a, "OXX") == 0) {
        printf("Alice\n");
    } 
    else if (strcmp(a, "XOX") == 0) {
        printf("*\n");
    } 
    else {
        printf("?\n");
    }
    
}

int main()
{
    char jogo[4];
    
    scanf("%s", jogo);
    jogo[4] = '\0';
    
    retorna_ganhador(jogo);

    return 0;
}
