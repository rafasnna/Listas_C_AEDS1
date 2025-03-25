#include <stdio.h>
#include <stdlib.h>
#include "io.h"

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

    n = IO_readint("Entre com um inteiro: ");
    mult3(n);
    IO_pause("Pressione <enter> para finalizar");
}
int main() {
    at01();
    return 0;
}


 
/* 02.) Incluir função e método (0512) para: 
para ler uma quantidade inteira do teclado e, mediante um procedimento, 
testar a função para gerar valores múltiplos de 3 e 5 em ordem crescente. 
 
Exemplo:  n = 5 => { 15, 30, 45, 60, 75 } */



 
/* 03.) Incluir função e método (0513) para: 
para ler uma quantidade inteira do teclado e, mediante um procedimento, 
testar a função para gerar potências de 4 em ordem decrescente. 
 
Exemplo:  n = 5 => { 1024, 256, 64, 16, 4 } */



 
/* 04.) Incluir função e método (0514) para: 
para ler uma quantidade inteira do teclado e, mediante um procedimento, 
testar a função para gerar valores crescentes nos denominadores  
(sequência dos inversos) múltiplos de 3. 
 
Exemplo:  n = 5 => { 1/3, 1/6, 1/9, 1/12, 1/15 } */



 
/* 05.) Incluir função e método (0515) para: 
para ler um valor real real (x) do teclado; 
para ler uma quantidade inteira do teclado e, mediante um procedimento,  
testar a função para gerar valores pares crescentes nos denominadores 
da sequência: 1 1/x2 1/x4 1/x6 ... 
DICA: Usar da biblioteca <math.h> a função pow ( x, y ) para calcular a potência. 
 
Exemplo:  n = 5 => { 1, 1/x2, 1/x4, 1/x6, 1/x8 } */



 
/* 06.) Incluir função e método (0516) para 
calcular a soma dos primeiros valores positivos começando no valor 3, 
múltiplos de 3 e não múltiplos de 4. 
Testar essa função para quantidades diferentes e mostrar os resultados em outro método. 
 
Exemplo:  n = 5 => 3 + 6 + 9 + 15 + 18 */



 
 
 
/* 07.) Incluir função e método (0517) para 
calcular a soma dos inversos (1/x) dos primeiros valores positivos, 
começando no valor 4, múltiplos de 4 e não múltiplos de 5. 
Testar essa função para quantidades diferentes e  
mostrar os resultados em outro método. 
 
Exemplo:  n = 5 => 1/4 + 1/8 + 1/12 + 1/16 + 1/24 */




 
/*08.) Incluir função e método (0518) para 
calcular a soma da adição dos primeiros números naturais começando no valor 5. 
Testar essa função para quantidades diferentes de valores e  
mostrar os resultados em outro método. 
 
Exemplo:  n = 5 => 5 + 6 + 8 + 11 + 15 */





 
/* 09.) Incluir função e método (0519) para  
calcular a soma dos quadrados dos números naturais começando no valor 25. 
Testar essa função para quantidades diferentes de valores e 
e mostrar os resultados em outro método. 
 
Exemplo:  n = 5 => 25 + 36 + 49 + 64 + 81*/ 




 
/* 10.) Incluir função e método (Exemplo0520) para  
calcular a soma dos inversos (1/x) das adições de números naturais terminando no valor 3. 
Testar essa função para quantidades diferentes de valores 
e mostrar os resultados em outro método. 
 
Exemplo:  n = 5 => 1/13 + 1/9 + 1/6 + 1/4 + 1/3 */









 
 
//Tarefas extras 
 
 
/* E1.) Incluir função e método (Exemplo05E1) para  
ler um número inteiro do teclado (n) e,  
mediante o uso da função, calcular e mostrar o fatorial desse valor em outro método: 
 
n! = n * (n-1) * (n-2) * ... * 3 * 2 * 1  se n>0*/
 
/*E2.) Incluir função e método (Exemplo05E2) para 
ler uma quantidade inteira do teclado (n) e,  
mediante o uso da função, calcular e mostrar o resultado em outro método de 
 
f ( n ) = (1+2/3!) * (1+4/5!) * (1+6/7!) * ... */