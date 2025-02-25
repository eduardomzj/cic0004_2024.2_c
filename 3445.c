#include <stdio.h>

int main() {
    int N, em_casa, no_trabalho;
    scanf("%d%d%d", &N, &em_casa, &no_trabalho);
    
    for(int i=0; i<N; i++){
        char casa, trabalho;
        scanf("%c %c", &casa, &trabalho);
        
        if(casa=='Y' && em_casa>0){
            printf("Y ");
            em_casa--;
            no_trabalho++;
        } else printf("N ");
        
        if(trabalho=='Y' && no_trabalho>0){
            printf("Y\n");
            no_trabalho--;
            em_casa++;
        } else printf("N\n");
        
    }
    
    return 0;
}
