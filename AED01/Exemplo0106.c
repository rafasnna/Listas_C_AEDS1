#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void method_01 ( void ){

int x = 0;
    printf ( "\n%s\n", "Method_01 - Programa = v0.7" );
    printf ( "\n%s%d\n", "x = ", x );
    printf ( "&%s%p\n" , "x = ", &x );
    printf ( "Entrar com um valor inteiro: " );
    scanf ( "%d", &x );
    getchar ( );

    printf ( "%s%i\n", "x = ", x );
    printf ( "\n\nApertar ENTER para continuar." );
    getchar( );
} 

void method_02 ( void ){

    double x = 0.0;
    printf ( "\n%s\n", "Method_02 - Programa - v0.7" );
    printf ( "\n%s%lf\n", "x = ", x );
    printf ( "Entrar com um valor real: " );
    scanf ( "%lf", &x );
    getchar ( );
    printf ( "%s%lf\n", "x = ", x );
    printf ( "\n\nApertar ENTER para continuar.\n" );
    getchar( );
}

void method_03 ( void ){

    char x = 'A';
    printf ( "\n%s\n", "Method_03 - Programa - v0.7" );
    printf ( "\n%s%c\n", "x = ", x );
    printf ( "Entrar com um caractere: " );
    scanf ( "%c", &x );
    getchar ( );
    printf ( "%s%c\n", "x = ", x );
    printf ( "\n\nApertar ENTER para continuar.\n" );
    getchar( );
    return ( 0 );
}

void method_04 ( void ){

    bool x = false;
    int y = 0;
    printf ( "\n%s\n", "EXEMPLO0104 - Programa - v0.7" );
    printf ( "\n%s%d\n", "x = ", x );
    printf ( "Entrar com um valor logico: " );
    scanf ( "%d", &y );
    getchar ( );
        x = (y!=0);
        printf ( "%s%d\n", "x = ", x );
        printf ( "\n\nApertar ENTER para continuar.\n" );
        getchar( );
} 

void method_05 ( void ){

    char x [80] = "abc";
    char *px = &x[0];
    printf ( "\n%s\n", "Method_05 - Programa - v0.7" );
    printf ( "\n%s%s\n", "x = ", x );
    printf ( "Entrar com uma cadeia de caracteres: " );
    scanf ( "%s", x );
    getchar ( );
    printf ( "%s%s\n", "x = ", x );
    printf ( "Entrar com outra cadeia de caracteres: " );
    scanf ( "%s", px );
    getchar ( );
    printf ( "%s%s\n", "x = ", px );
    printf ( "\n\nApertar ENTER para continuar.\n" );
    getchar( );
} 

void method_06 ( void ){

    int x = 0;
    int y = 0;
    int z = 0;
    int *py = &y;
    printf ( "\n%s\n", "Method_06 - Programa - v0.7" );
    printf ( "%s%d\n", "x = ", x );
    printf ( "%s%i\n" , "y = ", y );
    printf ( "Entrar com um valor inteiro: " );
    scanf ( "%d", &x );
    getchar ( );
    printf ( "Entrar com outro valor inteiro: " );
    scanf ( "%i", py );
    getchar ( );
    z = x * y;
    printf ( "%s(%i)*(%i) = (%d)\n", "z = ", x, y, z );
    printf ( "\n\nApertar ENTER para continuar.\n" );
    getchar( );
} 

int main ( int argc, char* argv [ ] ){

int opcao = 0;

printf ( "%s\n", "Exemplo0100 - Programa = v0.7" );
printf ( "%s\n", "Autor: Rafael de Sena Sampaio" );
printf ( "\n" );

do{
    printf ( "\n%s\n", "Opcoes:");
    printf ( "\n%s" , "0 - Terminar" );
    printf ( "\n%s" , "1 - Method_01" );
    printf ( "\n%s" , "2 - Method_02" );
    printf ( "\n%s" , "3 - Method_03" );
    printf ( "\n%s" , "4 - Method_04" );
    printf ( "\n%s" , "5 - Method_05" );
    printf ( "\n%s" , "6 - Method_06" );
    printf ( "\n" );
    printf ( "\n%s", "Opcao = " );
    scanf ( "%d", &opcao );
    getchar( );
    printf ( "\n%s%d", "Opcao = ", opcao );

        switch ( opcao ){
            case 0: break;
            case 1: method_01 ( ); break;
            case 2: method_02 ( ); break;
            case 3: method_03 ( ); break;
            case 4: method_04 ( ); break;
            case 5: method_05 ( ); break;
            case 6: method_06 ( ); break;
            default: printf ( "\nERRO: Opcao invalida.\n" );break;
        } 
}

while ( opcao != 0 );
printf ( "\n\nApertar ENTER para terminar." );
getchar( );
return ( 0 );

} 

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao      Teste
0.1          01. ( OK )
0.2          01. ( OK )

Data
__/__
Modificacao
esboco
---------------------------------------------- testes
Versao
0.0
Teste  00.7 ( _OK_ )
identificacao de programa
*/