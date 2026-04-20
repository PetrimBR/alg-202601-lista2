#include <stdio.h>

int main() {
    float tamanho_mb, velocidade_mbps;
    float tamanho_mbits, tempo_seg, tempo_min;

    printf("=== Calculadora de Tempo de Download ===\n");
    printf("Tamanho do arquivo (MB): ");
    scanf("%f", &tamanho_mb);
    printf("Velocidade do link (Mbps): ");
    scanf("%f", &velocidade_mbps);

    tamanho_mbits = tamanho_mb * 8;

    tempo_seg = tamanho_mbits / velocidade_mbps;

    tempo_min = tempo_seg / 60;

    printf("\nTempo aproximado de download:\n");
    printf("  %.2f segundos\n", tempo_seg);
    printf("  %.2f minutos\n", tempo_min);

    return 0;
}
