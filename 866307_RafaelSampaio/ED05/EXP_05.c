#include <stdio.h>
#include <stdlib.h>
#include "io.h"

void exp01a(int x){

int y = 1; // será controle

    while(y <= x){
        IO_printf("%s%d\n", "Valor = ", y);
        y++;
    }

}
//Metodo 1 - Mostrar certa quantidade de valores

void exp01 (){

    IO_printf("Exemplo 1 - Mostrar certa quantidade de valores\n");
    exp01a(5);

    IO_pause("Pressione <enter> para finalizar");
    
}

void exp02a (int x){

int y = 1;
int z = 2;
    
    while(y <= x){
        IO_printf("%d: %d\n",y,z);
        z += 2;
        y++;
    }
}

void exp02 (){

IO_id("Exemplo 2 -  Mostrar certa quantidade de valores pares\n");
    exp02a(5);

    IO_pause("Pressione <enter> para finalizar");
    

}

void exp03a(int x){

int y = 1;
int z = 0;
    while (y <= x){
        z = 2 * y;
    
    IO_printf("%d: %d\n",y,z);
    y++;
    }
}

void exp03(){

IO_id("Exemplo 3 - Mostrar certa quantidade de valores pares.\n ");

    exp03a(5);

    IO_pause("Pressione <enter> para finalizar");
    
}

void exp04a (int x){

int y = x;
int z = 0;

    while (y > 0){
        z = 2 * y;
        IO_printf("%d: %d\n",y,z);
        y -= 1;
    }
}

void exp04 (){

    IO_id("Exemplo 4 - Mostrar certa quantidade de valores pares.\n");

    exp04a(5);

    IO_pause("Pressione <enter> para finalizar");
    
}

void exp05a(int x){

int y = 0;

    for (y = x; y > 0; y -= 1){

           IO_printf("%d: %d\n", y,(2*y));
    }
}

void exp05(){

    IO_id("Metodo 5 - Mostrar certa quantidade de valores pares.\n");

    exp05a(5);
    IO_pause("Pressione <enter> para finalizar");
    
}

int somarValores (int x){

int soma = 0;
int y    = 0;

for (y = 1; y <= (x-1); y = y + 1){
    IO_printf("%d: %d\n",y,(2*y));
    soma = soma + (2*y);
}
return(soma);
}

void exp06 (){

int soma = 0;

    IO_id("Exemplo 6 - Mostrar certa quantidade de valores pares.\n");

    soma = somarValores(5);

    IO_printf("soma de pares = %d\n",soma);
    IO_pause("Pressione <enter> para finalizar");
    

}

double somarFracao1(int x){

double soma = 1.0;
double numerador = 0.0;
double denominador = 0.0;
int y = 0;

for (y = 1; y <= (x-1); y++){
    numerador   = 1.0;
    denominador = 2.0*y;

    IO_printf("%d: %7.4lf/%7.4lf = %lf\n",
                y, numerador, denominador,(numerador/denominador));
    soma = soma + (1.0)/(2.0*y);
}
return (soma);
}

void exp07 (){

double soma = 0.0;

    IO_id("Exemplo 7 -  Funcao para somar certa quantidade de fracoes\n");
    soma = somarFracao1(5);

    IO_printf("soma de fracoes = %lf\n", soma);

    IO_pause("Pressione <enter> para finalizar");
    
}

double somarFracao2 (int x){

double soma        = 1.0;
double numerador   = 0.0;
double denominador = 0.0;
int    y           = 0;

    IO_printf("%d: %7.4lf/%7.4lf\n", 1, 1.0, soma);
    for(y = 1; y <= (x-1); y+1){
        numerador = 2.0*y-1;

        denominador = 2.0*y;

        IO_printf("%d: %7.4lf/%7.4lf = %lf\n", y+1, numerador, denominador, (numerador / denominador));

        soma = soma + numerador / denominador;
    }
    return (soma);
}

void exp08 (){

double soma = 0.0;

    IO_id("Exemplo 8 - funcao para somar certa quantidade de fracoes \n");

    soma = somarFracao2(5);

    IO_printf("soma de fracoes = %lf\n", soma);

    IO_pause("Pressione <enter> para finalizar");
    
}
    
double somarFracao3 (int x){

double soma = 1.0;
int    y    = 0;

    IO_printf("%d. %7.4lf/%7.4lf\n",1,1.0, soma);

for(y = 1; y < x; y = y+ 1){
    IO_printf("%d: %7.4lf/%7.4lf= %7.4lf\n", y+1,(2.0*y),(2.0*y+1),((2.0*y)/(2.0*y+1)));
soma = soma + (2.0*y)/(2.0*y+1);
}
return(soma);
}

void exp09 (){

double soma = 0.0;

    IO_id("EXEMPLO 9 - funcao para somar certa quantidade de fracoes\n");

    soma = somarFracao3(5);

    IO_printf("soma de fracoes = %lf\n",soma);

    IO_pause("Pressione <enter> para finalizar");
    

}

int multiplicarValores (int x){

int produto = 1;
int y       = 0;

for (y = 1; y <= x; y = y + 1){

    IO_printf("%d: %d\n", y,(2*y-1));

    produto = produto * (2*y-1);
}
return (produto);
}

 void exemplo10(){

    IO_id("EXEMPLO 10 -  funcao para multiplicar certa quantidade de valores impares.\n");

    IO_printf("%s%d\n","produto = ", multiplicarValores(5));

    IO_pause("Pressione <enter> para finalizar");
    
}

int main ( void )
{
    
    int opcao = 0;
    
    IO_id("PROGRAMA v5.0.");
    
       do
       {
       
        printf ( "%s", "Qual sua opcao desejada? 1 a 10..." );
        scanf  ( "%d", &opcao ); getchar( );
        
        printf ( "%s%d\n", "opcoes = ", opcao );
        
        switch ( opcao )
        {
           case  0:             break;
           case  1: exp01  ( ); break;
           case  2: exp02  ( ); break;
           case  3: exp03  ( ); break;
           case  4: exp04  ( ); break;
           case  5: exp05  ( ); break;
           case  6: exp06  ( ); break;
           case  7: exp07  ( ); break;
           case  8: exp08  ( ); break;
           case  9: exp09  ( ); break;
           case 10: exemplo10  ( ); break;
           default: printf ( "\n%s\n","Eu desisto :( Adeus \n\n" );
            break;
        }
       } while ( opcao != 0 );
    
    printf("%s\n", "\nPressionar <enter> para continuar\n");
    getchar( );
	return ( 0 );
}