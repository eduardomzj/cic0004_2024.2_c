#include <stdio.h>

// Which Triangle

void ordenador(int a[3]) {
    int temp;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void validez(int a[3]) {
    if (a[2] >= (a[0] + a[1])) {
        printf("Invalido\n");
        return;
    }

    if (a[0] == a[1] && a[1] == a[2]) {
        printf("Valido-Equilatero\nRetangulo: N\n");
    } 
    else if (a[0] != a[1] && a[0] != a[2] && a[1] != a[2]) {
        printf("Valido-Escaleno\nRetangulo: ");
        (a[2] * a[2] == (a[0] * a[0] + a[1] * a[1])) ? printf("S\n") : printf("N\n");
    } 
    else {
        printf("Valido-Isoceles\nRetangulo: ");
        (a[2] * a[2] == (a[0] * a[0] + a[1] * a[1])) ? printf("S\n") : printf("N\n");
    }
}

int main() {
    int lados[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &lados[i]);
    }

    ordenador(lados);
    validez(lados);

    return 0;
}

