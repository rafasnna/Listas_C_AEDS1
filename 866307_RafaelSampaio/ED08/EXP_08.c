#include <stdlib.h>
#include <stdio.h>
#include "io.h"


void printintArray(int n,int array[]){

int x = 0;

// mostrar valores no arranjo
//estrutura de repetição
for ( x = 0; x < n; x = x + 1){
    IO_printf("%2d: %d\n", x, array[x]);
}
}

void exe01 (){

int array [] = {1, 2, 3, 4, 5}; 

    IO_id("Arranjos part 01");
    printintArray(5,array); // quantas casas e posição 

    IO_pause("Pressione <enter> para continuar.");
}


void readintArray (int n, int array[]){

int x = 0;
int y = 0;
chars text = IO_new_chars(STR_SIZE);

for (x = 0; x < n; x = x + 1) {
    strcpy(text, STR_EMPTY);
    y = IO_readint(IO_concat(IO_concat(text, IO_toString_d(x)),":"));

    array[x] = y;
}
}

void exe02 (){

int n = 5;
int array [n];

    IO_id("Arranjos part 02");

    readintArray(n, array);

    IO_printf ("\n");
    printintArray(n,array);

    IO_pause("Pressione <enter> para continuar");
}

void fprintArray( chars fileName, int n, int array[]){

    FILE * arquivo = fopen (fileName, "wt");
    int x = 0;

    IO_fprintf(arquivo, "%d\n", n);

for (x = 0; x < n; x = x + 1){

    IO_fprintf(arquivo, "%d\n", array[x]);
}
fclose(arquivo);
}

void exe03 (){

int n = 5;
int array [n];

IO_id("Arranjo part 3");

    readintArray (n,array);

    IO_printf ("\n");
    fprintArray("ARRAY1.TXT",n,array);

    IO_pause("Pressione <enter> para continuar");
}

int freadArraySize(chars fileName){

int n = 0;

    FILE* arquivo = fopen (fileName, "rt");
    IO_fscanf(arquivo,"%d", &n);
    
    if( n <= 0){
        IO_println("ERRO: Valor invalido");
        n =0;
    }
    return(n);
}

void freadIntArray(chars fileName, int n, int array[]){

int x = 0;
int y = 0;

FILE* arquivo = fopen (fileName,"rt");


//ler quantidades de dados 
IO_fscanf(arquivo,"%d", &x);

    if(n <= 0 || n > x){
        IO_println("ERRO: Valor invalido.");
    }else{
        //ler e guardar valores em arranjo
        x = 0;
        while (! feof(arquivo)&& x < n){
            //ler valor
            IO_fscanf(arquivo,"%d", &y);
            array[x] = y;
            x = x + 1;
        }
    }
}

void exe04(){

int n = 0;

    IO_id("Arranjo parte 04");

    n = freadArraySize("ARRAY1.TXT");

    if(n <= 0){
        IO_printf("\nErro: Valor invalido.\n");
    }else{
        //definir armazenador
        int array [n];
        //ler dados
        freadIntArray("ARRAY1.TXT",n,array);
        //mostrar dados
        IO_printf("\n");
        printintArray(n,array);
    }
    IO_pause("Pressione <enter> para continuar");
}
// copyIntArray - copiar arranjo com valores inteiros.
/** 
   copyIntArray      - Copiar arranjo com valores inteiros. 
   @param n           - quantidade de valores 
   @param copy     - copia do grupo de valores inteiros 
   @param array     - grupo de valores inteiros */

void copyIntArray(int n, int copy [], int array[]){

int x = 0;
int y = 0;

    if (n <= 0 ){
        IO_println("ERRO: Valor invalido");
        n = 0;
    }else{
        //copiar valores em arranjo
        for ( x = 0; x < n; x = x + 1){
            copy [x] = array [x];
        }
    }
}

void exe05(){

int n = 0;

    IO_id("Arranjos parte 05");
    //ler a quantidade de dados
    n = freadArraySize("ARRAY1.TXT");
    if (n <= 0){
        IO_printf("\nErro: Valor invalido.\n");
    }else{
        int array[n];
        int other[n];

        freadIntArray("ARRAY1.TXT", n, array);

        copyIntArray(n,other,array);
        //mostrar dados
        IO_printf ("\nOriginal\n");
        printintArray(n,array);
        //mostrar dados 
        IO_printf("\nCopia\n");
        printintArray(n,other);
    }
    IO_pause("Pressione <enter> para continuar");
}

/** 
   sumIntArray    - Somar valores em arranjo com inteiros. 
   @return            - soma dos valores 
   @param n        - quantidade de valores 
   @param array  - grupo de valores inteiros 
 */

int sumIntArray(int n, int array[]){
    int soma = 0;
    int x    = 0;

    for (x = 0; x < n; x = x + 1){
        soma = soma + array [x];
    }
    return(soma);
}

void exe06(){

int n = 0;

    IO_id ("Arranjos parte 06");

    n = freadArraySize("ARRAY1.TXT");

    if ( n <=0){
        IO_printf("\nERRO: Valor invalido.\n");
    }else{

    int array [n];
        freadIntArray("ARRAY1.TXT",n,array);

        IO_printf("\nSoma = %d\n", sumIntArray(n,array));
    }
    IO_pause("Pressione <enter> para continuar.");
}
bool isAllZeros (int n, int array[]){
    //definir dados locais
    bool result = true; 
    int x       = 0;

    x = 0;
    while(x < n && result){
        result = result && (array [x] == 0);
        x = x + 1;
    }
return (result);
}
void exe07(){

int n = 5;

int array1[] = {0,0,0,0,0};
int array2[] = {1,2,3,4,5};
int array3[] = {1,2,0,4,5};

    IO_id("Arranjos parte 07");

IO_println("\nArray1");
printintArray(n,array1);
IO_printf("isAllZeros(array1) = %d", isAllZeros(n,array1));

IO_println("\nArray2");
printintArray(n,array2);
IO_printf("isAllZeros(array2) = %d", isAllZeros(n,array2));

IO_println("\nArray3");
printintArray(n,array3);
IO_printf("isAllZeros(array3) = %d", isAllZeros(n,array3));

IO_pause("Pressione <enter> para continuar");

}

void addIntArray(int n, int array3[],int array1[],
                     int k, int array2[])        {

int x = 0;

    for( x = 0; x < n; x = x + 1){
        array3[x]= array1 [x] + k * array2 [x];
    }
}

void exe08 (){

int n = 0;

    IO_id("\nArranjos parte 08");

    n = freadArraySize("ARRAY1.TXT");
    if(n <= 0){
        IO_printf("\nERRO; Valor invalido.\n");
    }else{
        int array [n];
        int other [n];
        int sum   [n];

        freadIntArray("ARRAY1.TXT",n,array);

        copyIntArray(n,other,array);

        IO_printf("\nORIGINAL\n");
        printintArray(n, array);

        IO_printf ("\nCopia\n");
        printintArray(n,other);

        addIntArray(n,sum,array, (-2),other);

        IO_printf("\nSoma\n");
        printintArray(n,sum);
    }
    IO_pause("Pressione <enter> para continuar.");
}

bool isEqual (int n, int array1[], int array2[]){

bool result = true;
int x = 0;

x = 0;

while( x < n && result){
    result = result && ( array1[x] == array2[x]);
    x = x + 1;
}
return(result);
}

void exe09(){

int n = 0;

    IO_id("Arranjos parte 09");

    n = freadArraySize("ARRAY1.TXT");
    if(n <= 0){
        IO_printf("\nERRO: Valor Invalido.\n");
    }else{
        int array [n];
        int other [n];

        freadIntArray("ARRAY1.TXT", n, array);

        copyIntArray( n, other, array);
        IO_printf("\nORIGINAL\n");
        printintArray(n,array);

        IO_printf("\nCOPIA\n");
        printintArray(n,other);

        IO_printf("\nIGUAIS = %d\n", isEqual(n, array, other));

        other [0] = (-1) * other[0];
        IO_printf("\nCopia alterada\n");
        printintArray(n, other);

        IO_printf ("\nIGUAIS = %d\n", isEqual(n, array, other));
    }
    IO_pause("Pressione <enter> para finalizar");
}

bool searchArray(int value, int n, int array[]){

bool result = false;
int x = 0;

//mostrar valores no arranjo
x = 0; 
    while( x < n && !result){
        //testar valor
        result = (value == array[x]);
        x = x + 1;
    }

    return (result);
}

void exe10(){

int n = 0;
int value = 0;

    IO_id("Arranjos parte 10");

n = freadArraySize("ARRAY1.TXT");

    if (n <= 0){
        IO_printf("\nERRO: Valor invalido.\n");
    }else{
        int array [n];
        freadIntArray("ARRAY1.TXT",n,array);
        IO_printf("\nORIGINAL\n");
        printintArray(n,array);
        //mostrar resultados de procuras
        value = array [0];

        IO_printf("\nProcurar por (%d) = %d\n",
                    value, searchArray(value, n, array));

        value = array [n / 2];

        IO_printf("\nProcurar por (%d) = %d\n",
                    value, searchArray(value, n, array));

        value = array [n - 1];

        IO_printf("\nProcurar por (%d) = %d\n",
                    value, searchArray(value, n, array));
        
        value = (-1);

        IO_printf("\nProcurar por (%d) = %d\n",
                    value, searchArray(value, n, array));

}
    IO_pause("Pressione <enter> para continuar.");
}




int main()
 {
    int op = 0;

    printf("0 - Terminar\n");
    printf("1 - ARRANJOS EX_01\n");
    printf("2 - ARRANJOS EX_02\n");
    printf("3 - ARRANJOS EX_03\n");
    printf("4 - ARRANJOS EX_04\n");
    printf("5 - ARRANJOS EX_05\n");
    printf("6 - ARRANJOS EX_06\n");
    printf("7 - ARRANJOS EX_07\n");
    printf("8 - ARRANJOS EX_08\n");
    printf("9 - ARRANJOS EX_09\n");
    printf("10 - ARRANJOS EX_10\n");

    printf("%s\n", "Qual a opcao?");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        exe01();
        break;
    case 2:
        exe02();
        break;
    case 3:
        exe03();
        break;
    case 4:
        exe04();
        break;
    case 5:
        exe05();
        break;
    case 6:
        exe06();
        break;
    case 7:
        exe07();
        break;
    case 8:
        exe08();
        break;
     case 9:
        exe09();
        break;
    case 10:
        exe10();
        break; 
    default:
        break;
    }
 }