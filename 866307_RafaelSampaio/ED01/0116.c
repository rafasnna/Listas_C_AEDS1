#include <stdio.h>
#include <math.h>

void atividade6() {
    
float lado, lado_reduzido, altura, area, perimetro;

    printf("Me de o valor do lado do triangulo equilatero: ");
    scanf("%f", &lado);

lado_reduzido = lado / 3.0;
altura = (sqrt(3) / 2) * lado_reduzido;
area = (sqrt(3) / 4) * pow(lado_reduzido, 2);
    perimetro = 3 * lado_reduzido;

    printf("A altura do triangulo com um terco do tamanho do lado e: %.2f\n", altura);
    printf("A area do triangulo com um terco do tamanho do lado e: %.2f\n", area);
    printf("O perimetro do triangulo com um terco do tamanho do lado e: %.2f\n", perimetro);
}

int main() {
    atividade6();
    return 0;
}