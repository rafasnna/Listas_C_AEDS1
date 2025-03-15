#include <stdio.h>
#include <math.h>

#define M_PI 3.14


void atividadeE1() {

float area, area_sete_vezes, raio;

    printf("Me de o valor da area da circunferencia: ");
    scanf("%f", &area);

    area_sete_vezes = 7 * area;
    raio = sqrt(area_sete_vezes / M_PI);

    printf("O raio para sete vezes a area e: %.2f\n", raio);
}

int main() {

    atividadeE1();
    return 0;
}