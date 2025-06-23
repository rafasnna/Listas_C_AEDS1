#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "io.h"

typedef int* ints;
typedef char* chars;
#define STR_SIZE 80
#define STR_EMPTY ""

typedef struct s_int_Array {
    int length;
    ints data;
    int ix;
} int_Array;

typedef int_Array* ref_int_Array;

ref_int_Array new_int_Array(int n) {
    ref_int_Array tmpArray = (ref_int_Array) malloc(sizeof(int_Array));
    if (tmpArray == NULL) {
        IO_printf("\nERRO: Falta espaco.\n");
    } else {
        tmpArray->length = 0;
        tmpArray->data = NULL;
        tmpArray->ix = -1;
        if (n > 0) {
            tmpArray->length = n;
            tmpArray->data = (ints) malloc(n * sizeof(int));
            tmpArray->ix = 0;
        }
    }
    return tmpArray;
}

void free_int_Array(ref_int_Array tmpArray) {
    if (tmpArray != NULL) {
        if (tmpArray->data != NULL) {
            free(tmpArray->data);
        }
        free(tmpArray);
    }
}

void printIntArray(int_Array array) {
    if (array.data) {
        for (array.ix = 0; array.ix < array.length; array.ix++) {
            printf("%2d: %d\n", array.ix, array.data[array.ix]);
        }
    }
}

void fprintIntArray(chars fileName, int_Array array) {
    FILE* arquivo = fopen(fileName, "wt");
    fprintf(arquivo, "%d\n", array.length);
    if (array.data) {
        for (array.ix = 0; array.ix < array.length; array.ix++) {
            fprintf(arquivo, "%d\n", array.data[array.ix]);
        }
    }
    fclose(arquivo);
}

int freadArraySize(chars fileName) {
    int n = 0;
    FILE* arquivo = fopen(fileName, "rt");
    if (arquivo) {
        fscanf(arquivo, "%d", &n);
        if (n <= 0) {
            IO_printf("\nERRO: Valor invalido.\n");
            n = 0;
        }
        fclose(arquivo);
    }
    return n;
}

int_Array fIO_readintArray(chars fileName) {
    int x = 0;
    FILE* arquivo = fopen(fileName, "rt");
    static int_Array array;
    if (arquivo) {
        fscanf(arquivo, "%d", &array.length);
        if (array.length > 0) {
            array.data = IO_new_ints(array.length);
            if (array.data) {
                array.ix = 0;
                while (!feof(arquivo) && array.ix < array.length) {
                    fscanf(arquivo, "%d", &array.data[array.ix]);
                    array.ix++;
                }
            }
        } else {
            IO_printf("\nERRO: Valor invalido.\n");
            array.length = 0;
        }
        fclose(arquivo);
    }
    return array;
}

ref_int_Array copyIntArray(int_Array array) {
    ref_int_Array copy = NULL;
    if (array.length > 0) {
        copy = new_int_Array(array.length);
        if (copy && copy->data && array.data) {
            for (array.ix = 0; array.ix < array.length; array.ix++) {
                copy->data[array.ix] = array.data[array.ix];
            }
        } else {
            IO_printf("\nERRO: Falta espaco ou dados.\n");
        }
    } else {
        IO_printf("\nERRO: Valor invalido.\n");
    }
    return copy;
}

int_Array IO_readintArray() {
    chars text = IO_new_chars(STR_SIZE);
    static int_Array array;
    do {
        array.length = IO_readint("\nlength = ");
    } while (array.length <= 0);
    array.data = IO_new_ints(array.length);
    if (array.data) {
        for (array.ix = 0; array.ix < array.length; array.ix++) {
            strcpy(text, STR_EMPTY);
            array.data[array.ix] = IO_readint(
                IO_concat(IO_concat(text, IO_toString_d(array.ix)), " : "));
        }
    }
    return array;
}

void method_01() {
    int_Array array;
    array.length = 5;
    array.data = (ints) malloc(array.length * sizeof(int));
    if (array.data) {
        array.data[0] = 1;
        array.data[1] = 2;
        array.data[2] = 3;
        array.data[3] = 4;
        array.data[4] = 5;
    }
    IO_id("Method_01 - v0.0");
    printIntArray(array);
    free(array.data);
    IO_pause("Apertar ENTER para continuar");
}

void method_02() {
    int_Array array;
    IO_id("Method_02 - v0.0");
    array = IO_readintArray();
    if (array.data) {
        IO_printf("\n");
        printIntArray(array);
        free(array.data);
    }
    IO_pause("Apertar ENTER para continuar");
}

void method_03() {
    int_Array array;
    IO_id("Method_03 - v0.0");
    array = IO_readintArray();
    if (array.data) {
        IO_printf("\n");
        printIntArray(array);
        fprintIntArray("ARRAY1.TXT", array);
        free(array.data);
    }
    IO_pause("Apertar ENTER para continuar");
}

void method_04() {
    int_Array array;
    IO_id("Method_04 - v0.0");
    array = fIO_readintArray("ARRAY1.TXT");
    if (array.data) {
        IO_printf("\n");
        printIntArray(array);
        free(array.data);
    }
    IO_pause("Apertar ENTER para continuar");
}

void method_05() {
    int_Array array;
    ref_int_Array other;
    IO_id("Method_05 - v0.0");
    array = fIO_readintArray("ARRAY1.TXT");
    other = copyIntArray(array);
    if (array.data && other && other->data) {
        IO_printf("\nOriginal\n");
        printIntArray(array);
        IO_printf("\nCopia\n");
        printIntArray(*other);
        free(array.data);
        free(other->data);
        free(other);
    }
    IO_pause("Apertar ENTER para continuar");
}

typedef struct s_int_Matrix {
    int rows, columns;
    ints* data;
    int ix, iy;
} int_Matrix;

typedef int_Matrix* ref_int_Matrix;

ref_int_Matrix new_int_Matrix(int rows, int columns) {
    ref_int_Matrix matrix = (ref_int_Matrix) malloc(sizeof(int_Matrix));
    if (matrix != NULL) {
        matrix->rows = rows;
        matrix->columns = columns;
        matrix->data = malloc(rows * sizeof(ints));
        for (matrix->ix = 0; matrix->ix < rows; matrix->ix++) {
            matrix->data[matrix->ix] = malloc(columns * sizeof(int));
        }
        matrix->ix = 0;
        matrix->iy = 0;
    }
    return matrix;
}

void free_int_Matrix(ref_int_Matrix matrix) {
    if (matrix != NULL) {
        for (matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix++) {
            free(matrix->data[matrix->ix]);
        }
        free(matrix->data);
        free(matrix);
    }
}

void printIntMatrix(ref_int_Matrix matrix) {
    for (matrix->ix = 0; matrix->ix < matrix->rows; matrix->ix++) {
        for (matrix->iy = 0; matrix->iy < matrix->columns; matrix->iy++) {
            printf("%3d\t", matrix->data[matrix->ix][matrix->iy]);
        }
        printf("\n");
    }
}

ref_int_Matrix IO_readintMatrix() {
    int rows, columns;
    chars text = IO_new_chars(STR_SIZE);
    do {
        rows = IO_readint("\nrows = ");
    } while (rows <= 0);
    do {
        columns = IO_readint("\ncolumns = ");
    } while (columns <= 0);
    ref_int_Matrix matrix = new_int_Matrix(rows, columns);
    for (matrix->ix = 0; matrix->ix < rows; matrix->ix++) {
        for (matrix->iy = 0; matrix->iy < columns; matrix->iy++) {
            matrix->data[matrix->ix][matrix->iy] = IO_readint("Valor: ");
        }
    }
    return matrix;
}

void method_06() {
    ref_int_Matrix matrix = new_int_Matrix(3, 3);
    matrix->data[0][0] = 1; matrix->data[0][1] = 2; matrix->data[0][2] = 3;
    matrix->data[1][0] = 3; matrix->data[1][1] = 4; matrix->data[1][2] = 5;
    matrix->data[2][0] = 6; matrix->data[2][1] = 7; matrix->data[2][2] = 8;
    IO_id("Method_06 - v0.0");
    printIntMatrix(matrix);
    free_int_Matrix(matrix);
    IO_pause("Apertar ENTER para continuar");
}

void method_07() {
    IO_id("Method_07 - v0.0");
    ref_int_Matrix matrix = IO_readintMatrix();
    printIntMatrix(matrix);
    free_int_Matrix(matrix);
    IO_pause("Apertar ENTER para continuar");
}

void method_08() {
    IO_id("Method_08 - v0.0");
    ref_int_Matrix matrix = IO_readintMatrix();
    FILE *file = fopen("MATRIX1.TXT", "wt");
    fprintf(file, "%d\n%d\n", matrix->rows, matrix->columns);
    for (int i = 0; i < matrix->rows; i++) {
        for (int j = 0; j < matrix->columns; j++) {
            fprintf(file, "%d\n", matrix->data[i][j]);
        }
    }
    fclose(file);
    free_int_Matrix(matrix);
    IO_pause("Apertar ENTER para continuar");
}

void method_09() {
    IO_id("Method_09 - v0.0");
    FILE *file = fopen("MATRIX1.TXT", "rt");
    int rows, columns;
    fscanf(file, "%d", &rows);
    fscanf(file, "%d", &columns);
    ref_int_Matrix matrix = new_int_Matrix(rows, columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            fscanf(file, "%d", &matrix->data[i][j]);
        }
    }
    fclose(file);
    printIntMatrix(matrix);
    free_int_Matrix(matrix);
    IO_pause("Apertar ENTER para continuar");
}

void method_10() {
    IO_id("Method_10 - v0.0");
    FILE *file = fopen("MATRIX1.TXT", "rt");
    int rows, columns;
    fscanf(file, "%d", &rows);
    fscanf(file, "%d", &columns);
    ref_int_Matrix matrix = new_int_Matrix(rows, columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            fscanf(file, "%d", &matrix->data[i][j]);
        }
    }
    fclose(file);
    ref_int_Matrix copy = new_int_Matrix(rows, columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            copy->data[i][j] = matrix->data[i][j];
        }
    }
    IO_printf("\nOriginal\n");
    printIntMatrix(matrix);
    IO_printf("\nCopia\n");
    printIntMatrix(copy);
    free_int_Matrix(matrix);
    free_int_Matrix(copy);
    IO_pause("Apertar ENTER para continuar");
}

int main() {
    int opcao = 0;
    do {
        IO_clrscr();
        IO_println("Exemplo1000 - v0.0");
        IO_println("Autor: PUC Minas - AED1");
        IO_println("Opcoes:");
        IO_println(" 0 - parar");
        IO_println(" 1 - mostrar arranjo estatico");
        IO_println(" 2 - ler arranjo do teclado");
        IO_println(" 3 - ler arranjo do teclado e gravar em arquivo");
        IO_println(" 4 - ler arranjo de arquivo e mostrar");
        IO_println(" 5 - copiar arranjo de arquivo");
        IO_println(" 6 - mostrar matriz estatica 3x3");
        IO_println(" 7 - ler matriz do teclado");
        IO_println(" 8 - gravar matriz em arquivo");
        IO_println(" 9 - ler matriz do arquivo e mostrar");
        IO_println("10 - copiar matriz lida de arquivo");
        IO_println("");
        opcao = IO_readint("Escolha uma opcao: ");
        switch (opcao) {
            case 0: break;
            case 1: method_01(); break;
            case 2: method_02(); break;
            case 3: method_03(); break;
            case 4: method_04(); break;
            case 5: method_05(); break;
            case 6: method_06(); break;
            case 7: method_07(); break;
            case 8: method_08(); break;
            case 9: method_09(); break;
            case 10: method_10(); break;
            default:
                IO_pause("ERRO: Opcao invalida.");
        }
    } while (opcao != 0);
    IO_pause("Apertar ENTER para terminar");
    return 0;
}
