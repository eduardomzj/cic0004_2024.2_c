#include <stdio.h>
#include <string.h>
 
int main() {
 
    char nomes[100][21];
    
    int alunos, sorteado;
    scanf("%d %d", &alunos, &sorteado);
    
    for(int i = 0; i<alunos; i++){
        scanf("%s", nomes[i]);
    }
    
    char temp[21];
    for(int i=0; i<alunos-1; i++){
        for(int j=i + 1; j<alunos; j++){
            if(strcmp(nomes[i], nomes[j])>0){
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }
    
    sorteado--;
    
    printf("%s\n", nomes[sorteado]);
 
    return 0;
}