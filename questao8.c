#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura, imc;

    printf("=== Calculadora de IMC ===\n");
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);
  
    imc = peso / (altura * altura);

    printf("\nSeu IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Classificacao: Peso normal\n");
    } else if (imc < 30.0) {
        printf("Classificacao: Sobrepeso\n");
    } else if (imc < 35.0) {
        printf("Classificacao: Obesidade grau I\n");
    } else if (imc < 40.0) {
        printf("Classificacao: Obesidade grau II\n");
    } else {
        printf("Classificacao: Obesidade grau III\n");
    }
    system("pause");
    return 0;
}
