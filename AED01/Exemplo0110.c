#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "io.h"

void method_01 ( void ){

int x = 0;
    printf ( "\n%s\n", "Method_01 - Programa = v0.11" );
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
    printf ( "\n%s\n", "Method_02 - Programa - v0.11" );
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
    printf ( "\n%s\n", "Method_03 - Programa - v0.11" );
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
    printf ( "\n%s\n", "EXEMPLO0104 - Programa - v0.11" );
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
    printf ( "\n%s\n", "Method_05 - Programa - v0.11" );
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
    printf ( "\n%s\n", "Method_06 - Programa - v0.11" );
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

void method_07 ( void )
{
// definir dados
char x [80] = "abc"; // definir variavel com tamanho e valor inicial
char y [80] = "def"; // definir variavel com tamanho e valor inicial
char z [80];
// definir variavel com tamanho inicial
strcpy ( z, "" );
// e copiar para (z) a representacao de vazio
// identificar
printf ( "\n%s\n", "Method_07 - Programa - v0.0" );
// mostrar valores iniciais e comprimentos das cadeias
printf ( "%s%s (%d)\n", "x = ", x, strlen( x) );
printf ( "%s%s (%d)\n", "y = ", y, strlen( y) );
// OBS.: O formato para int -> %d (ou %i)
// ler do teclado
printf ( "Entrar com caracteres: " );
scanf ( "%s", x );
// OBS.: Nao indicar o endereco -> &
getchar ( );
// OBS.: Limpar a entrada de dados
printf ( "Entrar com outros caracteres: " );
scanf ( "%s", y );
// OBS.: Nao indicar o endereco -> &
getchar ( );
// OBS.: Limpar a entrada de dados
// operar valores
strcpy ( z, x );
strcat ( z, y );
// copiar (x) para (z)
// concatenar (juntar) (y) a (z)
// OBS.: Forma mais eficiente
// mostrar valor resultante
printf ( "%s[%s]*[%s] = [%s]\n", "z = ", x, y, z );
// operar valores (forma alternativa)
strcpy ( z, strcat ( strdup(x), y ) );
// copiar para (z)
// o resultado de concatenar
// a copia de (x) com (y)
// OBS.: Se nao duplicar, o valor (x) sera' alterado.
// mostrar valor resultante
printf ( "%s[%s]*[%s] = [%s]\n", "z = ", x, y, z );
// encerrar
printf ( "\n\nApertar ENTER para continuar.\n" );
getchar( );
// aguardar por ENTER
} // end method_07 ( )

void method_08 ( void )
{
// definir dados
double x = 0.0;
// definir variavel com valor inicial
double y = 0.0;
// definir variavel com valor inicial
double z = 0.0;
// definir variavel com valor inicial
// identificar
printf ( "\n%s\n", "Method_08 - Programa - v0.11" );
// mostrar valores iniciais
printf ( "%s%lf\n", "x = ", x );
printf ( "%s%lf\n", "y = ", y );
// OBS.: O formato para int -> %d (ou %i)
// ler do teclado
printf ( "Entrar com um valor real: " );
scanf ( "%lf", &x );
// OBS.: Necessario indicar o endereco -> &
getchar ( );
// OBS.: Limpar a entrada de dados
printf ( "Entrar com outro valor real: " );
scanf ( "%lf", &y );
// OBS.: Necessario indicar o endereco -> &
getchar ( );
// OBS.: Limpar a entrada de dados
z = pow( x, y );
// elevar a base (x) 'a potencia (y)
// mostrar valor resultante
printf ( "%s(%lf) elevado a (%lf) = (%lf)\n", "z = ", x, y, z );
// operar valores
x = pow( z, 1.0/y );
// elevar a base (x) 'a potencia inversa de (y) (raiz)
// mostrar valor resultante
printf ( "%s(%lf) elevado a (1/%lf) = (%lf)\n", "z = ", z, y, x );
// operar valores
z = sqrt( x );
// raiz quadrada do argumento
// mostrar valor resultante
printf ( "%sraiz(%lf) = (%lf)\n", "z = ", x, z );
// encerrar
printf ( "\n\nApertar ENTER para continuar.\n" );
getchar( );
// aguardar por ENTER
} // end method_08 ( )

void method_09 ( void ){
// definir dados singulares
int
x = 0;
// definir variavel com valor inicial para guardar inteiro
double y = 3.5;
// definir variavel com valor inicial para guardar real
char z = 'A';
// definir variavel com valor inicial para guardar caractere (simbolo)
bool w = false;
// definir variavel com valor inicial para guardar falso ou verdadeiro
// definir dados com mais de um valor
char s [80] = ""; // definir espaco de armazenamento para ate' 80 caracteres (simbolos)
// identificar
printf ( "\n%s\n", "Method_09 - Programa - v0.11" );
printf ( "01. %s%d\n" , "x = ", x );
printf ( "02. %s%lf\n" , "y = ", y );
printf ( "03. %s%c\n" , "z = ", z );
// converter entre tipos de dados (type casting)
x = (int) z;
// codigo inteiro equivalente ao caractere
printf ( "04. %s%d -> %c\n" , "x = ", x, z );
x = (int) y;
// parte inteira de real
printf ( "05. %s%d -> %lf\n", "x = ", x, y );
x = 97;
z = (char) x;
// símbolo equivalente ao codigo inteiro
printf ( "06. %s%c -> %d\n" , "z = ", z, x );
x = (int) '0';
// codigo inteiro equivalente ao caractere
z = (char) x;
// caractere equivalente ao codigo inteiro
printf ( "07. %s%c -> %d\n" , "z = ", z, x );
x = w;
// codigo inteiro equivalente ao logico
printf ( "08. %s%d -> %d\n" , "x = ", x, w );
w = true;
x = w;
// codigo inteiro equivalente ao logico
printf ( "09. %s%d -> %d\n" , "x = ", x, w );
x = (w==false);
// equivalente 'a comparacao de igualdade (true igual a false)
printf ( "10. %s%d -> %d\n" , "x = ", x, w );
x = ! (w==false);
// equivalente ao contrario da comparacao de valores (true igual a false)
printf ( "11. %s%d -> %d\n" , "x = ", x, w );
x = (w!=false);
// equivalente 'a comparacao de diferenca (true diferente de false)
printf ( "12. %s%d -> %d\n" , "x = ", x, w );
w = (x == 0);
// equivalente 'a comparacao de igualdade entre (x) e zero
printf ( "13. %s%d == %d = %d\n" , "w = ", x, 0, w );
w = (x != 0);
// equivalente 'a comparacao de diferenca entre (x) e zero
printf ( "14. %s%d != %d = %d\n" , "w = ", x, 0, w );
w = (x < y);
// equivalente 'a comparacao entre (x) e (y)
printf ( "15. %s%d < %lf = %d\n" , "w = ", x, y, w );
w = (x <= y);
// equivalente 'a comparacao entre (x) e (y)
printf ( "16. %s%d <= %lf = %d\n" , "w = ", x, y, w );
w = (y > x);
// equivalente 'a comparacao entre (x) e (y)
printf ( "17. %s%lf > %d = %d\n" , "w = ", y, x, w );
w = (y >= x);
// equivalente 'a comparacao entre (x) e (y)
printf ( "18. %s%lf >= %d = %d\n" , "w = ", y, x, w );
x = 4;
w = (x % 2 == 0);
// equivalente a testar se é par ou
// resto inteiro (%) da divisao por 2 igual a zero
printf ( "19. %s (%d%%2) ? %d\n" , "e' par ", x, w );
x = 4;
w = (x % 2 != 0);
// equivalente a testar se é ímpar ou
// resto inteiro (%) da divisao por 2 diferente de zero
printf ( "20. %s (%d%%2) ? %d\n" , "e' impar ", x, w );
z = '5';
w = ('0'<=z && z<='9');
// equivalente a testar se e' algarismo/digito
// pertence a [‘0’:’9’] (é igual ou esta’ entre ‘0’ e ‘9’)
printf ( "21. %s (%c) ? %d\n" , "e' digito", z, w );
z = 'x';
w = ('a'<=z && z<='z');
// equivalente a testar se e' letra minuscula,
// pertence a [‘a’:’z’] (é igual ou esta’ entre ‘a’ e ‘z’)
printf ( "22. %s (%c) ? %d\n" , "e' minuscula ", z, w );
z = 'X';
w = ( ! ('a'<=z && z<='z' ) );
// equivalente a testar se NAO (!) e' letra minuscula
printf ( "23. %s (%c) ? %d\n" , "nao e' minuscula ", z, w );
z = 'x';
w = ('A'<=z && z<='Z');
// equivalente a testar se e' letra maiuscula
printf ( "24. %s (%c) ? %d\n" , "e' maiuscula ", z, w );
z = 'X';
w = ( (z < 'A') || ('Z' < z) );
// equivalente a testar se NAO e' letra maiuscula,
// esta’ fora do intervalo [’a’:’z’], ou e’ menor que ‘a’ ou e’ maior que ‘z’
printf ( "25. %s (%c) ? %d\n" , "nao e' maiuscula ", z, w );
z = '0';
w = ('0'==z || '1'==z);
// equivalente a testar se e' igual a '0' ou a '1'
printf ( "26. %s (%c) ? %d\n" , "e' 0 ou 1 ", z, w );
strcpy ( s, "zero" );
// copiar para (s) <- "zero" (NAO usar '=' com caracteres);
printf ( "27. palavra = %s\n", s );
w = (strcmp ( "zero", s ) == 0); // comparar se caracteres iguais (NAO usar '==' com caracteres);
// Nota: O resultado da comparação sempre devera' ser avaliado
printf ( "28. palavra == %s ? %d\n", s, w );
strcpy ( s, "um e dois" );
// copiar para (s) <- "outras palavras" (NAO usar '=' com caracteres);
printf ( "29. palavras = %s\n", s );
w = (strcmp ( "zero", s ) != 0); // comparar se caracteres diferentes (NAO usar '!=' com caracteres);


printf ( "30. palavra == %s ? %d\n", s, w );
// encerrar
printf ( "\n\nApertar ENTER para continuar." );
getchar( );
// aguardar por ENTER
} // end method_09 ( )

void method_10 ( void )
{
// definir dados
int
x = 5;
// definir variavel com valor inicial
double y = 3.5;
// definir variavel com valor inicial
char z = 'A';
// definir variavel com valor inicial
bool w = TRUE; // definir variavel com valor inicial
chars a = IO_new_chars(STR_SIZE); // definir variavel com tamanho inicial
chars b = IO_new_chars(STR_SIZE); // definir variavel com tamanho inicial
chars c = IO_new_chars(STR_SIZE); // definir variavel com tamanho inicial
// identificar
IO_id ( "Method 10 - Programa - v0.11" );
// concatenar (juntar) cadeias de caracteres
strcpy ( a, "abc" );
// atribuir a variavel (a) o valor constante ("abc")
strcpy ( b, "def" );
// OBS.: a atribuicao de cadeia de caracteres NAO usa (=)
IO_printf ( "\na = %s b = %s\n", a, b );
c = IO_concat ( a, b );
// alternativa melhor para a funcao nativa strcat (a,b)
IO_printf ( "\nc = [%s]+[%s] = [%s]\n", a, b, c );
strcpy ( a, "c = " );
strcpy ( c, STR_EMPTY );
// limpar a cadeia de caracteres
IO_printf ( "%s\n", IO_concat ( a, IO_toString_c ( z ) ) );
IO_println ( IO_concat ( "x = ", IO_toString_d ( x ) ) );
IO_println ( IO_concat ( "w = ", IO_toString_b ( w ) ) );
strcpy ( b, STR_EMPTY );
IO_print ( "y = " );
IO_print ( IO_concat ( b, IO_toString_f ( y ) ) );
IO_print ( "\n" );
z = IO_readchar ( "char = " );
IO_println ( IO_concat ( a, IO_toString_c ( z ) ) );
y = IO_readdouble ( "double = " );
IO_println ( IO_concat ( a, IO_toString_f ( y ) ) );
x = IO_readint ( "int= " );
IO_println ( IO_concat ( a, IO_toString_d ( x ) ) );
w = IO_readbool ( "bool = " );
IO_println ( IO_concat ( a, IO_toString_b ( w ) ) );
b = IO_readstring ( "chars = " );
IO_println ( IO_concat ( a, b ) );
b = IO_readln( "line= " );
IO_println ( IO_concat ( a, b ) );
// encerrar
IO_pause ( "Apertar ENTER para terminar" );
// chamar method para pausar
} // end method_10 ( )

int main ( int argc, char* argv [ ] ){

int opcao = 0;

printf ( "%s\n", "Exemplo0100 - Programa = v0.11" );
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
    printf ( "\n%s" , "7 - Method_07" );
    printf ( "\n%s" , "8 - Method_08" );
    printf ( "\n%s" , "9 - Method_09" );
    printf ( "\n%s" , "10 - Method_10" );
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
            case 7: method_07 (); break;
            case 8: method_08 (); break;
            case 9: method_09 (); break;
            case 10: method_10 (); break;
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
Teste  00.11 ( _OK_ )
identificacao de programa
*/