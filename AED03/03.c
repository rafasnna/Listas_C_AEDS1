/*
Exemplo0300 - v0.3 - 31/08/2024
Autor: Rafael de Sena Sampaio
*/
#include <stdio.h>
#include <string.h>
#include "io.h"

/**
 Method_01
 */
void Method_01_RNI (void)
{
int x =0;

IO_id ("Method_01 - Estudo dirigido 0301 - v0.3");

x = IO_readint ("Entrar com uma quantidade:");
while ( x> 0)
{
IO_printf("Ola, mundo!");
x=x-1;
}
IO_pause("Apertar ENTER para continuar");
}

/**
Method_02
 */
void Method_02_RNI ( void )
{

int x = 0;
int y = 0;
IO_id ( "Method_02 -Estudo dirigido 0302 - v0.3" );
x = IO_readint ( "Entrar com uma quantidade: " );
y = x; 
while ( y > 0 )
{
IO_println ( IO_toString_d ( x ) );
y = y - 1;
} 
IO_pause ( "Apertar ENTER para continuar" );
}

/**
 Method_03
 */
void Method_03_RNI (void)
{
int x = 0;
int y = 0;

IO_id("Method_0303 - Estudo Dirigido - v0.3");
x = IO_readint ("Entrar com uma quantidade:");

//repetir (x) vezes
y=1;
while (y <= x)
    {
    //mostrar valor atual
    IO_printf("%d\n",y);
    //passas ao proximo valor
    y = y +1;
    }   
    IO_pause("Apertar ENTER continuar:");
}

/**
Method_04
 */

void Method_04_RNIV (void)
{
// definir dado
int x = 0;
int y = 0;
int z = 0;

IO_id("Method_04 - Estudo dirigido 0304 - v0.3");

x = IO_readint ("Entrar com uma quantidade: ");
//repetir (x) vezes
for ( y =1; y<=x;y=y+1)
{
z= IO_readint ("Valor=");
IO_printf("%d. %d\n",y,z);
}
IO_pause("Apertar ENTER para continuar.");
}

/**
Method_05
 */

void Method_05_RNIV (void)
{
int x =0;
int y =0;
int z =0;

IO_id("Method_04 - Estudo dirigido 0305 - v0.3");
x = IO_readint ("Entrar com uma quantidade:");

for (y =x; y>=1;y=y-1)
{
z= IO_readint ("Valor=");
IO_printf ("%d.%d\n",y,z);
}
IO_pause("Apertar ENTER para continuar.");
}

/**
Method_06
*/

void method_06_RCC (void)
{
int x = 0;
int y = 0;

__SIGNED_CHARS__ palavra = IO_new_chars (STR_SIZE);
int tamanho = 0;

IO_id("Method_06 - Estudo dirigido 0306 - v0.3");

palavra = IO_readstring ("Entrar com uma palavra:");
tamanho = strlen (palavra) -1;

for ( y = tamanho; y >= 0; y = y-1)
{
IO_printf ("%d.[%c]\n",y,palavra[y]);
}
IO_pause("Apertar ENTER para continuar.");
}
/**
Method_07
*/

void Method_07_RCC (void)
{
int x =0;
int y =0;

char palavra [STR_SIZE];
int tamanho = 0;

IO_id (" Method_07 - Estudo dirigido 0307 - v0.3");

IO_printf("Entrar com uma palavra: ");
scanf ("%s",palavra);
getchar();
tamanho = strlen (palavra);

for (y = 0; y < tamanho; y= y + 1)
{
IO_printf("%d: [%c]\n",y, palavra[y]);
}
IO_pause("Apertar ENTER para continuar");
}

/**
Method_08
*/

void Method_08_RI (void)
{
int inferior = 0;
int superior =0;
int x =0;

IO_id("Method_08 - Estudo dirigido 0308 - v0.3");

inferior = IO_readint ("Limite inferior do intervalo: ");
superior = IO_readint ("Limite superior do interalo: ");

for (x = inferior; x<= superior; x= x +1);
{
IO_printf("%d\n",x);
}
IO_pause("Apertar ENTER para continuar.");
}


/**
Method_09
 */

void Method_09_RI (void)
{
double inferior =0;
double superior =0;
double passo =0;
double x =0;

IO_id("Method_09 - Estudo dirigido 0309 - v0.3");

inferior = IO_readdouble("Limite inferior do intervalo");
superior = IO_readdouble("Limite superior do intervalo");
passo = IO_readdouble("Variacao no intervalo(passo):");

for (x = superior; x>= inferior; x= x -passo)
{
IO_printf("%lf\n",x);
}
IO_pause("Apertar ENTER para continuar");
}

/**
Method_10
 */
void Method_10_RC (void)
{
double inferior =0;
double superior =0;
double passo =0;
double x =0;

IO_id("Method_10 - Estudo Dirigido 0310 - v0.3");

inferior = IO_readdouble ("Limite inferior do intervalo:");

do
{
 superior = IO_readdouble ("Limite superior do intervalo");
}
while (inferior >=superior);
do
{
passo = IO_readdouble ("Variacao no intervalo (passo):");
}
while (passo <= 0.0);

for ( x = inferior; x <=superior; x= x + passo)
{
IO_printf("%lf\n",x);
}
IO_pause ("Apertar ENTER para continuar");
}


int main ( void )
{
int x =0;

do
{
IO_id("Exemplo0300 - Estudo dirigido0 = v0.3" );
//ler teclado 

IO_println ( "Opcoes:" );
IO_println ( "0 - Parar"  );
IO_println ("1 - Repeticao com teste no inicio" );
IO_println ("2 - Repeticao com teste no inicio" );
IO_println ("3 - Repeticao com teste no inicio" );
IO_println ("4 - Repeticao com teste no inicio e variacao");
IO_println ("5 - Repeticao com teste no inicio e variacao");
IO_println ("6 - Repeticao sobre cadeia de caracteres.");
IO_println ("7 - Repeticao sobre cadeia de caracteres.");
IO_println ("8 - Repeticao com intervalos");
IO_println ("9- Repeticao com intervalos");
IO_println ("10 - Repeticao com confirmacao");
x = IO_readint("Entrar com uma opcao:");

switch ( x )
{
case 0: /* nao fazer nada */ break;
case 1: Method_01_RNI ( ); break;
case 2: Method_02_RNI ( ); break;
case 3: Method_03_RNI ( ); break;
case 4: Method_04_RNIV( ); break;
case 5: Method_05_RNIV( ); break;
case 6: method_06_RCC( ); break;
case 7: Method_07_RCC( ); break;
case 8: Method_08_RI( ); break;
case 9: Method_09_RI( ); break;
case 10: Method_10_RC ( ); break;
default: // comportamento padrao
IO_pause ( IO_concat ( "Valor diferente das opcoes [0,1] (",
IO_concat ( IO_toString_d ( x ), ")" ) ) );
break;
} // end switch
}
while ( x != 0 );
// encerrar
IO_pause("Apertar ENTER para terminar");
}