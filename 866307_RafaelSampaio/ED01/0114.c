#include <stdio.h>

int atividade4 (void){
    int x = 0;
    int y = 0;

    printf("Retangulo atividade4\n");

    printf("Me de o valor do lado de um retangulo (X): ");
    scanf("%d", &x);

    printf("Me de o valor do lado de um retangulo (Y): ");
    scanf("%d", &y);

float x_q = x / 4.0;
float y_q = y / 4.0;
 
float area = x_q * y_q;
float perimetro = 2 * (x_q + y_q);

    
    printf("A area do retangulo com lados reduzidos a um quarto e: %.2f\n", area);
    printf("O perimetro do retangulo com lados reduzidos a um quarto e: %.2f\n", perimetro);

    return 0;
}

int main() {
    atividade4();
    return 0;
}