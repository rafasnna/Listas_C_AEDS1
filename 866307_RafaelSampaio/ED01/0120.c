#include <stdio.h>
#include <math.h>

#define M_PI 3.14

void atividade10() {

float raio, raio_reduzido, volume;

    printf("Me de o valor do raio da esfera: ");
    scanf("%f", &raio);

    raio_reduzido = (5.0 / 8.0) * raio;
    volume = (4.0 / 3.0) * M_PI * pow(raio_reduzido, 3);

    printf("O volume da esfera com cinco oitavos do raio e: %.2f\n", volume);
}

int main() {

    atividade10();
    return 0;
}