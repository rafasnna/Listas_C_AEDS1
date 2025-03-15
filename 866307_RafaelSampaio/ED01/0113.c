#include <stdio.h>

int atividade3 (){
    int x, y, area;

    printf("Me de um valor inteiro(x): \n");
    scanf ("%d", &x);//lado x
    getchar();

    printf("\n");

    printf("Me de outro valor inteiro (y): \n");
    scanf ("%d", &y);//lado y 
    getchar();

    printf("\n");
    printf("calculando...\n pressione <enter> para finalizar.");
    getchar();

    int x2 = 2*x;
    int y2 = 2*y;
    area = (x2 * y2) / 2;

    printf("\nOs lados do triangulo sao %d e %d \n", x, y);
    printf("A area com valores aumentados em duas vezes sao: %d \n", area);

    return area;
}

int main (){
    int area = atividade3();
    return 0;
}