#include <stdio.h>

int atividade5 (void) {
    
float base, altura, area;

    printf("Me de o valor da base do triangulo: ");
    scanf("%f", &base);

    printf("Me de o valor da altura do triangulo: ");
    scanf("%f", &altura);

float altura_dobrada = 2 * altura;
    area = (base * altura_dobrada) / 2;

    printf("A area do triangulo com o dobro da altura e: %.2f\n", area);

    return;
}

int main (){
    atividade5();

    return 0;
}