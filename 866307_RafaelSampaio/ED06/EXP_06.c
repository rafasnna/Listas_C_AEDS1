#include <stdio.h>
#include <stdlib.h>
#include "io.h"

void REa (int x){
    if(x > 0){
        IO_printf("%s%d\n","Valor= ", x);
        REa(x - 1);
    }
}

void recurs01(){

int quantidade = 0;
int valor      = 0;
int controle   = 0;

    IO_id("01 -Mostrar certa quantidade de valores recursivamente.\n");
    REa(5);

    IO_pause("Pressione <enter> para continuar");

}

void REa2(int x){

    if (x > 0 ){
        REa2(x - 1);
    IO_printf("%s%d\n","Valor = ",x);
    }
}

void recurs02(){

IO_id("02 -Mostrar certa quantidade de valores recursivamente.\n");
    REa2(5);

    IO_pause("Pressione <enter> para continuar");
}

void REa3 (int x){

    if(x - 1){
        REa3(x - 1);// motor de recursividade
        IO_printf("%s%d\n","Valor = ", x);
    }else{ // base de recursividade
        IO_printf("%ss\n","Valor = 1");
    }
}

void recurs03(){
    IO_id("03 - Mostrar certa quantidade de valores recursivamente.\n");

    REa3(5);
    IO_pause("Pressione <enter> para continuar");
}

void REa4(int x){

    if(x > 1){
        REa4(x - 1);
        IO_printf("%s%d\n", "Valor = ", 2*(x - 1));
    }else{
        IO_printf("%s\n", "Valor = 1");
    }
}

void recurs04 (){

    IO_id("04 -Mostrar certa quantidade de valores recursivamente.\n");

    REa4(5);
    IO_pause("Pressione <enter> para continuar");
}

void REa5(int x){ 

    if(x > 1){
        REa5(x - 1);
        IO_printf("%d: %d/%d\n", x,(2*(x - 1)),(2*(x - 1)+1));
    }else{
        IO_printf("%d: %d\n", x, 1);
    }
}

void recurs05(){

IO_id("05 - Mostrar certa quantidade de valores recursivamente.\n");

    REa5(5);

    IO_pause("Pressione <enter> para continuar.");
}

double SF(int x){

double soma = 0.0;

    if( x > 1 ){
        soma = (2.0*( x - 1 ) ) / (2.0* (x - 1) +1)+ SF (x - 1);
    
        IO_printf("%d: %lf/%lf\n",x,(2.0*(x - 1)),(2.0*(x- 1)+1));
    }else{
        soma = 1.0;
        IO_printf("%d: %lf\n", x, 1.0);
    }
    return(soma);
}

void recurs06 (){

double soma = 0.0;

    IO_id("06 -Somar certa quantidade de fracoes recursivamente.");
    soma = SF(5);

    IO_printf("soma = %lf\n", soma);

    IO_pause("Pressione <enter> para continuar");
}

double SF2b (int x, double soma, double numerador, double denominador){

    IO_id("Ele soma certa quantidade de fracoes recursivamente.\n");
    if (x > 0){
        IO_printf("%d:%lf/%lf\n", x, numerador,denominador);
        //somar o atual e passar pro proximo 
        soma = SF2b( x - 1,      
                     soma + ((1.0*numerador) / denominador),
                     numerador + 2.0,
                     denominador+2.0);
    }
    return(soma);
}

double SF2a(int x){

double soma = 0.0;

    if( x > 0){
        IO_printf("%d: %lfzn",x,1.0);
        soma  = SF2b( x - 1, 1.0,2.0,3.0);
    }
    return (soma);
}

void rescurs07(){

double soma = 0.0;

    IO_id("Somar certa quantidade de fracoes. Funcao de servico para preparar e disparar o mecanismo recursivo.");

    soma = SF2a(5);
    IO_printf("soma = %lf\n, soma");

    IO_pause("Pressione <enter> para finalizar");
}

int contdigit (int x){

int resposta = 1;

    if(x >= 10){
        resposta = 1 + contdigit(x/10); //motor 1
    }else{
        if (x < 0){
        resposta =     contdigit(-x);   // motor 2
        }
    }
    return(resposta);
}

void recurs8 (){

    IO_id("8 - Recursao");

   
    IO_printf("digitos(%3d) = %d\n", 123, contdigit(123));
    IO_printf("digitos(%3d) = %d\n",  1 , contdigit(1));
    IO_printf("digitos(%3d) = %d\n", -10, contdigit(-10));

    IO_pause("Pressione <enter para continuar");
}

int fibo (int x){

int resposta = 0;

    if(x == 1 || x == 2){
        resposta = 1;
    }else{
        if(x > 1){
            //fazer de novo com valor absoluto
            resposta = fibo (x-1) + fibo(x-2);
        }
    }
return(resposta);
}

void recurs9(){
    
    IO_id("9 Rescursao");

    IO_printf("fibo(%d) = %d\n", 1, fibo(1));
    IO_printf("fibo(%d) = %d\n", 2, fibo(2));
    IO_printf("fibo(%d) = %d\n", 3, fibo(3));
    IO_printf("fibo(%d) = %d\n", 4, fibo(4));
    IO_printf("fibo(%d) = %d\n", 5, fibo(5));

    IO_pause("Pressione <enter> para continuar");
}

int contmin(chars cadeia, int x){

int resposta = 0;

    if(0 <= x && x < strlen(cadeia)){
        if(cadeia[x] >= 'a' && cadeia [x] <= 'z'){
            resposta = 1;
        }
        resposta = resposta + contarMinusculas(cadeia, x+1);
    }
return(resposta);
}

void recurs10(){

    IO_id("10  Recursao");

    IO_printf("Minusculas(\"abc\",0) = %d\n", contmin("abc", 0));
    IO_printf("Minusculas(\"aBc\",0) = %d\n", contmin("aBc", 0));
    IO_printf("Minusculas(\"AbC\",0) = %d\n", contmin("AbC", 0));

IO_pause("Pressione <enter> para continuar");

}

int main (){
    
    int opcao = 0;

    IO_id("atvoma = 1.0;");
    
       do
       {
        
        printf ( "%s", "Qual a opcao? " );
        scanf  ( "%d", &opcao ); getchar( );
        
        IO_printf ( "%s%d\n", "opcao = ", opcao );
        
        switch ( opcao )
        {
           case  0: /* nada */     break;
           case  1: recurs01 ( ); break;//decrescente
           case  2: recurs02 ( ); break;//crescente
           //case  3: recurs03 ( ); break;
           //case  4: recurs04 ( ); break;
           //case  5: recurs05 ( ); break;
           //case  6: recurs06 ( ); break;
           //case  7: recurs07 ( ); break;
           //case  8: recurs08 ( ); break;
           //case  9: recurs09 ( ); break;
           //case 10: recurs10 ( ); break;
           default: IO_printf ( "\n%s\n",
                           "Nao sei oque e isso.\n\n" );
            break;
        }
       } while ( opcao != 0 );
    // encerrar
    IO_pause("\nPressione <enter> para finalizar.");
    
	return ( 0 );
}
// 01 saida
/*01 -Mostrar certa quantidade de valores recursivamente.

Autor: Rafael Sampaio


Valor= 5
Valor= 4
Valor= 3
Valor= 2
Valor= 1*/

// 02 saida
/*02 -Mostrar certa quantidade de valores recursivamente.

Autor: Rafael Sampaio


Valor = 1
Valor = 2
Valor = 3
Valor = 4
Valor = 5*/