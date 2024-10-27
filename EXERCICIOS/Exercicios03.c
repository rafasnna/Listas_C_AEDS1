/*
Exemplo0300 - v1.0. - 05 / 09 / 2024
Author: Rafael De Sena Sampaio
*/

#include "io.h"
#include <string.h>
#include <stdio.h>


void exercicio_0311 ( void ){
    char cadeia[80];
    int posicao = 0;
    int maiusculas = 0;
    
    IO_id("Exercicio_0311 - v1.0");
    printf("Entrar com uma palavra: ");
    scanf("%s", cadeia);
    getchar();
    printf("%s%d\n", "tamanho = ", (int) strlen(cadeia));
        for ( posicao = 0; posicao < strlen(cadeia); posicao = posicao + 1){
            printf("%d %c ", posicao, cadeia[posicao]);
                if ('A' <= cadeia[posicao] && cadeia[posicao] <= 'Z'){
                    printf("%s\n", "maisucula");
                    maiusculas = maiusculas + 1;
                }
                else{
                    printf("\n");
                }
                
        }
        printf("%s%d\n", "maiusculas = ", maiusculas);



}

void exercicio_0312(){
    int posicao = 0;
    int minusculas = 0;
    char cadeia[80];

        IO_id("Exercicio_0312 - v1.0");
        printf("Digite uma palavra: ");
        scanf("%s", cadeia); getchar();
        printf("%s%d\n", "tamanho = ", (int) strlen(cadeia));
            for (posicao = 0; posicao <= strlen(cadeia); posicao = posicao + 1){
                printf("%d %c ", posicao, cadeia[posicao]);
                if ('a' <= cadeia[posicao] && cadeia[posicao] <= 'z'){
                    printf("%s\n", "minuscula");
                    minusculas = minusculas + 1;
                }
                else{
                    printf("\n");
                }
                
            }
            printf("%s%d\n", "minusculas = ", minusculas);
}

void exercicio_0313(){
    int minusculas = 0;
    int posicao = 0;
    char cadeia[80];

        IO_id("Exercicio 0313");
        printf("Digite uma palavra: ");
        scanf("%s", cadeia);
        getchar();
        printf("%s%d\n", "tamanho = ", (int) strlen(cadeia));
            for (posicao = strlen(cadeia)-1; posicao >= 0; posicao = posicao - 1){
                printf("%d %c ", posicao, cadeia[posicao]);
            if ('a'<= cadeia[posicao] && cadeia[posicao] <= 'z'){
                printf("%s\n", "minuscula");
                minusculas = minusculas + 1;
            }
            else{
                printf("\n");
                }
            }
            printf("%s%d\n", "minusculas = ", minusculas);
}

void exercicio_0314(){
    int maiusculas = 0;
    int minusculas = 0;
    int posicao = 0;
    char cadeia[80];

    IO_id("Exercicio 0314");
    printf("Digite uma palavra: ");
    scanf("%s", cadeia);
    getchar();
    printf("%s%d\n", "tamanho = ", (int) strlen(cadeia));
        for (posicao=0; posicao<=strlen(cadeia); posicao = posicao + 1){
            printf("%d %c ", posicao, cadeia[posicao]);
                if ( 'A' <=cadeia[posicao] && cadeia[posicao] <= 'Z' ){
                    printf("maiuscula\n ");
                    maiusculas = maiusculas + 1;
                }
                else if ( 'a' <= cadeia[posicao] && cadeia[posicao] <= 'z' ){
                    printf("minuscula\n ");
                    minusculas = minusculas + 1;
                }
                else{
                    printf("\n");
                }
        }
        printf("%s%d\n\n", "minusculas = ", minusculas);
        printf("%s%d\n", "maiusculas = ", maiusculas);

}

void exercicio_0315(){
    int minusculas = 0;
    int maiusculas = 0;
    int posicao = 0;
    int numeros = 0;
    int alg_especial = 0;
    char cadeia[80];

        IO_id("Exercicio 0315");
        printf("Digite uma palavra: ");
        scanf("%s", cadeia);
        getchar();
        printf("%s%d\n", "tamanho = ", (int) strlen(cadeia));
            for (posicao = strlen(cadeia)-1; posicao >= 0; posicao = posicao - 1){
                printf("%d %c ", posicao, cadeia[posicao]);
            if ('a'<= cadeia[posicao] && cadeia[posicao] <= 'z'){
                printf("%s\n", "minuscula");
                minusculas = minusculas + 1;
            }
            else if ('A'<= cadeia[posicao] && cadeia[posicao] <= 'Z'){
                printf("%s\n", "maiuscula");
                maiusculas = maiusculas + 1;
            }
            else if ('0'<= cadeia[posicao] && cadeia[posicao] <= '9'){
                printf("%s\n", "algarismos");
                printf("\n");
                numeros = numeros + 1;
                }
            else{
                printf("%s\n", "Algarismo especial");
                alg_especial = alg_especial + 1;
            }
            }
            printf("%s%d\n", "minusculas = ", minusculas);
            printf("%s%d\n", "maiusculas = ", maiusculas);
            printf("%s%d\n", "numeros = ", numeros);
            printf("%s%d\n", "algarismos especiais = ", alg_especial);

}

void exercicio_0316(){

    int maiusculas = 0;
    int minusculas = 0;
    int simbolos = 0;
    int posicao = 0;
    char cadeia[80];

    IO_id("Exercicio 0316");
    printf("Digite uma palavra: ");
    scanf("%s", cadeia);
    getchar();
    printf("%s%d\n", "tamanho = ", (int) strlen(cadeia));
        for (posicao=0; posicao<=strlen(cadeia); posicao = posicao + 1){
            printf("%d %c ", posicao, cadeia[posicao]);
                if ('A' <=cadeia[posicao] && cadeia[posicao] <= 'Z'){
                    printf("\n");
                }
                else if ( 'a' <=cadeia[posicao] && cadeia[posicao] <= 'z' ){
                    printf("\n");
                }
                else if ('0'<= cadeia[posicao] && cadeia[posicao] <= '9'){
                    printf("\n");
                }
                else{
                    printf("%s\n", "simbolo");
                    simbolos = simbolos + 1;
                }
        }
        printf("%s%d\n\n", "simbolos = ", simbolos);

}

void exercicio_0317(){

    int a = 0; 
    int b = 0; 
    int n = 0;
    int i = 0;
    int valor = 0;
    int contagem = 0;

    printf("Digite o valor de A (limite inferior): ");
    scanf("%d", &a);
    printf("Digite o valor de B (limite superior): ");
    scanf("%d", &b);

    if (a > b) {
        printf("O valor de a deve ser menor ou igual a B.\n");
        IO_pause("Aperte ENTER para continuar");
    }

    printf("Digite a quantidade de valores a serem testados: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);

        if (valor % 5 == 0 && valor >= a && valor <= b) {
            contagem++;
            printf("  - multiplo de 5\n");
        }
    }

    printf("Quantidade de valores múltiplos de 5 e no intervalo [%d:%d]: %d\n", a, b, contagem);


}

void exercicio_0318(){

int a = 0;
int b = 0;
int n = 0;
int i = 0;
int contador = 0;
int valor = 0;

printf("Digite um valor de A (limite inferior do intervalo)");
scanf("%d", &a);
printf("Digite um valor de B (limite superior do intervalo)");
scanf("%d", &b);

    if (a > b){
    printf("\nO valor de A deve ser menor ou igual a B.");
    IO_pause("Aperte ENTER para continuar");
    }

    printf("Digite a quantidade de valores a serem testados no intervalo: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);

        if (valor >= a && b >= valor && valor % 3 == 0 && valor % 5 != 0){
            contador ++;
            printf("  - multiplo de 3 e nao multiplo de 5\n");
        }
    }
    printf("Quantidade de valores multiplos de 3 e nao multiplos de 5 no intervalo [%d:%d] : %d\n", a, b, contador);

}

void exercicio_0319(){

float a = 0.0;
float b = 0.0;
int n = 0;
int i = 0;
float valor = 0;
int contador = 0;

    printf("Digite um valor para A (limite inferior do intervalo): ");
    scanf("%f", &a);
    printf("Digite um valor para B (limite superior do intervalo): ");
    scanf("%f", &b);

    if (a > b){
        printf("ERRO: o limite A deve ser menor que o limite B");
        IO_pause("Aperte ENTER para encerrar");
    }
    
    printf("Digite a quantidade de valores a serem testados: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf("Digite o valor %d: ", i +1);
        scanf("%f", &valor);

        if (valor > a && b > valor && (int) valor % 2 != 0){
            contador ++;
            printf("  - parte inteira impar\n");
        }
    }
    printf("Quantidade de valores com a parte inteira impar no intervalo [%f:%f] : %d", a, b, contador);

}

void exercicio_0320(){

float a = 0;
float b = 0;
int n = 0;
int i = 0;
float valor = 0;
int contador = 0;

    printf("Digite um valor entre 0 e 1 para definir o inicio do intervalo: ");
    scanf("%f", &a);
    printf("Digite um valor entre 0 e 1 para definir o limite do intervalo: ");
    scanf("%f", &b);

        if (a >= 1 && 0 >= a){
            printf("ERRO: o valor de A deve estar entre 0 e 1.");
            IO_pause("Aperte ENTER para encerrar");
        }
        if (b >= 1 && 0 >= b){
            printf("ERRO: o valor de A deve estar entre 0 e 1.");
            IO_pause("Aperte ENTER para encerrar");
        }
        
        printf("Digite a quantidade de valores a serem testados: ");
        scanf("%d", &n);

        for (i = 0; i < n; i++){
            printf("Digite um valor %d: ", i + 1);
            scanf("%f", &valor);

              int parte_inteira = (int)valor;
              double parte_fracionaria = valor - (double)parte_inteira;

               if (parte_fracionaria < a || parte_fracionaria > b) {
            contador ++;
            printf("  - parte fracionaria fora do intervalo\n");
        }
        }
        printf("Quantidade de partes fracionarias fora do intervalo [%f:%f] : %d", a, b, contador);
        
}


int main ( ){
    int x = 0;
        do{
        IO_id ( "Exercicios 0300 - Programa - v0.0" );
        IO_println ( "Opcoes" );
        IO_println ( "0 - parar" );
        IO_println ( "1 - exercicio 0311" );
        IO_println ( "2 - exercicio 0312" );
        IO_println ( "3 - exercicio 0313" );
        IO_println ( "4 - exercicio 0314" );
        IO_println ( "5 - exercicio 0315" );
        IO_println ( "6 - exercicio 0316" );
        IO_println ( "7 - exercicio 0317" );
        IO_println ( "8 - exercicio 0318" );
        IO_println ( "9 - exercicio 0319" );
        IO_println ( "10 - exercicio 0320" );

        IO_println ( "" );
        x = IO_readint ( "Entrar com uma opcao: " );
            switch ( x ){
                case 0:  break;
                case 1: exercicio_0311 ( ); break;
                case 2: exercicio_0312 (); break;
                case 3: exercicio_0313 (); break;
                case 4: exercicio_0314 (); break;
                case 5: exercicio_0315 (); break;
                case 6: exercicio_0316 (); break;
                case 7: exercicio_0317 (); break;
                case 8: exercicio_0318 (); break;
                case 9: exercicio_0319 (); break;
                case 10: exercicio_0320(); break;
                default:
                IO_pause ( IO_concat ( "Valor diferente das opcoes [0,1] (",
                IO_concat ( IO_toString_d ( x ), ")" ) ) );
            }
}
while ( x != 0 );
IO_pause ( "Apertar ENTER para terminar" );
return ( 0 );
} 