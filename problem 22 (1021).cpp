#include <stdio.h>

int main() {
    double a;
    int i, b;
    double note[12] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    scanf("%lf", &a);
    printf("NOTAS:\n");

    for (i = 0; i < 6; i++) {
        b = a / note[i];
        a = a - (b * note[i]);
        printf("%d nota(s) de R$ %.2lf\n", b, note[i]);
    }
    printf("MOEDAS:\n");
    for (i = 6; i < 12; i++) {
        b = a / note[i];
        a = a - (b * note[i]);
        printf("%d moeda(s) de R$ %.2lf\n", b, note[i]);
    }

    return 0;
}
