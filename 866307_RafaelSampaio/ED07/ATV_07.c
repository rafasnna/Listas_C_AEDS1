/* Rafael Sampaio - 866307 */
#include <stdio.h>
#include <stdlib.h>
#include "io.h"
#include <time.h>

/** 01.) Gravar múltiplos de 4 em ordem crescente */
void atv0711() {
    FILE *arquivo = fopen("RESULTADO0711.TXT", "wt");
    int quantidade = 0;
    int i = 0;

    IO_id("ATV0711");
    quantidade = IO_readint("Digite a quantidade de múltiplos de 4: ");

    for (i = 1; i <= quantidade; i++) {
        fprintf(arquivo, "%d\n", i * 4);
    }

    fclose(arquivo);
    IO_pause("Pressione ENTER para continuar.");
}

/** 02.) Gravar múltiplos de 15 em ordem decrescente */
void atv0712() {
    FILE *arquivo = fopen("RESULTADO0712.TXT", "wt");
    int quantidade = 0;
    int i = 0;

    IO_id("ATV0712");
    quantidade = IO_readint("Digite a quantidade de múltiplos de 15: ");

    for (i = 2 * quantidade; i > 1; i--) {
        if (i * 15 % 2 == 0) {
            fprintf(arquivo, "%d\n", i * 15);
        }
    }

    fclose(arquivo);
    IO_pause("Pressione ENTER para continuar.");
}

/** 03.) Gravar valores da sequência 1, 3, 9, 27, ... */
void atv0713() {
    FILE *arquivo = fopen("RESULTADO0713.TXT", "wt");
    int quantidade = 0;
    int i = 1;
    int valor = 1;

    IO_id("ATV013");
    quantidade = IO_readint("Digite a quantidade de valores: ");
    fprintf(arquivo, "%d\n", 1);

    while (i < quantidade) {
        valor = valor * 3;
        fprintf(arquivo, "%d\n", valor);
        i++;
    }

    fclose(arquivo);
    IO_pause("Pressione ENTER para continuar.");
}

/** 04.) Gravar valores decrescentes da sequência 1/81, 1/27, ... */
void atv0714() {
    FILE *arquivo = fopen("RESULTADO0714.TXT", "wt");
    int quantidade = 0;
    int i = 1;
    int valor = 1;

    IO_id("ATV014");
    quantidade = IO_readint("Digite a quantidade de valores: ");

    for (i = quantidade; i > 1; i--) {
        valor = valor * 3;
    }

    while (i < quantidade) {
        fprintf(arquivo, "1/%d\n", valor);
        valor = valor / 3;
        i++;
    }

    fprintf(arquivo, "1\n");
    fclose(arquivo);
    IO_pause("Pressione ENTER para continuar.");
}

/** 05.) Gravar valores reais da sequência 1, 1/x³, 1/x⁵, ... */
void atv0715() {
    FILE *arquivo = fopen("RESULTADO0715.TXT", "wt");
    int quantidade = 0;
    double x = 0.0;
    int i = 0;
    int potencia = 2;

    IO_id("ATV0715");
    quantidade = IO_readint("Digite a quantidade de valores: ");
    x = IO_readdouble("Digite o valor de x: ");
    fprintf(arquivo, "1\n");

    for (i = 1; i < quantidade; i++) {
        fprintf(arquivo, "%lf\n", 1 / pow(x, 2 * potencia - 1));
        potencia++;
    }

    fclose(arquivo);
    IO_pause("Pressione ENTER para continuar.");
}

/** 06.) Somar valores do arquivo gerado na atividade anterior */
void somarValores(char *fileName, int quantidade) {
    FILE *entrada = fopen(fileName, "rt");
    FILE *saida = fopen("RESULTADO06.TXT", "a");
    int contador = 0;
    double soma = 0.0;
    double valor = 0.0;

    while (contador < quantidade && !feof(entrada)) {
        fscanf(entrada, "%lf", &valor);
        fprintf(saida, "%lf\n", valor);
        soma += valor;
        contador++;
    }

    fprintf(saida, "Soma dos %d valores = %lf\n", quantidade, soma);
    fclose(entrada);
    fclose(saida);
}

void atv0716() {
    int quantidade = 0;

    IO_id("ATV0716");
    quantidade = IO_readint("Digite a quantidade de valores: ");
    somarValores("RESULTADO0715.TXT", quantidade);
    IO_pause("Pressione ENTER para continuar.");
}

/** 07.) Calcular soma dos inversos das potências */
int somaInversos(char *fileName, int quantidade) {
    FILE *arquivo = fopen(fileName, "a");
    int i = 1;
    double soma = 0.0;

    for (i = quantidade; i > 1; i--) {
        soma += 1.0 / pow(3.0, i);
        fprintf(arquivo, "%lf\n", soma);
    }

    fprintf(arquivo, "Soma dos %d valores = %lf\n", quantidade, soma);
    fclose(arquivo);
    return soma;
}

void atv0717() {
    int quantidade = 0;

    IO_id("ATV017");
    quantidade = IO_readint("Digite a quantidade de valores: ");
    somaInversos("RESULTADO07.TXT", quantidade);
    IO_pause("Pressione ENTER para continuar.");
}

/** 08.) Gravar termos pares da sequência de Fibonacci */
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void atv0718() {
    FILE *arquivo = fopen("RESULTADOS08.TXT", "wt");
    int quantidade = 0;
    int controle = 0;
    int contador = 1;
    int termo = 0;

    IO_id("ATV0718");
    quantidade = IO_readint("Digite a quantidade de termos pares de Fibonacci: ");

    while (controle < quantidade) {
        termo = fibonacci(contador);

        if (termo % 2 == 0) {
            fprintf(arquivo, "%d\n", termo);
            controle++;
        }

        contador++;
    }

    fclose(arquivo);
    IO_pause("Pressione ENTER para continuar.");
}

/** 09.) Contar caracteres minúsculos em uma string */
int contarMinusculas(char *fileName, char *palavra) {
    FILE *arquivo = fopen(fileName, "wt");
    int contador = 0;
    int tamanho = strlen(palavra);
    int i = 0;

    for (i = 0; i < tamanho; i++) {
        if ('a' <= palavra[i] && palavra[i] <= 'z') {
            fprintf(arquivo, "%c\n", palavra[i]);
            contador++;
        }
    }

    fprintf(arquivo, "Total de caracteres minúsculos = %d\n", contador);
    fclose(arquivo);
    return contador;
}

void atv0719() {
    char palavra[STR_SIZE];
    int resultado = 0;

    IO_id("ATV0719");
    IO_println("Digite uma palavra:");
    scanf("%s", palavra);

    resultado = contarMinusculas("RESULTADO09.TXT", palavra);
    printf("Total de caracteres minúsculos: %d\n", resultado);
    IO_pause("Pressione ENTER para continuar.");
}

/** Main */
int main() {
    int opcao = 0;

    do {
        IO_id("ATIVIDADES ED07 - Rafael Sampaio");

        IO_println("Opções:");
        IO_println("0 - Sair");
        IO_println("1 - Atividade 0711");
        IO_println("2 - Atividade 0712");
        IO_println("3 - Atividade 0713");
        IO_println("4 - Atividade 0714");
        IO_println("5 - Atividade 0715");
        IO_println("6 - Atividade 0716");
        IO_println("7 - Atividade 0717");
        IO_println("8 - Atividade 0718");
        IO_println("9 - Atividade 0719");

        opcao = IO_readint("Escolha uma opção: ");

        switch (opcao) {
            case 0:
                break;
            case 1:
                atv0711();
                break;
            case 2:
                atv0712();
                break;
            case 3:
                atv0713();
                break;
            case 4:
                atv0714();
                break;
            case 5:
                atv0715();
                break;
            case 6:
                atv0716();
                break;
            case 7:
                atv0717();
                break;
            case 8:
                atv0718();
                break;
            case 9:
                atv0719();
                break;
            default:
                IO_println("Opção inválida!");
        }
    } while (opcao != 0);

    IO_pause("Pressione ENTER para sair.");
    return 0;
}