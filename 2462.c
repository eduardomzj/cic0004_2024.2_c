#include <stdio.h>

// Flight
// Inspired by = https://github.com/potigol/beecrowd/blob/master/src/2400/2462.poti


int minutos(const char *hora_1, const char *hora_2) {
    int h_1, m_1, h_2, m_2;
    sscanf(hora_1, "%d:%d", &h_1, &m_1);
    sscanf(hora_2, "%d:%d", &h_2, &m_2);

    int minutos_1 = h_1 * 60 + m_1;
    int minutos_2 = h_2 * 60 + m_2;

    int tempo = minutos_2 - minutos_1;
    if (tempo < 0) tempo += 1440;

    return tempo;
}

int main() {
    char pA[6], cB[6], pB[6], cA[6];
    scanf("%s %s %s %s", pA, cB, pB, cA);

    int voo_ida = minutos(pA, cB);
    int voo_volta = minutos(pB, cA);

    int voo_hr = (voo_ida + voo_volta) / 2 - ((voo_ida + voo_volta > 1440) ? 720 : 0);
    int fuso = voo_ida - voo_hr - ((voo_ida - voo_hr > 720) ? 1440 : 0);

    printf("%d %d\n", voo_hr, fuso / 60);

    return 0;
}

