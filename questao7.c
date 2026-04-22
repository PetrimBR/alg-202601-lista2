#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secreto, tentativa, contagem = 0;

    srand(time(NULL));
    secreto = rand() % 101;

    printf("=== Jogo: Adivinhe o numero (0 a 100) ===\n");

    while (1) {
        printf("Sua tentativa: ");
        scanf("%d", &tentativa);
        contagem++;

        if (tentativa == secreto) {
            printf("Acertou! O numero era %d.\n", secreto);
            printf("Total de tentativas: %d\n", contagem);
            break;
        } else if (tentativa < secreto) {
            printf("O numero secreto e MAIOR que %d.\n", tentativa);
        } else {
            printf("O numero secreto e MENOR que %d.\n", tentativa);
        }
    }
	system("pause");
    return 0;
}
