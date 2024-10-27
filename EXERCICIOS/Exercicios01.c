#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "io.h"

// Definindo constantes
#define RAIZ_DE_TRES 1.7320508075688772  // Valor da raiz quadrada de 3
#define PI 3.141592653  // Valor de PI

// Função para calcular a área de um quadrado com lado o dobro do original
void exercicio_0111(void) {
    int lado_original;
    
    // Solicita ao usuário o valor do lado do quadrado
    printf("Digite o valor do lado do quadrado: ");
    scanf("%d", &lado_original);
    
    // Calcula o novo lado como o dobro do original
    int lado_novo = 2 * lado_original;
    
    // Calcula a área do novo quadrado
    int area_novo_quadrado = lado_novo * lado_novo;
    
    // Imprime a área do novo quadrado
    printf("A área do quadrado com lado igual ao dobro do lado original é: %d\n", area_novo_quadrado);
}

// Função para calcular a área e o perímetro de um quadrado com um terço do lado original
void exercicio_0112(void) {
    int lado_original;
    
    // Solicita ao usuário o valor do lado do quadrado
    printf("Digite um valor para o lado do quadrado: ");
    scanf("%i", &lado_original);

    // Calcula o novo lado como um terço do original
    int lado_novo = lado_original / 3;

    // Calcula a área do novo quadrado
    int area_novo_quadrado = lado_novo * lado_novo;

    // Imprime a área do novo quadrado
    printf("Area do novo quadrado com um terco do lado do original: %i", area_novo_quadrado);
    
    // Calcula o perímetro do novo quadrado
    int perimetro = lado_novo * 4;

    // Imprime o perímetro do novo quadrado
    printf("\nPerimetro do novo quadrado com um terco do lado original: %i\n", perimetro);
}

// Função para calcular a área de um retângulo com lados triplicados
void exercicio_0113(void) {
    int lado_menor;
    int lado_maior;
    
    // Solicita ao usuário os valores dos lados do retângulo
    printf("Digite o valor do menor lado do retangulo: ");
    scanf("%d", &lado_menor);

    printf("Digite o valor do maior lado do retangulo: ");
    scanf("%d", &lado_maior);

    // Calcula os novos lados como o triplo dos originais
    int novo_lado_menor = 3 * lado_menor;
    int novo_lado_maior = 3 * lado_maior;

    // Calcula a área do retângulo com os lados triplicados
    int area_retangulo = novo_lado_menor * novo_lado_maior;

    // Imprime a área do retângulo
    printf("Area do retangulo com valores aumentados em 3 vezes: %d", area_retangulo);
}

// Função para calcular a área e o perímetro de um retângulo com lados reduzidos a um sexto
void exercicio_0114(void) {
    int lado_menor, lado_maior;
    
    // Solicita ao usuário os valores dos lados do retângulo
    printf("Digite um valor para o lado menor do retangulo: ");
    scanf("%d", &lado_menor);
    printf("\nDigite um valor para o maior lado do retangulo: ");
    scanf("%d", &lado_maior);

    // Calcula os novos lados como um sexto dos originais
    int novo_ladomenor = lado_menor / 6;
    int novo_ladomaior = lado_maior / 6;

    // Calcula a nova área do retângulo
    int nova_area = novo_ladomenor * novo_ladomaior;

    // Imprime a nova área do retângulo
    printf("A area do retangulo com os lados 1/6 menores que o original sao: %d", nova_area);

    // Calcula o perímetro do retângulo
    int perimetro = 2 * novo_ladomenor + 2 * novo_ladomaior;

    // Imprime o perímetro do retângulo
    printf("\nO perimetro do retangulo com os lados 1/6 menores que o original e : %d", perimetro);
}

// Função para calcular a área de um triângulo com altura reduzida à metade
void exercicio_0115(void) {
    float altura;
    float base;

    // Solicita ao usuário a altura e a base do triângulo
    printf("Digite um valor para a altura do triangulo: \n");
    scanf("%f", &altura);
    printf("Digite um valor para a base do triangulo: \n");
    scanf("%f", &base);

    // Calcula a nova altura como metade da original
    float nova_altura = altura / 2.0;

    // Calcula a área do novo triângulo
    float area_do_triangulo = nova_altura * base / 2.0;

    // Imprime a área do novo triângulo
    printf("A area do novo triangulo com a altura sendo metade do original e: %f\n", area_do_triangulo);
}

// Função para calcular a área, altura e perímetro de um triângulo equilátero com lado multiplicado por 4
void exercicio_0116(void) {
    double lado_original;
    
    // Solicita ao usuário o valor do lado do triângulo equilátero
    printf("Digite um valor para o lado do triangulo equilatero: ");
    scanf("%lf", &lado_original);

    // Calcula o novo lado como quatro vezes o original
    double lado_novo = lado_original * 4.0;

    // Calcula a área do triângulo
    double area_triangulo = (lado_novo * lado_novo) * RAIZ_DE_TRES / 4.0;
    // Calcula a altura do triângulo
    double altura_nova = (lado_novo * RAIZ_DE_TRES) / 2.0;
    // Calcula o perímetro do triângulo
    double perimetro = lado_novo * 3.0;

    // Imprime a área, altura e perímetro do triângulo
    printf("A area do triangulo com o lado 4 vezes maior que o original e de : %lf", area_triangulo);
    printf("\nA altura nova do triangulo com o lado 4 vezes maior que o original e de: %lf", altura_nova);
    printf("\nO perimetro do triangulo com o lado 4 vezes maior que o origianl e de: %lf", perimetro);
}

// Função para calcular o volume de um cubo com lado multiplicado por 7
void exercicio_0117(void) {
    float lado_original;
    
    // Solicita ao usuário o valor do lado do cubo
    printf("Digite um valor para definir o tamanho do lado de um cubo: ");
    scanf("%f", &lado_original);

    // Calcula o novo lado como sete vezes o original
    float lado_novo = lado_original * 7.0;
    // Calcula o volume do cubo
    float volume = lado_novo * lado_novo * lado_novo;

    // Imprime o volume do cubo
    printf("\nO volume do novo cubo com o lado 7 vezes maior que o original e de : %lf", volume);
}

// Função para calcular o volume de um paralelepípedo com dimensões reduzidas a um quinto
void exercicio_0118(void) {
    float comprimento, altura, largura;

    // Solicita ao usuário o comprimento, altura e largura do paralelepípedo
    printf("Digite um valor para o comprimento de um paralelepipedo: ");
    scanf("%f", &comprimento);
    printf("Digite um valor para a altura de um paralelepipedo: ");
    scanf("%f", &altura);
    printf("Digite um valor para a largura de um paralelepipedo: ");
    scanf("%f", &largura);

    // Calcula as novas dimensões como um quinto das originais
    float novo_comprimento = comprimento / 5.0;
    float nova_altura = altura / 5.0;
    float nova_largura = largura / 5.0;

    // Calcula o volume do paralelepípedo com as novas dimensões
    float area = novo_comprimento * nova_altura * nova_largura;

    // Imprime o volume do paralelepípedo
    printf("\nO volume do paralelepipedo com 1/5 das medidas digitadas e de : %f", area);
}

// Função para calcular a área de um semicírculo com raio reduzido a um quarto
void exercicio_0119(void) {
    double raio;
    
    // Solicita ao usuário o valor do raio do círculo
    printf("Digite um valor para um raio de um circulo: ");
    scanf("%lf", &raio);

    // Calcula o novo raio como um quarto do original
    double raio_novo = raio / 4.0;
    // Calcula a área do semicírculo
    double area_do_semicirculo = PI * (raio_novo * raio_novo) / 2.0;

    // Imprime a área do semicírculo
    printf("\nA area do semicirculo com 1/4 do raio digitado e de: %lf", area_do_semicirculo);
}

// Função para calcular o volume de uma esfera com raio reduzido a três quintos
void exercicio_0120(void) {
    double raio;
    
    // Solicita ao usuário o valor do raio da esfera
    printf("Digite um valor para o raio de uma esfera: ");
    scanf("%lf", &raio);

    // Calcula o novo raio como três quintos do original
    double raio_novo = (raio * 3.0) / 5.0;
    // Calcula o volume da esfera
    double volume = 4.0 / 3.0 * PI * (raio_novo * raio_novo * raio_novo);

    // Imprime o volume da esfera
    printf("\nVolume de uma esfera com 3/5 do raio digitado inicialmente: %lf", volume);
}

int main(int argc, char* argv[]) {
    int opcao = 0;

    // Imprime informações iniciais sobre o programa
    printf("%s\n", "Exercicios - Programa = v0.0");
    printf("%s\n", "Autor: Rafael de Sena Sampaio");
    printf("\n");

    // Loop principal do programa
    do {
        // Imprime o menu de opções
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - exercicio 0111");
        printf("\n%s", "2 - exercicio 0112");
        printf("\n%s", "3 - exercicio 0113");
        printf("\n%s", "4 - exercicio 0114");
        printf("\n%s", "5 - exercicio 0115");
        printf("\n%s", "6 - exercicio 0116");
        printf("\n%s", "7 - exercicio 0117");
        printf("\n%s", "8 - exercicio 0118");
        printf("\n%s", "9 - exercicio 0119");
        printf("\n%s", "10 - exercicio 0120");
        printf("\n");
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do teclado
        printf("\n%s%d", "Opcao = ", opcao);

        // Executa a função correspondente à opção selecionada
        switch (opcao) {
            case 0: break; // Termina o programa
            case 1: exercicio_0111(); break;
            case 2: exercicio_0112(); break;
            case 3: exercicio_0113(); break;
            case 4: exercicio_0114(); break;
            case 5: exercicio_0115(); break;
            case 6: exercicio_0116(); break;
            case 7: exercicio_0117(); break;
            case 8: exercicio_0118(); break;
            case 9: exercicio_0119(); break;
            case 10: exercicio_0120(); break;
            default: printf("\nERRO: Opcao invalida.\n"); break;
        } 
    } while (opcao != 0);

    // Mensagem final antes de terminar
    printf("\n\nApertar ENTER para terminar.");
    getchar(); // Aguarda o usuário pressionar ENTER
    return 0;
}
