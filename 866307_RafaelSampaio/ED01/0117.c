#include <stdio.h>
#include <math.h>

void atividade7() {
    
float lado, lado_aumentado, volume;

    printf("Me de o valor do lado do cubo: ");
    scanf("%f", &lado);

    lado_aumentado = 4 * lado;
    volume = pow(lado_aumentado, 3);

    printf("O volume do cubo com quatro vezes a medida do lado e: %.2f\n", volume);
}

int main() {
    
    atividade7();
    return 0;
}