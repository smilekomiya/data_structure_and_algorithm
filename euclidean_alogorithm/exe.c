#include <stdio.h>

int main() {
    int m, n, d;
    printf("1つ目の数：");
    scanf("%d", &m);
    printf("2つ目の数：");
    scanf("%d", &n);
    if (m < n) {
        int tmp = m;
        m = n;
        n = tmp;
    }

    do {
        d = m % n;
        m = n;
        n = d;
    } while (d != 0);

    printf("二つの数の最大公約数は最大公約数は%dです。\n", m);
}