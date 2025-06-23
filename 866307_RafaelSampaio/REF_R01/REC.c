// Rafael de Sena Sampaio - 866307

#include <stdio.h>
#include <string.h>

int contar_divisores_pares(int valor) {
    int count = 0;
    for (int i = 1; i <= valor; i++) {
        if (valor % i == 0 && i % 2 == 0) {
            count++;
        }
    }
    return count;
}

int contar_divisores_impares(int valor) {
    int count = 0;
    for (int i = 1; i <= valor; i++) {
        if (valor % i == 0 && i % 2 != 0) {
            count++;
        }
    }
    return count;
}

int eh_primo(int valor) {
    if (valor <= 1) return 0;
    for (int i = 2; i * i <= valor; i++) {
        if (valor % i == 0) return 0;
    }
    return 1;
}

char identificar_simbolo(char c) {
    if (c == '&' || c == '|' || c == '!') return 'L';
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%') return 'A';
    if (c == '>' || c == '<' || c == '=') return 'R';
    if (c == ' ' || c == '.' || c == ',' || c == ';' || c == ':' || c == '_') return 'S';
    return 'O';
}

void exercicio01() {
    int n, x;
    printf("Digite a quantidade de numeros (n): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &x);
        int pares = contar_divisores_pares(x);
        int impares = contar_divisores_impares(x);
        if (pares > impares) {
            printf("O numero %d tem mais divisores pares (%d) do que impares (%d).\n", x, pares, impares);
        } else if (impares > pares) {
            printf("O numero %d tem mais divisores impares (%d) do que pares (%d).\n", x, impares, pares);
        } else {
            printf("O numero %d tem a mesma quantidade de divisores pares (%d) e impares (%d).\n", x, pares, impares);
        }
    }
}

void exercicio02() {
    int n, x;
    printf("Digite a quantidade de numeros (n): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &x);
        if (eh_primo(x)) {
            printf("O numero %d é primo.\n", x);
        } else {
            printf("O numero %d não é primo.\n", x);
        }
    }
}

void exercicio03() {
    char cadeia[100];
    printf("Digite uma cadeia de caracteres: ");
    scanf(" %[^\n]", cadeia);
    for (int i = 0; cadeia[i] != '\0'; i++) {
        char tipo = identificar_simbolo(cadeia[i]);
        switch (tipo) {
            case 'L': printf("'%c' é um operador lógico.\n", cadeia[i]); break;
            case 'A': printf("'%c' é um operador aritmético.\n", cadeia[i]); break;
            case 'R': printf("'%c' é um operador relacional.\n", cadeia[i]); break;
            case 'S': printf("'%c' é um separador.\n", cadeia[i]); break;
            default: printf("'%c' é outro símbolo.\n", cadeia[i]);
        }
    }
}

void exercicio04() {
    char cadeia[100];
    int maiusculas = 0, minusculas = 0, digitos = 0, operadores = 0, separadores = 0;
    printf("Digite uma cadeia de caracteres: ");
    scanf(" %[^\n]", cadeia);
    for (int i = 0; cadeia[i] != '\0'; i++) {
        if (cadeia[i] >= 'A' && cadeia[i] <= 'Z') maiusculas++;
        else if (cadeia[i] >= 'a' && cadeia[i] <= 'z') minusculas++;
        else if (cadeia[i] >= '0' && cadeia[i] <= '9') digitos++;
        else {
            char tipo = identificar_simbolo(cadeia[i]);
            if (tipo == 'L' || tipo == 'A' || tipo == 'R') operadores++;
            else if (tipo == 'S') separadores++;
        }
    }
    printf("Maiúsculas: %d, Minúsculas: %d, Dígitos: %d, Operadores: %d, Separadores: %d\n",
           maiusculas, minusculas, digitos, operadores, separadores);
}

void exercicio05() {
    int n;
    double x, soma1 = 0, soma2 = 0, soma3 = 0;
    int count1 = 0, count2 = 0, count3 = 0;
    printf("Digite a quantidade de numeros (n): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Digite um numero real: ");
        scanf("%lf", &x);
        if (x < -21.75) {
            soma1 += x;
            count1++;
        } else if (x <= 71.25) {
            soma2 += x;
            count2++;
        } else {
            soma3 += x;
            count3++;
        }
    }
    double media1 = count1 ? soma1 / count1 : 0;
    double media2 = count2 ? soma2 / count2 : 0;
    double media3 = count3 ? soma3 / count3 : 0;
    printf("Média 1: %.2lf, Média 2: %.2lf, Média 3: %.2lf\n", media1, media2, media3);
    if (media1 > media2 && media1 > media3) {
        printf("A maior média é %.2lf\n", media1);
    } else if (media2 > media3) {
        printf("A maior média é %.2lf\n", media2);
    } else {
        printf("A maior média é %.2lf\n", media3);
    }
}

int pertence_intervalo(int a, int b, int valor) {
    return valor > a && valor < b;
}

double soma_cubos_inversos(int a, int b, int valor) {
    if (valor % 2 != 0 && valor % 3 != 0 && pertence_intervalo(a, b, valor)) {
        return 1.0 / (valor * valor * valor);
    }
    return 0;
}

void exercicio06() {
    int a, b, x;
    double soma = 0;
    printf("Digite os valores de a e b: ");
    scanf("%d %d", &a, &b);
    do {
        printf("Digite um valor inteiro (-1 para sair): ");
        scanf("%d", &x);
        if (x != -1) {
            soma += soma_cubos_inversos(a, b, x);
        }
    } while (x != -1);
    printf("Soma dos cubos dos inversos: %.6lf\n", soma);
}

void exercicio07() {
    double a, b, x;
    int dentro = 0, acima = 0, abaixo = 0, total = 0;
    printf("Digite os valores de a e b: ");
    scanf("%lf %lf", &a, &b);
    do {
        printf("Digite um valor real (0 para sair): ");
        scanf("%lf", &x);
        if (x != 0) {
            total++;
            if (x > b) acima++;
            else if (x < a) abaixo++;
            else dentro++;
        }
    } while (x != 0);
    if (total > 0) {
        printf("Dentro: %d, Acima: %.2lf%%, Abaixo: %.2lf%%\n", dentro, (acima * 100.0) / total, (abaixo * 100.0) / total);
    }
}

int crescente(double x, double y, double z) {
    return x < y && y < z;
}

int decrescente(double x, double y, double z) {
    return x > y && y > z;
}

double maior(double x, double y, double z) {
    if (x >= y && x >= z) return x;
    if (y >= x && y >= z) return y;
    return z;
}

double menor(double x, double y, double z) {
    if (x <= y && x <= z) return x;
    if (y <= x && y <= z) return y;
    return z;
}

void exercicio08() {
    double x, y, z;
    printf("Digite os valores de x, y e z: ");
    scanf("%lf %lf %lf", &x, &y, &z);
    if (crescente(x, y, z)) {
        printf("Os valores estão em ordem crescente.\n");
    } else if (decrescente(x, y, z)) {
        printf("Os valores estão em ordem decrescente.\n");
    } else {
        printf("Menor: %.2lf, Maior: %.2lf\n", menor(x, y, z), maior(x, y, z));
    }
}

int crescente_char(char x, char y, char z) {
    return x < y && y < z;
}

int decrescente_char(char x, char y, char z) {
    return x > y && y > z;
}

void exercicio09() {
    char x, y, z;
    printf("Digite os caracteres x, y e z: ");
    scanf(" %c %c %c", &x, &y, &z);
    if (crescente_char(x, y, z)) {
        printf("Os caracteres estão em ordem crescente.\n");
    } else if (decrescente_char(x, y, z)) {
        printf("Os caracteres estão em ordem decrescente.\n");
    } else {
        printf("Os caracteres não estão em ordem.\n");
    }
}

void exercicio10() {
    char x[100], y[100], z[100];
    printf("Digite as cadeias de caracteres x, y e z: ");
    scanf("%s %s %s", x, y, z);
    if (strcmp(x, y) < 0 && strcmp(y, z) < 0) {
        printf("As cadeias estão em ordem alfabética crescente.\n");
    } else if (strcmp(x, y) > 0 && strcmp(y, z) > 0) {
        printf("As cadeias estão em ordem alfabética decrescente.\n");
    } else {
        char *menor = strcmp(x, y) < 0 ? (strcmp(x, z) < 0 ? x : z) : (strcmp(y, z) < 0 ? y : z);
        char *maior = strcmp(x, y) > 0 ? (strcmp(x, z) > 0 ? x : z) : (strcmp(y, z) > 0 ? y : z);
        printf("Menor: %s, Maior: %s\n", menor, maior);
    }
}

int main() {
    int opcao;
    do {
        printf("\nPUC-Minas - AED1 - Lista de Recuperacao 01\n");
        printf("Escolha um exercicio para executar:\n");
        printf("1 - Exercicio 01\n");
        printf("2 - Exercicio 02\n");
        printf("3 - Exercicio 03\n");
        printf("4 - Exercicio 04\n");
        printf("5 - Exercicio 05\n");
        printf("6 - Exercicio 06\n");
        printf("7 - Exercicio 07\n");
        printf("8 - Exercicio 08\n");
        printf("9 - Exercicio 09\n");
        printf("10 - Exercicio 10\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: exercicio01(); break;
            case 2: exercicio02(); break;
            case 3: exercicio03(); break;
            case 4: exercicio04(); break;
            case 5: exercicio05(); break;
            case 6: exercicio06(); break;
            case 7: exercicio07(); break;
            case 8: exercicio08(); break;
            case 9: exercicio09(); break;
            case 10: exercicio10(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);
    return 0;
}