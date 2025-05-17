#include <stdio.h>

int main() {
    int N, K;

    scanf("%d %d", &N, &K);

    while (N != 0 && K != 0) {
        int vetor[101] = {0};
        int pergunta, frequentes = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &pergunta);
            vetor[pergunta]++;
        }

        for (int i = 1; i <= 100; i++) {
            if (vetor[i] >= K) {
                frequentes++;
            }
        }

        printf("%d\n", frequentes);
        scanf("%d %d", &N, &K);
    }

    return 0;
}
