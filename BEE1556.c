// 725239 - 111996 - Edilson Junior
// 642261 - 114069 - Guilherme Fusco Bertogna
// 639854 - 113629 - Isaac Paes Rasxid
// 639422 - 113059 - João Lucas Lima
// 646215 - 113661 - Nicolas Villela Da Silva
// 640624 - 110558 - Rafael Richard Ribeiro



#include <stdio.h>

int height[231];

int main() {
    int n, nc, h;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &nc);
        for (int i = 0; i < nc; i++) {
            scanf("%d", &h);
            height[h]++;
        }
        int first = 1;
        for (int i = 20; i <= 230; i++) {
            while (height[i]--) {
                if (first) {
                    first = 0;
                } else {
                    printf(" ");
                }
                printf("%d", i);
            }
        }
        printf("\n");
        for (int i = 20; i <= 230; i++) {
            height[i] = 0;
        }
    }
    return 0;
}
