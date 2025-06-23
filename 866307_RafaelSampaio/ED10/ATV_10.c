/** Autor: Rafael Sampaio - 866307
 */

// dependências
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "io.h"

// Definição de estrutura e tipo para matriz de inteiros
typedef struct int_Matrix {
    int rows;
    int columns;
    int **data;
    int ix, iy;
} int_Matrix;

typedef int_Matrix* ref_int_Matrix;

// estrutura para armazenar vetores de inteiros
typedef struct vetor_inteiros {
    int tamanho;
    int* dados;
    int posicao;
} vetor_inteiros;

typedef vetor_inteiros* ref_vetor_inteiros;

// Definição de estrutura e tipo para ref_int_Array
typedef struct int_Array {
    int tamanho;
    int* datas;
    int ix;
} int_Array;

typedef int_Array* ref_int_Array;

// função para criar novo vetor com tamanho 'n'
ref_vetor_inteiros criar_vetor(int n) {
    ref_vetor_inteiros v = (ref_vetor_inteiros) malloc(sizeof(vetor_inteiros));
    if (v != NULL) {
        v->tamanho = 0;
        v->dados = NULL;
        v->posicao = -1;
        if (n > 0) {
            v->tamanho = n;
            v->dados = (int*) malloc(n * sizeof(int));
            v->posicao = 0;
        }
    } else {
        printf("ERRO: memoria insuficiente.\n");
    }
    return v;
}

// leitura de vetor do teclado
ref_vetor_inteiros ler_vetor() {
    chars texto = IO_new_chars(STR_SIZE);
    static ref_vetor_inteiros v;
    do {
        v->tamanho = IO_readint("\nTamanho = ");
    } while (v->tamanho <= 0);

    v->dados = IO_new_ints(v->tamanho);
    if (v->dados != NULL) {
        for (v->posicao = 0; v->posicao < v->tamanho; v->posicao++) {
            strcpy(texto, STR_EMPTY);
            v->dados[v->posicao] = IO_readint(IO_concat(IO_concat(texto, IO_toString_d(v->posicao)), ": "));
        }
    } else {
        v->tamanho = 0;
    }

    return v;
}

// libera memória do vetor
void liberar_vetor(ref_vetor_inteiros v) {
    if (v != NULL) {
        if (v->dados != NULL) {
            free(v->dados);
        }
        free(v);
    }
}

// salva vetor em arquivo
void gravar_vetor_em_arquivo(chars nomeArquivo, ref_vetor_inteiros v) {
    FILE* arquivo = fopen(nomeArquivo, "wt");
    fprintf(arquivo, "%d\n", v->tamanho);
    if (v->dados != NULL) {
        for (v->posicao = 0; v->posicao < v->tamanho; v->posicao++) {
            fprintf(arquivo, "%d\n", v->dados[v->posicao]);
        }
    }
    fclose(arquivo);
}

// gera número aleatório entre dois limites
int gerar_inteiro_aleatorio(int menor, int maior) {
    return menor + rand() % (maior - menor + 1);
}

// exercício para gerar dados aleatórios
void exercicio_1011() {
    int min = 0, max = 0, quantidade = 0;
    srand(time(NULL));

    IO_id("Exercicio - 1011");
    min = IO_readint("Valor minimo: ");
    max = IO_readint("Valor maximo: ");
    quantidade = IO_readint("Quantidade de numeros: ");

    if (quantidade <= 0 || max < min || max > 106) {
        printf("Valores invalidos.\n");
        return;
    }

    ref_vetor_inteiros v = criar_vetor(quantidade);
    if (v == NULL || v->dados == NULL) return;

    for (v->posicao = 0; v->posicao < v->tamanho; v->posicao++) {
        v->dados[v->posicao] = gerar_inteiro_aleatorio(min, max);
    }

    gravar_vetor_em_arquivo("ARQ1.TXT", v);
    liberar_vetor(v);
}

// busca valor no vetor
void exercicio_1012() {
    int valor = 0;
    IO_id("Exercicio - 1012");

    ref_vetor_inteiros v = ler_vetor_arquivo("ARQ1.TXT");
    if (v == NULL) return;

    valor = IO_readint("Qual valor deseja buscar? ");
    int pos = buscar_no_vetor(valor, v);
    if (pos == -1)
        printf("Valor %d nao foi encontrado.\n", valor);
    else
        printf("Valor %d encontrado na posicao %d.\n", valor, pos);

    liberar_vetor(v);
    IO_pause("Pressione ENTER para continuar.");
}

// comparação de vetores
void exercicio_1013() {
    IO_id("Exercicio - 1013");
    ref_vetor_inteiros a1 = ler_vetor_arquivo("ARQ1.TXT");
    ref_vetor_inteiros a2 = ler_vetor_arquivo("ARQ2.TXT");

    int resultado = comparar_vetores(a1, a2);
    IO_printf("Os vetores sao %s.\n", resultado ? "iguais" : "diferentes");

    liberar_vetor(a1);
    liberar_vetor(a2);
    IO_pause("Pressione ENTER para continuar.");
}
ref_int_Array combinarVetores(ref_int_Array vetorA, int fator, ref_int_Array vetorB)
{
    if (vetorA == NULL || vetorB == NULL || vetorA->tamanho != vetorB->tamanho)
    {
        printf("Erro: Tamanhos incompatíveis.\n");
        return NULL;
    }

    ref_int_Array resultado = novo_Array(vetorA->tamanho);

    for (resultado->ix = 0; resultado->ix < resultado->tamanho; resultado->ix++)
    {
        resultado->datas[resultado->ix] = vetorA->datas[resultado->ix] + (fator * vetorB->datas[resultado->ix]);
    }

    return resultado;
}

void exercicio_1014() {
    IO_id("Exercicio - 1014");
    int multiplicador = IO_readint("Informe o valor do multiplicador: ");
    ref_int_Array dados1 = readArrayFromFile("DADOS1.TXT");
    ref_int_Array dados2 = readArrayFromFile("DADOS2.TXT");
    ref_int_Array resultado = combinarVetores(dados1, multiplicador, dados2);

    if (resultado != NULL) {
        printf("Resultado final:\n");
        for (resultado->ix = 0; resultado->ix < resultado->tamanho; resultado->ix++) {
            printf("%d ", resultado->datas[resultado->ix]);
        }
        printf("\n");
    }

    free_int_Array(dados1);
    free_int_Array(dados2);
    free_int_Array(resultado);

    IO_pause("Pressione ENTER para sair.");
}

bool estaDecrescente(ref_int_Array vetor) {
    if (vetor == NULL || vetor->tamanho < 2)
    {
        return true; // Considera decrescente se tiver 0 ou 1 elemento
    }

    vetor->ix = 1;
    while (vetor->ix < vetor->tamanho)
    {
        if (vetor->datas[vetor->ix] > vetor->datas[vetor->ix - 1])
        {
            return false; // Achou um aumento
        }
        vetor->ix++;
    }

    return true;
}

void exercicio_1015() {
    IO_id("Exercicio - 1015");
    ref_int_Array dados = readArrayFromFile("DADOS1.TXT");

    if (estaDecrescente(dados)) {
        printf("O vetor está em ordem decrescente.\n");
    } else {
        printf("O vetor NAO está em ordem decrescente.\n");
    }

    free_int_Array(dados);

    IO_pause("Pressione ENTER para continuar.");
}

void exercicio_1016() {
    ref_int_Matrix origem = readMatrixFromFile("DADOS1_2.TXT");
    if (origem == NULL) {
        printf("ERRO: Falha na leitura da matriz.");
        return;
    }

    ref_int_Matrix transposta = matrixTranspose(origem);
    if (transposta == NULL) {
        printf("ERRO: Falha ao transpor a matriz.");
        return;
    }

    printf("\nMatriz Lida\n");
    printIntMatrix(origem);
    printf("\nMatriz Transposta\n");
    printIntMatrix(transposta);

    free_int_Matrix(origem);
    free_int_Matrix(transposta);
}

void exercicio_1017() {
    ref_int_Matrix mat = readMatrixFromFile("DADOS1_2.TXT");
    if (mat == NULL || mat->data == NULL) {
        printf("ERRO ao carregar matriz.\n");
        return;
    }

    bool ehZero = matrizZerada(mat);
    printIntMatrix(mat);
    printf(ehZero ? "Matriz apenas com zeros\n" : "Matriz com elementos nao nulos\n");
    free_int_Matrix(mat);
}

void exercicio_1018() {
    ref_int_Matrix a = readMatrixFromFile("DADOS1_2.TXT");
    ref_int_Matrix b = readMatrixFromFile("DADOS2_1.TXT");

    if (a == NULL || b == NULL) {
        printf("Falha ao abrir arquivos de matriz.\n");
        return;
    }

    printf(compararMatrizes(a, b) ? "Matrizes identicas.\n" : "Matrizes diferentes.\n");
    free_int_Matrix(a);
    free_int_Matrix(b);
}

void exercicio_1019() {
    IO_id("Exercicio - 1019");
    int escalar = IO_readint("Informe o valor da constante: ");
    ref_int_Matrix m1 = readMatrixFromFile("DADOS1_2.TXT");
    ref_int_Matrix m2 = readMatrixFromFile("DADOS2_1.TXT");
    ref_int_Matrix res = somarComConstante(m1, escalar, m2);

    if (res != NULL) {
        printf("\nPrimeira matriz:\n"); printIntMatrix(m1);
        printf("\nSegunda matriz:\n"); printIntMatrix(m2);
        printf("\nResultado da operacao:\n"); printIntMatrix(res);
    }

    free_int_Matrix(m1);
    free_int_Matrix(m2);
    free_int_Matrix(res);
    IO_pause("Pressione ENTER para sair...");
}

void exercicio_1020() {
    IO_id("Exercicio - 1020");
    ref_int_Matrix a = readMatrixFromFile("DADOS1_2.TXT");
    ref_int_Matrix b = readMatrixFromFile("DADOS2_1.TXT");
    ref_int_Matrix prod = produtoMatrizes(a, b);

    if (prod != NULL) {
        printf("\nMatriz A\n"); printIntMatrix(a);
        printf("\nMatriz B\n"); printIntMatrix(b);
        printf("\nProduto AxB\n"); printIntMatrix(prod);
    }

    free_int_Matrix(a);
    free_int_Matrix(b);
    free_int_Matrix(prod);
    IO_pause("Pressione ENTER para continuar.");
}

ref_int_Array ordenarDecrescente(ref_int_Array arr) {
	if (arr == NULL || arr->datas == NULL) return NULL;
	int temp;
	for (arr->ix = 0; arr->ix < arr->tamanho - 1; arr->ix++) {
		for (int j = arr->ix + 1; j < arr->tamanho; j++) {
			if (arr->datas[arr->ix] < arr->datas[j]) {
				temp = arr->datas[arr->ix];
				arr->datas[arr->ix] = arr->datas[j];
				arr->datas[j] = temp;
			}
		}
	}
	return arr;
}

void exercicio_10E1() {
	IO_id("Exercicio - 10E1");
	ref_int_Array vetor = readArrayFromFile("DADOS1.TXT");
	if (vetor == NULL) return;

	printf("Original:\n");
	for (vetor->ix = 0; vetor->ix < vetor->tamanho; vetor->ix++) printf("%d ", vetor->datas[vetor->ix]);
	printf("\n");

	ordenarDecrescente(vetor);
	printf("Ordenado (decrescente):\n");
	for (vetor->ix = 0; vetor->ix < vetor->tamanho; vetor->ix++) printf("%d ", vetor->datas[vetor->ix]);
	printf("\n");

	free_int_Array(vetor);
	IO_pause("ENTER para continuar...");
}

int ehIdentidade(ref_int_Matrix m) {
	if (m == NULL || m->data == NULL || m->rows != m->columns) return 0;
	for (m->ix = 0; m->ix < m->rows; m->ix++) {
		for (m->iy = 0; m->iy < m->columns; m->iy++) {
			if ((m->ix == m->iy && m->data[m->ix][m->iy] != 1) ||
				(m->ix != m->iy && m->data[m->ix][m->iy] != 0)) return 0;
		}
	}
	return 1;
}

void exercicio_10E2() {
	IO_id("Exercicio - 10E2");
	ref_int_Matrix m1 = readMatrixFromFile("DADOS1_2.TXT");
	ref_int_Matrix m2 = readMatrixFromFile("DADOS2_1.TXT");
	ref_int_Matrix resultado = produtoMatrizes(m1, m2);

	if (resultado == NULL) {
		printf("Erro no produto.\n");
		free_int_Matrix(m1); free_int_Matrix(m2);
		return;
	}

	printf(ehIdentidade(resultado) ? "Produto e identidade.\n" : "Nao e identidade.\n");
	free_int_Matrix(m1); free_int_Matrix(m2); free_int_Matrix(resultado);
	IO_pause("ENTER para sair...");
}

int main () {
	int escolha = 0;
	printf("\nGabriel_AED1_Modificado\n\n");
	do {
		printf("Escolha: ");
		scanf("%d", &escolha); getchar();
		switch (escolha) {
			case  0: break;
			case 11: exercicio_1011(); break;
			case 12: exercicio_1012(); break;
			case 13: exercicio_1013(); break;
			case 14: exercicio_1014(); break;
			case 15: exercicio_1015(); break;
			case 16: exercicio_1016(); break;
			case 17: exercicio_1017(); break;
			case 18: exercicio_1018(); break;
			case 19: exercicio_1019(); break;
			case 20: exercicio_1020(); break;
			case 21: exercicio_10E1(); break;
			case 22: exercicio_10E2(); break;
			default: printf("\nOpcao invalida.\n"); break;
		}
	} while (escolha != 0);
	printf("\nFim do programa.\n");
	return 0;
}