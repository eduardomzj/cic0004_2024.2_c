#include <stdio.h>

//inspired by: https://github.com/potigol/beecrowd/blob/master/src/3000/3084.poti

int main() {
    int angulos[2];
    while (scanf("%d %d", &angulos[0], &angulos[1]) != EOF) {
        int hora = angulos[0] / 30;
        int minuto = angulos[1] / 6;
        printf("%02d:%02d\n", hora, minuto);
    }
    return 0;
}
