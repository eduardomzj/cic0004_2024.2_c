#include <stdio.h>

//Electrical Outlet
 
int main() {
 
    int D, T1, T2, T3, T4;
    scanf("%d%d%d%d", &T1, &T2, &T3, &T4);
    D = T1 + (T2 - 1) + (T3 - 1) + (T4 - 1);
    printf("%d\n", D);
 
    return 0;
}