#include <stdio.h>
 
int main() {
    int A, R;
    
    while((R = scanf("%d", &A))!=-1){
        if(A%100 == 0){
            printf("%d\n", A/100);
        }
        else{
            printf("%d\n", A/100+1);
        }
        
    }
    
    return 0;
}