/*
Exemplo0200 - v0.0. - 05 / 09 / 2024
Author:Rafael de Sena Sampaio

*/
// dependencias
#include<stdio.h>
#include<stdlib.h>

#include "IO.h"// bibliotecas e outras definicoes
/**
Method_01.
*/
void method_01 ( void )
{
int x=0
// identificar
;IO_id( "Method_01 - Programa - v0.0" );
//ler do teclado
 x =IO_readint ("Entre com um valor inteiro:");
 //testar valor 
 if (x==0);
 {
 IO_printf("%s(%d)\n","Valor igual a zero",x);
 }
 if (x !=0)
 {
 IO_printf("%s(%d)\n","Valor diferente de zero",x);
 }
// encerrar
IO_pause( "\nApertar ENTER para continuar.\n" );
} // end method_01 ( )

/*
Method_02
*/

void method_02 (void)
{
int x = 0; 

IO_id("Method_02 - Programa - v0.0");

x = IO_readint ("Entrar com um valor inteiro:");
if (x==0)
{
IO_printf("%s(%d)\n","Valor igual a zero", x);
}
else
{
IO_printf("%s(%d)\n", "Valor diferente de zero", x);
}
IO_pause("Apertar ENTER para continuar");
}




/*
Method_03
*/

void method_03 (void)
{
int x =0;

IO_id ("Method_03 - Programa - v0.0");

x =IO_readint ("Entra com um valor inteiro:");

if (x==0)
{
IO_printf("%s(%d)\n","Valor igual a zero",x);
}
else
{
IO_printf("%s(%d)\n","Valor diferente de zero",x);
if(x>0)
    {
    IO_printf("%s(%d)\n","Valor maior que zero",x);
}
else
{
IO_printf("%s(%d)\n","Valor menor que zero",x);
}
}
IO_pause("Apertar ENTER para continuar");
}

/*
Method_04
*/

void Method_04 (void)
{
double x =0.0;

IO_id ("EXEMPLO0204 - Programa - v0.0");

x=IO_readdouble("Entrar com um valor real");

if (1.0 <= x && x <=10.0)

{
IO_printf("%s(%d)\n","Valor dentro do intervalo [1:10]",x);
}
else 
{
IO_printf("%s(%d)\n","Valor fora do intervalo [1:10]",x);
if (x<1.0)
    {
    IO_printf("%s(%d)\n","Valor abaixo do intervalo [1:10]",x);
    }
    else 
    {
    IO_printf("%s(%d)\n","Valor acima do intervalo [1:10]",x);
    }
}
IO_pause("Apertar ENTER para continuar");
}

/*
method_05
*/
void Method_05 (void)
{
char x = 'A';

IO_id( "Method_05 - Programa - v0.0" );

x = IO_readchar ( "Entrar com um caractere: " );

if ( ('a' <= x) && (x <= 'z') )
{
IO_printf ( "%s (%c)\n", "Letra minuscula", x );
}
else
{
IO_printf ( "%s (%c)\n", "Valor diferente de minuscula", x );
if ( ('A' <= x) && (x <= 'Z') )
{
IO_printf ( "%s (%c)\n", "Letra maiuscula", x );
}
else
{
if ( ('0' <= x) && (x <= '9') )
{
IO_printf ( "%s (%c)\n", "Algarismo", x );
}
else
{
IO_printf ( "%s (%c)\n", "Valor diferente de algarismo", x );
} 
} 
} 

IO_pause ( "Apertar ENTER para continuar" );
}

/*
Method_06
*/

void Method_06 (void)
{
char x = '_';
IO_id("Method_06 - Programa - v0.0");

x = IO_readchar ("Entrar com um caractere:");

// testar valor
if ( ( 'a' <= x && x <= 'z' ) || 
( 'A' <= x && x <= 'Z' ) ) 
{
IO_printf("%s(%c)\n","Letra",x);
}
else
{
IO_printf("%s(%c)\n","Valor diferente de letra",x);
}
IO_pause("Apertar ENTER para continuar");
}

/*
Method_07
*/
/*
Method_07.
*/
void method_07 ( void )
{

char x = '_'; 

IO_id ( "Method_07 - Programa - v0.0" );

x = IO_readchar ( "Entrar com um caractere: " );

if ( ! ( ( 'a' <= x && x <= 'z' ) || 
( 'A' <= x && x <= 'Z' ) ) ) 
{
IO_printf ( "%s (%c)\n", "Valor diferente de letra", x );
}
else
{
IO_printf ( "%s (%c)\n", "Letra", x );
} 
IO_pause ( "Apertar ENTER para continuar" );
} 

/*
Method_08
*/

void Method_08 (void)
{
char x = '_';
//Identificar
IO_id("Method_08 - Programa - v0.0");

x= IO_readchar ("Entrar com um caractere ['0','A','a']:");

switch (x)
{
case '0': IO_printf("%s(%c)\n","Valor igual do simbolo zero",x,x); break;
case 'A': IO_printf("%s(%c)\n","Valor igual 'a letra A",x,x); break;
case 'a' : IO_printf("%s(%c)\n", "Valor igual 'a letra a",x,x); break;
default: IO_printf("%s(%c)\n","Valor diferente das opcoes ['0','A','a']: ",x,x);
}
IO_pause("Apertar ENTER para continuar");
}

/*
Method_09
*/

void Method_09 (void)
{
int x = 0;

IO_id("Method_09 - Programa - v0.0");

x = IO_readint("Entrar com valor inteiro [0,1,2,3]:");

switch (x)
{
case 0 : IO_printf("%s(%d)\n","Valor igual a zero",x); break;
case 1: IO_printf("%s(%d)\n","Valor igual a um",x); break;
case 2: IO_printf("%s(%d)\n", "Valor igual a dois",x); break;
case 3: IO_printf("%s(%d)\n","Valor igual a tres",x); break;
default: IO_printf("%s(%d)\n","Valor diferente das opcoes",x); break;
}
IO_pause("Apertar ENTER para continuar.");
}

/*
Method_10
*/

void Method_10 (void)
{
int x = 0;

IO_id ("Method_10 - Programa - V0.0");
x =IO_readint ("Entrar com um inteiro [0,1,2,3]:");

switch (x)
{
case 0:IO_println (IO_concat ("Valor igual a zero(", 
 IO_concat (IO_toString_d(x), ")\n")));
break;
case 1:
IO_println ( IO_concat ( "Valor igual a um (",
IO_concat ( IO_toString_d ( x ), ")\n" ) ) );
break;
case 2:
IO_println ( IO_concat ( "Valor igual a dois (",
IO_concat ( IO_toString_d ( x ), ")\n" ) ) );
break;
case 3:
IO_println ( IO_concat ( "Valor igual a três (",
IO_concat ( IO_toString_d ( x ), ")\n" ) ) );
break;
default: 

IO_println ( IO_concat ( "Valor diferente das opcoes [0,1,2,3] (",
IO_concat ( IO_toString_d ( x ), ")" ) ) );
}
IO_pause("Apertar ENTER para terminar.");
}




int main ( void )
{
// definir dado
int opcao = 0
// identificar
;printf( "%s\n", "Exemplo0200 - Programa = v0.0" );
printf ( "%s\n", "Autor: Rafael de Sena Sampaio");
// acoes
// repetir
do
{
// para mostrar opcoes
printf ("\n%s\n" , "Opcoes:" );
printf ("\n%s" , "0 - Terminar"  );
printf ("\n%s" , "1 - Metodo_01" );
printf ("\n%s" , "2 - Metod0_02" );
printf ("\n%s" , "3 - Metodo_03" );
printf ("\n%s" , "4 - Metodo_04" );
printf ("\n%s" , "5 - Metodo_05" );
printf ("\n%s" , "6 - Metodo_06" );
printf ("\n%s" , "7 - Metodo_07" );
printf ("\n%s" , "8 - Metodo_08" );
printf ("\n%s" , "9 - Metodo_09" );
printf ("\n%s" , "10 - Metodo_10" );



printf ( "\n" );
// ler a opcao do teclado
printf ( "\n%s", "Opcao = " );
scanf ( "%d", &opcao );
getchar( ); // para limpar a entrada de dados
// para mostrar a opcao lida
printf ( "\n%s%d", "Opcao = ", opcao );
// escolher acao dependente da opcao
switch ( opcao )
{
case 0: /* nao fazer nada */ break;
case 1: method_01 ( ); break;
case 2: method_02 ( ); break;
case 3: method_03 ( ); break;
case 4: Method_04 ( ); break;
case 5: Method_05 ( ); break;
case 6: Method_06 ( ); break;
case 7: method_07 ( ); break;
case 8: Method_08 ( ); break;
case 9: Method_09 ( ); break;
case 10: Method_10 ( ); break;

default: // comportamento padrao
printf ( "\nERRO: Opcao invalida.\n" );
break;
} // end switch
}
while ( opcao != 0 );
// encerrar
printf ( "\n\nApertar ENTER para terminar." );
getchar( ); // aguardar por ENTER
return ( 0 ); // voltar ao SO (sem erros)
}


 // end main ( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.0 00. ( ___ ) identificacao de programa
*/