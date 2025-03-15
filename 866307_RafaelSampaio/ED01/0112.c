#include <stdio.h>

void atividade2 (double x,double area,double perimetro){

double metade =  x / 2; // 2,5 
    printf("O valor da metade  =  %lf\n", metade);
    area = metade * metade; // 6,25
    printf("O valor da area  =  %lf\n", area);
    perimetro = 4 * metade;
    printf("e seu perimetro = %lf\n", perimetro);


}

int main (){

double x= 0;
double area= 0;
double perimetro= 0;

    printf("Me de um valor para definir o lado do quadrado: \n");
    scanf("%lf", &x);
    getchar();


    atividade2(x,area,perimetro);


return 0;
}