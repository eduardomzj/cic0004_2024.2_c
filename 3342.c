#include <stdio.h>

int main()
{
    int n; // N X N chessboard models
    int whites, blacks;
    
    scanf("%d", &n);
    
    if(n%2==0){
        whites = blacks = (n*n)/2;
        printf("%d casas brancas e %d casas pretas\n", whites, blacks);
    }
    else{
        blacks = (n*n - 1)/2;
        whites = blacks + 1;
        printf("%d casas brancas e %d casas pretas\n", whites, blacks);
    }
    
    return 0;
}