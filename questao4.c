#include <stdio.h>

int main() {
    int a, b, r, mmc;
  
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    int x = a, y = b;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    mmc = (x * y) / a;

    printf("MMC de %d e %d = %d\n", x, y, mmc);

    return 0;
}
