#include <stdio.h>

int main() {
    int sec, a, h, s, m;
    scanf("%d", &sec);

    h = sec / 3600;
    a = sec % 3600;
    m = a / 60;
    s = a % 60;

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
