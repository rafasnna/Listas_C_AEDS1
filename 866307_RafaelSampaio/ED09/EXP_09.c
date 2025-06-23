#include <stdio.h>
#include <stdlib.h>
#include "io.h"

/** 
   @param printIntMatrix  - Mostrar arranjo bidimensional com valores inteiros. 
   @param rows            - quantidade de linhas 
   @param columns         - quantidade de colunas 
   @param matrix          - grupo de valores inteiros 
 */

 void printIntMatrix (int rows, int columns, int matrix [][columns]){

int x = 0;
int y = 0;

    for (x = 0; x < rows; x = x + 1){
        for(y = 0; y < columns; y = y + 1){
            IO_printf("%3d\t", matrix [x][y]);
        }
        IO_printf("\n");
    }
}

void metodo1 (){

int matrix [][3]= {{1,2,3},{4,5,6},{7,8,9}};
IO_id("\n Mostrar certa quantidade de valores \n");

printIntMatrix(3,3,matrix);

IO_pause("Pressione <enter> para continuar");

}

/** 
   @param readIntMatrix - Ler arranjo bidimensional com valores inteiros. 
   @param rows       - quantidade de linhas 
   @param columns    - quantidade de colunas 
   @param matrix     - grupo de valores inteiros 
 */ 
void readIntMatrix(int rows, int columns, int matrix [][columns]){

int x = 0;
int y = 0;
int z = 0;

    chars text = IO_new_chars(STR_SIZE);
    //ler e guardar valores  em arranjo
    for (x = 0; x < rows; x = x + 1){
        for(y = 0; y < columns; y = y + 1){
            //ler valor
            strcpy(text, STR_EMPTY);
            z = IO_readint(IO_concat(IO_concat(IO_concat(text, IO_toString_d(x)),","),IO_concat(IO_concat(text,IO_toString_d(y)),":")));
            matrix [x][y] = z;
        }
    }
}

void metodo02 (){

int n = 2;
int matrix [n][n];

    IO_id("\nLer arranjo bidimensional com valores inteiros\n");

    readIntMatrix(n,n,matrix);

    IO_printf("\n");
    printIntMatrix(n,n,matrix);

    IO_pause("Pressione <enter> para continuar");
}


/** 
   fprintIntMatrix        - Gravar arranjo bidimensional com valores inteiros. 
   @param fileName  - nome do arquivo 
   @param rows         - quantidade de linhas 
   @param columns  - quantidade de colunas 
   @param matrix      - grupo de valores inteiros 
 */ 

void fprintIntMatrix (chars filename, int rows, int columns, int matrix[][columns]){
    
    FILE *arquivo = fopen (filename, "wt");

    int x = 0;
    int y = 0;

    IO_fprintf(arquivo, "%d\n",rows);
    IO_fprintf(arquivo, "%d\n",columns);

    for ( x = 0; x < rows; x = x + 1){
        for(y = 0; y < columns; y = y + 1){
        //gravar o valor
        IO_printf( arquivo, "%d\n", matrix[x][y]);
    }
}
    
}

