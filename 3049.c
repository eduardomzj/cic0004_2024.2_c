#include <stdio.h>

// half-half = 0, felix = 1, marzia = 2

void winner(int b, int t){
    
    int half_area = (70*160)/2; // rectangle
    
    int felix_area = (b+t)*35; // trapezium
    
    (felix_area==half_area) ? printf("0\n") : ((felix_area>half_area) ? printf("1\n") : printf("2\n"));
}

int main()
{
    int B, T;
    
    scanf("%d %d", &B, &T);
    
    winner(B, T);
    
    return 0;
}