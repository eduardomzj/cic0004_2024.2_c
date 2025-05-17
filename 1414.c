#include <stdio.h>

typedef struct {
    char nome[101];
    int pontos;
} Time;

int main() {
    Time times[200];
    int T, N;

    while (1) {
        scanf("%d %d", &T, &N);
        if (T == 0 && N == 0) break;

        int soma_pontos = 0;

        for (int i = 0; i < T; i++) {
            scanf("%s %d", times[i].nome, &times[i].pontos);
            soma_pontos += times[i].pontos;
        }

        int pontos_de_empates = 3 * N - soma_pontos;

        printf("%d\n", pontos_de_empates);
    }

    return 0;
}
