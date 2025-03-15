#include <stdio.h>
#include <math.h>

#define M_PI 3.14


void atividade9() {

float raio, raio_aumentado, area_semicirculo;

    printf("Me de o valor do raio do circulo: ");
    scanf("%f", &raio);

    raio_aumentado = 4 * raio;
    area_semicirculo = (M_PI * pow(raio_aumentado, 2)) / 2;

    printf("A area do semicírculo com quatro vezes o raio e: %.2f\n", area_semicirculo);
}

int main() {

    atividade9();
    return 0;
}