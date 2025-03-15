#include <stdio.h>
#include <math.h>

void atividade8() {

float comprimento, largura, altura, volume;
float comprimento_aumentado, largura_aumentada, altura_aumentada;

    printf("Me de o valor do comprimento do paralelepipedo: ");
    scanf("%f", &comprimento);

    printf("Me de o valor da largura do paralelepipedo: ");
    scanf("%f", &largura);

    printf("Me de o valor da altura do paralelepipedo: ");
    scanf("%f", &altura);

    comprimento_aumentado = 5 * comprimento;
    largura_aumentada = 5 * largura;
    altura_aumentada = 5 * altura;

    volume = comprimento_aumentado * largura_aumentada * altura_aumentada;

    printf("O volume do paralelepipedo com cinco vezes as medidas e: %.2f\n", volume);
}

int main() {
    
    atividade8();
    return 0;
}