#include <stdio.h>
#include <stdlib.h>
#include "io.h"
#include <math.h>

/* 01.) Incluir função e método (0511) para: 
para ler uma quantidade inteira (n) do teclado e, mediante um procedimento, 
testar a função para gerar valores múltiplos de 3 em ordem crescente. 
 
Exemplo:  n = 5 => { 3, 6, 9, 12, 15 } */

void mult3 (int n){

int multiplos = 3;

for (int i = 0; i < n; i++){
    if(i > 0){
        IO_printf(",");
    }   
    IO_printf("%d", multiplos);
    multiplos += 3;
}
    IO_printf("\n");
}

void at01 (){

int n = 0;

     IO_id("ATV= 1");

    n = IO_readint("Entre com um inteiro: ");
    mult3(n);
    IO_pause("Pressione <enter> para continuar");
}



 
/* 02.) Incluir função e método (0512) para: 
para ler uma quantidade inteira do teclado e, mediante um procedimento, 
testar a função para gerar valores múltiplos de 3 e 5 em ordem crescente. 
 
Exemplo:  n = 5 => { 15, 30, 45, 60, 75 } */

void mult3e5 (int n){

    int multiplos = 15;
    
    for (int i = 0; i < n; i++){
        if(i > 0){
            IO_printf(",");
        }   
        IO_printf("%d", multiplos);
        multiplos += 15;
    }
        IO_printf("\n");
    }

void at02 (){

int n = 0;

     IO_id("ATV= 2");

    n = IO_readint("Entre com um inteiro: ");
    mult3e5(n);

    IO_pause("Pressione <enter> para continuar");
}

 
/* 03.) Incluir função e método (0513) para: 
para ler uma quantidade inteira do teclado e, mediante um procedimento, 
testar a função para gerar potências de 4 em ordem decrescente. 
 
Exemplo:  n = 5 => { 1024, 256, 64, 16, 4 } */

void pot4 (int n){

int potencia = 1;

    for(int i = 0; i < n; i++){ // potencia 4
    potencia *= 4;
    }
    for(int i = n; i > 0; i--){ // formula descrescente
        if(i < n){
            IO_printf(",");
        }
        IO_printf("%d", potencia);
        potencia /= 4;
    }
    IO_printf("\n");
}

void at03(){

int n = 0;

     IO_id("ATV= 3");

    n = IO_readint("Entre com um inteiro: ");
    pot4(n);

    IO_pause("Pressione <enter> para continuar");
}


 
/* 04.) Incluir função e método (0514) para: 
para ler uma quantidade inteira do teclado e, mediante um procedimento, 
testar a função para gerar valores crescentes nos denominadores  
(sequência dos inversos) múltiplos de 3. 
 
Exemplo:  n = 5 => { 1/3, 1/6, 1/9, 1/12, 1/15 } */

void invmult3(int n){

int denom = 3; //denominador

    for (int i = 0; i < n; i++){//i é igual a 0, e i é menor que n, entao adicione 1 toda vez que rodar
        if(i > 0){// colocar virgula
            IO_printf(", ");
        }
        IO_printf("1/%d", denom);
        denom += 3;
    }
    IO_printf("\n");
}

void at04(){

int n = 0;

    IO_id("ATV= 4");

    n = IO_readint("Entre com um valor inteiro desejado: ");
    invmult3(n);

    IO_printf("Pressione <enter> para continuar");
}


 
/* 05.) Incluir função e método (0515) para: 
para ler um valor real real (x) do teclado; 
para ler uma quantidade inteira do teclado e, mediante um procedimento,  
testar a função para gerar valores pares crescentes nos denominadores 
da sequência: 1 1/x2 1/x4 1/x6 ... 
DICA: Usar da biblioteca <math.h> a função pow ( x, y ) para calcular a potência. 
 
Exemplo:  n = 5 => { 1, 1/x2, 1/x4, 1/x6, 1/x8 } */

void seq (int n, double x){

    IO_printf("Sequencia: ");

    for(int i = 0; i < n; i++){
        if(i > 0){
        IO_printf(", ");
        }
        if(i == 0){
        IO_printf("1");
        }else{
            double denom = pow(x, 2* i);
            IO_printf("1/%.2f", denom);
        }
    }
    IO_printf("\n");
}

void at05(){

double x = 0.0;
int    n = 0;

    IO_id("ATV= 5");

       x = IO_readdouble("Entre com o valor real: ");// vezes que voce quer apareça
       n = IO_readint("Entre com a quantidade de termos: "); //e sua potencia
       seq(x,n);
    IO_pause("Pressione <enter> para continuar.");
}
 
/* 06.) Incluir função e método (0516) para 
calcular a soma dos primeiros valores positivos começando no valor 3, 
múltiplos de 3 e não múltiplos de 4. 
Testar essa função para quantidades diferentes e mostrar os resultados em outro método. 
 
Exemplo:  n = 5 => 3 + 6 + 9 + 15 + 18 */

void sm3nm4 (int n){
    
int contador = 0;
int numero   = 3;
int soma     = 0;

    IO_printf("Valores: ");

    while (contador < n){
        if(numero % 3 == 0 && numero % 4 !=0){
            if(contador > 0){
                IO_printf(" + ");
            }
            IO_printf("%d", numero);
            soma += numero;
            contador++;
        }
        numero++;
    }
    IO_printf(" = %d\n", soma);
}

void at06 (){

int n = 0;

    IO_id("ATV= 6");

    n = IO_readint("Entre com a quantidade de valores: ");
        sm3nm4(n);

    IO_printf("Pressione <enter> para continuar");
} 
 
 
/* 07.) Incluir função e método (0517) para 
calcular a soma dos inversos (1/x) dos primeiros valores positivos, 
começando no valor 4, múltiplos de 4 e não múltiplos de 5. 
Testar essa função para quantidades diferentes e  
mostrar os resultados em outro método. 
 
Exemplo:  n = 5 => 1/4 + 1/8 + 1/12 + 1/16 + 1/24 */

void sm4nm5 (int n){
    
    int contador = 0;
    int numero   = 0;
    int soma     = 0;
    int controle = 1;
    
        IO_printf("Valores: ");
    
        while (contador < n)
        {
            numero= 4*controle;
            if(numero % 4 == 0 && numero % 5 !=0){
                IO_printf(" 1/%d ", numero);
                soma += numero;
                contador++;
            }
            controle++;
            
        }
        IO_printf(" = %d\n", soma);
    }
    
    void at07 (){
    
    int n = 0;

        IO_id("ATV= 7");

        n = IO_readint("Entre com a quantidade de valores: ");
            sm4nm5(n);
    
        IO_printf("Pressione <enter> para continuar");
    } 




 
/*08.) Incluir função e método (0518) para 
calcular a soma da adição dos primeiros números naturais começando no valor 5. 
Testar essa função para quantidades diferentes de valores e  
mostrar os resultados em outro método. 
 
Exemplo:  n = 5 => 5 + 6 + 8 + 11 + 15 */

void sn (int x)
{

 
int y=0;
int valor=5;
int soma=0;
int contador=0;

int adicional=1;

    while(contador<x)
    {
        valor    += valor;
        IO_printf("%d\n",valor);

        soma     += valor;
        contador +=1  ;
        y        += adicional;
    }
    IO_printf("soma: %d\n",soma);
}
void at08 (void)
{
    int n=0;
    IO_id("ATV= 8 ");
    n = IO_readint("Entre com uma quantidade: ");
    sn(n);
   
    IO_pause("Pressione <enter> para continuar");
}





 
/* 09.) Incluir função e método (0519) para  
calcular a soma dos quadrados dos números naturais começando no valor 25. 
Testar essa função para quantidades diferentes de valores e 
e mostrar os resultados em outro método. 
 
Exemplo:  n = 5 => 25 + 36 + 49 + 64 + 81*/ 

void quadrados(int x) {
    
int y = 0;
int valor = 25;
int contador = 0;
int soma = 0;

    while (contador < x) {
        valor = pow(5 + y, 2); 
        IO_printf("%d\n", valor);

        soma     += valor; 
        contador += 1;
        y += 1; 
    }
    IO_printf("soma = %d\n", soma);
}

void at09(void) {
    int n = 0;
    IO_id("ATV= 9");
    n = IO_readint("entre com uma quantidade: ");

    quadrados(n);

    IO_pause("Pressione <enter> para continuar");
}



 
/* 10.) Incluir função e método (Exemplo0520) para  
calcular a soma dos inversos (1/x) das adições de números naturais terminando no valor 3. 
Testar essa função para quantidades diferentes de valores 
e mostrar os resultados em outro método. 
 
Exemplo:  n = 5 => 1/13 + 1/9 + 1/6 + 1/4 + 1/3 */

void si (int n) {
    int contador = 0;
    int numero = 3;
    double soma = 0.0;

    IO_printf("valores: ");

    while (contador < n) {
        if (contador > 0) {
            IO_printf(" + ");
        }
        IO_printf("1/%d", numero);
        soma += 1.0 / numero;
        contador++;
        numero += (contador + 1); // proxima  soma
    }

    IO_printf(" = %.6f\n", soma);
}

void at10() {
    int n = 0;

    IO_id("ATV= 10");

    n = IO_readint("entre com a quantidade de valores: ");
    somaInversos(n);

    IO_pause("Pressione <enter> para continuar");
}


 
 
//Tarefas extras (pretendo ainda fazer extras!)
 
 
/* E1.) Incluir função e método (Exemplo05E1) para  
ler um número inteiro do teclado (n) e,  
mediante o uso da função, calcular e mostrar o fatorial desse valor em outro método: 
 
n! = n * (n-1) * (n-2) * ... * 3 * 2 * 1  se n>0*/
 
/*E2.) Incluir função e método (Exemplo05E2) para 
ler uma quantidade inteira do teclado (n) e,  
mediante o uso da função, calcular e mostrar o resultado em outro método de 
 
f ( n ) = (1+2/3!) * (1+4/5!) * (1+6/7!) * ... */



//MAIN
int main (){

int opcao = 0;
    
    IO_id("Programa - v0.0");
       do
       {
        // ler opcao do teclado
        printf ( "%s", "Escolha a opcao desejada? " );
        scanf  ( "%d", &opcao ); getchar( );
        printf ( "%s%d\n", "opcao = ", opcao );
        
        switch ( opcao )
        {
           case  0:            break;
           case  1: at01 ( ); break;
           case  2: at02 ( ); break;
           case  3: at03 ( ); break;
           case  4: at04 ( ); break;
           case  5: at05 ( ); break;
           case  6: at06 ( ); break;
           case  7: at07 ( ); break;
           case  8: at08 ( ); break;
           case  9: at09 ( ); break;
           case 10: at10 ( ); break;
           default: printf ( "\n%s\n",
                           "ERRO: Desisto\n\n" );
            break;
        }
       } while ( opcao != 0 );
    printf("%s\n", "\nApertar ENTER para terminar\n");
    getchar( );
	return ( 0 );
}