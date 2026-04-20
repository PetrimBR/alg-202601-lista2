#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c, maior, meio, menor;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    if (a >= b && a >= c)      maior = a;
    else if (b >= a && b >= c) maior = b;
    else                       maior = c;

    if (a <= b && a <= c)      menor = a;
    else if (b <= a && b <= c) menor = b;
    else                       menor = c;

    meio = a + b + c - maior - menor;

    printf("Ordem decrescente: %.2f, %.2f, %.2f\n",
           maior, meio, menor);

	system("pause");
    return 0;
}
