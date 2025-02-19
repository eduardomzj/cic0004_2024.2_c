#include <stdio.h>

// 5 cards in order : increasingly, decreasingly or otherwise

void ordered (int v[5]){
    
    if(v[0]<v[1] && v[1]<v[2] && v[2]<v[3] && v[3]<v[4]){
        printf("C\n");
    }
    else if(v[0]>v[1] && v[1]>v[2] && v[2]>v[3] && v[3]>v[4]){
        printf("D\n");
    }
    else{
        printf("N\n");
    }
}

int main()
{
    int cards[5];
    
    for(int i=0; i<5; i++){
        scanf("%d", &cards[i]);
    }
    
    ordered(cards);
    
    return 0;
}