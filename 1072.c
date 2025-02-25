#include <stdio.h>

int main(){
    int N, in = 0, out = 0;
    scanf("%d", &N);
    
    while(N--){
        int number;
        scanf("%d", &number);
        (number>=10 && number<=20) ? in++ : out++;
    }
    
    printf("%d in\n%d out\n", in, out);

    return 0;
}