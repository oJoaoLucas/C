#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Time {
int numero;
int pontos;
int gols_feitos;
int gols_sofridos;
int jogos_disputados;
};

int comparar(const void *p1, const void *p2);

int main() {
int instancia = 0;
int primeiro = 1;

while (1) {
    int n;
    int time1, time2, score1, score2;
    int i, jogos_totais;
    struct Time times[101];

    memset(times, 0, sizeof(times));

    scanf("%d", &n);
    if (!n)
        break;

    for (i = 0; i <= n; ++i)
        times[i].numero = i;

    jogos_totais = n * (n - 1) / 2;
    for (i = 0; i < jogos_totais; ++i) {
        scanf("%d%d%d%d", &time1, &score1, &time2, &score2);

        times[time1].gols_feitos += score1;
        times[time1].gols_sofridos += score2;
        times[time1].jogos_disputados += 1;

        times[time2].gols_feitos += score2;
        times[time2].gols_sofridos += score1;
        times[time2].jogos_disputados += 1;

        if (score1 > score2) {
            times[time1].pontos += 2;
            times[time2].pontos += 1;
        } else {
            times[time1].pontos += 1;
            times[time2].pontos += 2;
        }
    }

    qsort(times, 101, sizeof(struct Time), comparar);

    if (!primeiro)
        putchar('\n');
    primeiro = 0;

    printf("Instancia %d\n%d", ++instancia, times[0].numero);
    for (i = 1; i < n; ++i)
        printf(" %d", times[i].numero);
    putchar('\n');
}

return 0;

}

int comparar(const void *p1, const void *p2) {
const struct Time *t1 = (const struct Time *) p1;
const struct Time *t2 = (const struct Time *) p2;

int resultado = t2->pontos - t1->pontos;
if (resultado != 0) {
    return resultado;
}

double media1 = 0.0, media2 = 0.0;
if (t1->gols_sofridos)
    media1 = (double) t1->gols_feitos / t1->gols_sofridos;
else if (t1->jogos_disputados)
    media1 = (double) t1->gols_feitos / t1->jogos_disputados;

if (t2->gols_sofridos)
    media2 = (double) t2->gols_feitos / t2->gols_sofridos;
else if (t2->jogos_disputados)
    media2 = (double) t2->gols_feitos / t2->jogos_disputados;

if (media1 > media2)
    return -1;
if (media1 < media2)
    return 1;

    if (t1->gols_sofridos == t2->gols_sofridos)
    return t1->jogos_disputados - t2 ->jogos_disputados;
    return t2->gols_sofridos -t1->gols_sofridos;
}