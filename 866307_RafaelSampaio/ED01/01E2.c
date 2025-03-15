#include <stdio.h>
#include <math.h>


#define M_PI 3.14

void atividadeE2() {

float volume, volume_reduzido, raio, area;

    printf("Me de o valor do volume da esfera: ");
    scanf("%f", &volume);

    volume_reduzido = (3.0 / 5.0) * volume;
    raio = cbrt((3.0 * volume_reduzido) / (4.0 * M_PI));
    area = 4.0 * M_PI * pow(raio, 2);

    printf("O raio para tres quintos do volume e: %.2f\n", raio);
    printf("A area da superficie para tres quintos do volume e: %.2f\n", area);
}

int main() {

    atividadeE2();
    return 0;
}