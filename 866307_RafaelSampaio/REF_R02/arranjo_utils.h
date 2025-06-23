#include "arranjo_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarAleatorios(int arr[], int n, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

void salvarEmArquivo(const char* nome, int arr[], int n) {
    FILE* f = fopen(nome, "w");
    if (f) {
        fprintf(f, "%d\n", n);
        for (int i = 0; i < n; i++) {
            fprintf(f, "%d\n", arr[i]);
        }
        fclose(f);
    }
}

int lerArranjoArquivo(const char* nome, int arr[]) {
    FILE* f = fopen(nome, "r");
    int n = 0;
    if (f) {
        fscanf(f, "%d", &n);
        for (int i = 0; i < n; i++) {
            fscanf(f, "%d", &arr[i]);
        }
        fclose(f);
    }
    return n;
}

int maiorImpar(int arr[], int n) {
    int maior = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0 && (maior == -1 || arr[i] > maior)) {
            maior = arr[i];
        }
    }
    return maior;
}
