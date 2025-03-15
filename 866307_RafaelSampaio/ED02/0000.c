// Aluno: Rafael Sampaio - 866307


#include <stdio.h>
#include <stdlib.h>
#include "io.h"
#include <math.h>

void atv1(void) {

int x = 0;

    IO_id("866307 - exemplo01");
    x = IO_readint("Entre com um valor inteiro:");

    if ((x >= 0) && (x % 2 == 0)) {
        IO_printf("%s(%d)\n", "Valor par e positivo", x);
    } else {
        if ((x < 0) && (x % 2 != 0)) {
            IO_printf("%s(%d)\n", "Valor impar e negativo", x);
        } else {
            IO_printf("%s(%d)\n", "Valor nao e' nem par positivo, nem impar negativo", x);
        }
    }
    IO_pause("Apertar <enter> para continuar");
}

void atv2(void) {

int x = 0;

    IO_id("866307 - exemplo02");
    x = IO_readint("Entre com um valor inteiro:");

    if ((x < -25) && (x % 2 == 0)) {
        IO_printf("%s(%d)\n", "Valor e' par e menor que -25", x);
    } else {
        if ((x > 25) && (x % 2 != 0)) {
            IO_printf("%s(%d)\n", "Valor impar e maior que 25", x);
        } else {
            IO_printf("%s(%d)\n", "Valor nao entre nos criterios: Impar maior que 25 e Par menor que -25", x);
        }
    }
    IO_pause("Apertar <enter> para continuar");
}

void atv3(void) {

int x = 0;

    IO_id("866307 - exemplo03");
    x = IO_readint("Entre com um valor inteiro:");

    if ((x > 20) && (x < 55)) {
        IO_printf("%s(%d)\n", "Valor dentro do intervalo (20:55)", x);
    } else {
        IO_printf("%s(%d)\n", "Valor fora do intervalo aberto (20:55)", x);
    }
    IO_pause("Apertar <enter> para continuar");
}

void atv4(void) {

int x = 0;

    IO_id("866307 - exemplo04");
    x = IO_readint("Entre com um valor inteiro:");

    if ((x >= 20) && (x <= 55)) {
        IO_printf("%s(%d)\n", "Valor dentro do intervalo [20:55]", x);
    } else {
        IO_printf("%s(%d)\n", "Valor fora do intervalo fechado [20:55]", x);
    }
    IO_pause("Apertar <enter> para continuar");
}

void atv5(void) {

int x = 0;

    IO_id("866307 - exemplo05");
    x = IO_readint("Entre com um valor inteiro:");

    if ((x > 20) && (x <= 30)) {
        IO_printf("%s(%d)\n", "Valor esta dentro da intersecao de [10:30] e (20:40)", x);
    } else {
        if ((x >= 10) && (x <= 30)) {
            IO_printf("%s(%d)\n", "Valor dentro apenas do intervalo [10:30]", x);
        } else {
            if ((x > 20) && (x < 40)) {
                IO_printf("%s(%d)\n", "Valor dentro apenas do intervalo (20:40)", x);
            } else {
                IO_printf("%s(%d)\n", "Nao pertence a nenhum intervalo", x);
            }
        }
    }
    IO_pause("Apertar <enter> para continuar");
}

void atv6(void) {

int a = 0;
int b = 0;

    IO_id("866307 - exemplo06");

    a = IO_readint("Entre com um valor inteiro:");
    b = IO_readint("Entre com um segundo valor inteiro:");

    if ((a % 2 == 0) && (b % 2 != 0)) {
        IO_printf("%s(%d,%d)\n", "O primeiro valor e' par e o segundo e' impar", a, b);
    } else {
        if (a % 2 != 0) {
            IO_printf("%s(%d)\n", "Primeiro valor nao e' par", a);
        } else {
            if (b % 2 == 0) {
                IO_printf("%s(%d)\n", "Segundo valor nao e' impar", b);
            }
        }
    }
    IO_pause("\n\nApertar ENTER para terminar.");
}

void atv7(void) {

int a = 0;
int b = 0;

    IO_id("866307 - exemplo07");
    a = IO_readint("Entre com um valor inteiro:");
    b = IO_readint("Entre com um segundo valor inteiro:");

    if (((a < 0) && (a % 2 == 0)) && ((b >= 0) && (b % 2 != 0))) {
        IO_printf("%s(%d)\n", "Primeiro e' negativo e par", a);
        IO_printf("%s(%d)\n", "Segundo e' impar e positivo", b);
    } else {
        if (((a > 0) || (a % 2 != 0)) && ((b <= 0) || (b % 2 == 0))) {
            IO_printf("%s(%d,%d)\n", "Nao esta de acordo com os requisitos (primeiro par negativo e segundo impar positivo)", a, b);
        }
    }
    IO_pause("Apertar <enter> para continuar");
}

void atv8(void) {

double a = 0.0;
double b = 0.0;

    IO_id("866307 - exemplo08");
    a = IO_readdouble("Entre com o primeiro valor: ");
    b = IO_readdouble("Entre com o segundo valor:");

    b = b / 4;

    if (a > b) {
        IO_printf("%s(%lf,%lf)\n", "Primeiro valor e' maior que 1/4 do segundo", a, b);
    } else {
        if (a < b) {
            IO_printf("%s(%lf,%lf)\n", "Primeiro valor e' menor que 1/4 do segundo", a, b);
        } else {
            if (a == b) {
                IO_printf("%s(%lf,%lf)\n", "Primeiro valor e' igual que 1/4 do segundo", a, b);
            }
        }
    }
    IO_pause("\n\nApertar ENTER para terminar.");
}

void atv9(void) {

double a, b, c;

    IO_id("866307 - exemplo09");
    a = IO_readdouble("Entre com o primeiro valor real:");
    b = IO_readdouble("Entre com o segundo valor real:");
    c = IO_readdouble("Entre com o terceiro valor real:");

    if (((a != b) && (a != c) && (b != c)) && (a < b && b < c)) {
        IO_printf("%s(%lf,%lf,%lf)\n", "O segundo valor esta entre o primeiro e o terceiro", a, b, c);
    } else {
        if (b < a || b > c) {
            IO_printf("%s(%lf,%lf,%lf)\n", "O segundo nao esta entre o primeiro e o terceiro", a, b, c);
        } else if (a == b || a == c || b == c) {
            IO_printf("%s(%lf,%lf,%lf)\n", "Valores semelhantes", a, b, c);
        }
    }
    IO_pause("\n\nApertar ENTER para terminar.");
}

void atv10(void) {

double a, b, c;

    IO_id("866307 - exemplo10");
    a = IO_readdouble("Entre com o primeiro valor real:");
    b = IO_readdouble("Entre com o segundo valor real:");
    c = IO_readdouble("Entre com o terceiro valor real:");

    if (((a != b) && (a != c) && (b != c)) && (b < a || b > c)) {
        IO_printf("%s(%lf,%lf,%lf)\n", "O segundo nao esta entre o primeiro e o terceiro", a, b, c);
    } else {
        if (b < a || b > c) {
            IO_printf("%s(%lf,%lf,%lf)\n", "Nao cumpre os requisitos", a, b, c);
        } else if (a == b || a == c || b == c) {
            IO_printf("%s(%lf,%lf,%lf)\n", "Valores semelhantes", a, b, c);
        }
    }
    IO_pause("\n\nApertar ENTER para terminar.");
}

int main() {
    int opcao = 0;

    do {
        printf("\n%s\n", "Opcoes:");
        printf("%s\n", " 0 - Terminar");
        printf("%s\n", " 1 - exercicio 1");
        printf("%s\n", " 2 - exercicio 2");
        printf("%s\n", " 3 - exercicio 3");
        printf("%s\n", " 4 - exercicio 4");
        printf("%s\n", " 5 - exercicio 5");
        printf("%s\n", " 6 - exercicio 6");
        printf("%s\n", " 7 - exercicio 7");
        printf("%s\n", " 8 - exercicio 8");
        printf("%s\n", " 9 - exercicio 9");
        printf("%s\n", " 10 - exercicio 10");

        printf("\n");

        printf("%s", "Escolha uma opcao:");
        scanf("%d", &opcao);
        getchar();

        printf("%s: %d\n\n", "Opcao escolhida", opcao);

        switch (opcao) {
            case 0: break;
            case 1: atv1(); break;
            case 2: atv2(); break;
            case 3: atv3(); break;
            case 4: atv4(); break;
            case 5: atv5(); break;
            case 6: atv6(); break;
            case 7: atv7(); break;
            case 8: atv8(); break;
            case 9: atv9(); break;
            case 10: atv10(); break;
            default: printf("\nERRO: Opcao invalida.\n"); break;
        }
    } while (opcao != 0);

    printf("Apertar <enter> para continuar");
    getchar();
    return 0;
}