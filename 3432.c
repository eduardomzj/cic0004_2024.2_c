#include <stdio.h>

int main(){
    int byte[8] = {0}, verificador = 0;
    
    for(int i=0;i<8; i++){
        scanf("%d", &byte[i]);
        if(byte[i]==9) verificador++;
    }
    (verificador>0) ? printf("F\n") : printf("S\n");

    return 0;
}