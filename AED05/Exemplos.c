#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int multiplos_4 (int n){
int i;
int multiplo = 0;
    for ( i = 1; i <= n; i++){
        multiplo = 4 * i;
        printf("\n%d", multiplo);
    }
    return multiplo;
}

void metodo_01 (){
int n = 0;
int multiplo = 0;

printf("Digite uma quanrtidade de numeros a serem gerados: ");
scanf("%d", &n);

multiplo = multiplos_4(n);
}

void method_02a ( int x )
{
 int y = 1;
 int z = 2;

 while ( y <= x )
 {

 printf ( "\n%d: %d\n", y, z );

 z = z + 2;

 y = y + 1;
 } 
}

void metodo_02 (void)
{

    printf ("\n%s", "Metodo 02");
    method_02a ( 5 );
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

void method_03a ( int x )
{

 int y = 1; 
 int z = 0;

 while ( y <= x )
 {

 z = 2 * y;

 printf ( "\n%d: %d\n", y, z );

 y = y + 1;
 }
}

void metodo_03 (void)
{

    printf ("\n%s", "Metodo 03");
    method_03a ( 5 );
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

void method_04a ( int x )
{

 int y = x; 
 int z = 0;

 while ( y > 0 )
 {

 z = 2 * y;

 printf ( "\n%d: %d\n", y, z );

 y = y - 1;
 } 
}

void metodo_04 (void)
{

    printf ("\n%s", "Metodo 04");
    method_04a ( 5 );
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

void method_05a ( int x )
{

 int y = 0;

 for ( y = x; y > 0; y = y-1 )
 {

 printf ( "\n%d: %d\n", y, (2*y) );
 } 
}

void metodo_05 (void)
{

    printf ("\n%s", "Metodo 05");
    method_05a ( 5 );
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

int somarValores ( int x )
{

 int soma = 1;
 int y = 0; 

 for ( y = 1; y <= (x-1); y = y+1 )
 {

 printf ( "\n%d: %d\n", y, (2*y) );

 soma = soma + (2*y);
 } 

 return ( soma );
}

void metodo_06 (void)
{

    int soma = 0;

    printf ("\n%s", "Metodo 06");
    soma = somarValores ( 5 );
    printf ( "soma de pares = %d\n", soma );
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

double somarFracao1 ( int x )
{

 double soma = 1.0;
 double numerador = 0.0;
 double denominador = 0.0;
 int y = 0 ;

 for ( y = 1; y <= (x-1); y = y+1 )
 {

 numerador = 1.0;

 denominador = 2.0*y;

 printf ( "\n%d: %7.4lf/%7.4lf = %lf\n", y, numerador, denominador, (numerador/denominador) );

 soma = soma + (1.0)/(2.0*y);
 }

 return ( soma );
}

void metodo_07 (void)
{

    double soma = 0.0;

    printf ("\n%s", "Metodo 07");
    soma = somarFracao1 ( 5 );
    printf ( "soma de fracoes = %lf\n", soma );
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

double somarFracao2 ( int x )
{

 double soma = 1.0;
 double numerador = 0.0;
 double denominador = 0.0;
 int y = 0 ;

 printf ( "\n%d: %7.4lf/%7.4lf\n", 1, 1.0, soma );

 for ( y = 1; y <= (x-1); y = y+1 )
 {

 numerador = 2.0*y-1;

 denominador = 2.0*y;

 printf ( "%d: %7.4lf/%7.4lf = %lf\n", y+1, numerador, denominador, (numerador/denominador) );

 soma = soma + numerador / denominador;
 } 

 return ( soma );
}

void metodo_08 (void)
{

    double soma = 0.0;

    printf ("\n%s", "Metodo 08");
    soma = somarFracao2 ( 5 );
    printf ( "soma de fracoes = %lf\n", soma );
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

double somarFracao3 ( int x )
{

 double soma = 1.0;
 int y = 0 ; 

 printf ( "\n%d: %7.4lf/%7.4lf\n", 1, 1.0, soma );

 for ( y = 1; y < x; y = y+1 )
 {

 printf ( "\n%d: %7.4lf/%7.4lf = %7.4lf\n", y+1, (2.0*y), (2.0*y+1), ((2.0*y)/(2.0*y+1)) );

 soma = soma + (2.0*y)/(2.0*y+1);
 }

 return ( soma );
}

void metodo_09 (void)
{

    double soma = 0.0;

    printf ("\n%s", "Metodo 09");
    soma = somarFracao3 ( 5 );
    printf ( "soma de fracoes = %lf\n", soma );
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

int multiplicarValores ( int x )
{

 int produto = 1;
 int y = 0; 

 for ( y = 1; y <= x; y = y+1 )
 {

 printf ( "\n%d: %d\n", y, (2*y-1) );

 produto = produto * (2*y-1);
 } 

 return ( produto );
}

void metodo_10 (void)
{

    printf ("\n%s", "Metodo 10");
    printf ( "%s%d\n", "produto = ", multiplicarValores ( 5 ) );
    printf ("\n%s", "Aperte ENTER para continuar.");
    getchar ();
}

int main (int argc, char* argv [])
{
    int opcao = 0;
    
    do
    {
    
    printf ("\n%s", "Escolha um dos metodos.");
    printf ("\n%s", "Opcoes: ");
    printf ("\n%s", "0 - Terminar");
    printf ("\n%s", "1 - metodo_01 2 - metodo_02");
    printf ("\n%s", "3 - metodo_03 4 - metodo_04");
    printf ("\n%s", "5 - metodo_05 6 - metodo_06");
    printf ("\n%s", "7 - metodo_07 8 - metodo_08");
    printf ("\n%s", "9 - metodo_09 10 - metodo_10");
    printf ( "\n%s", "Opcao = " );
    scanf ("%d", &opcao); getchar ();
    printf ("\n%s%d", "A opcao digitada foi: ", opcao);

        switch (opcao)
        {
        case 0:
        break;
        
        case 1:
        metodo_01 ();
        break;

        case 2:
        metodo_02 ();
        break;

        case 3:
        metodo_03 ();
        break;

        case 4:
        metodo_04 ();
        break;

        case 5:
        metodo_05 ();
        break;

        case 6:
        metodo_06 ();
        break;

        case 7:
        metodo_07 ();
        break;

        case 8:
        metodo_08 ();
        break;

        case 9:
        metodo_09 ();
        break;

        case 10:
        metodo_10 ();
        break;
        
        default:
        printf ("\n%s", "\nERRO opcao invalida.");
        break;
        }
    } while (opcao != 0);
    
    printf ("\n%s", "Aperte ENTER para terminar.");
    getchar ();
    return (0);
}