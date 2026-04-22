#include <stdio.h>
#include <stdlib.h>

int main() {
    float tamanho_mb, velocidade_mbps;
    float tamanho_mbits, tempo_seg, tempo_min;

    int min_inteiros;
    float segundos_restantes;

    printf("=== Calculadora de Tempo de Download ===\n");
    printf("Tamanho do arquivo (MB): ");
    scanf("%f", &tamanho_mb);
    printf("Velocidade do link (Mbps): ");
    scanf("%f", &velocidade_mbps);

    tamanho_mbits = tamanho_mb * 8;
    tempo_seg = tamanho_mbits / velocidade_mbps;
    tempo_min = tempo_seg / 60;

    min_inteiros = (int)tempo_min; 

    segundos_restantes = (tempo_min - min_inteiros) * 60;

    printf("\nTempo aproximado de download:\n");
    printf("  Total em segundos: %.2f\n", tempo_seg);
    printf("  Tempo formatado:   %d min e %.0f segundos\n", min_inteiros, segundos_restantes);	

    system("pause");
    return 0;
}
