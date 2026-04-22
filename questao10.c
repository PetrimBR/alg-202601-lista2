#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int fat = 1;
    int i;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &n);

    for(i = n; i > 0; i--) {
        fat = fat * i;
    }

    printf("O fatorial de %d e: %d\n", n, fat);

    system("pause");
    return 0;
}
