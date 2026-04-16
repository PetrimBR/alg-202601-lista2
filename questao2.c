#include <stdio.h>
#include <stdlib.h>

int main(){

    float a, b, c, media;

    printf("Digite o 1º valor: ");
    scanf("%f", &a);
    printf("Digite o 2º valor: ");
    scanf("%f", &b);
    printf("Digite o 3º valor: ");
    scanf("%f", &c);

    media = (a + b + c) / 3.0;

    printf("Média: %.2f\n\n", media);

    system("pause");
    return 0;
}
