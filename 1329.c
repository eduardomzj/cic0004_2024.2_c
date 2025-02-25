#include <stdio.h>

int main(){
    int N, coin = 0, mary = 0, john = 0;
    
    while(scanf("%d", &N) && N!=0){
        
        for(int i=0; i<N; i++){
            scanf("%d", &coin);
            if(coin==0) mary++;
            if(coin==1) john++;
        }
        printf("Mary won %d times and John won %d times\n", mary, john);
        mary = 0; john = 0;
    }

    return 0;
}