/*
Exemplo0001 - v0.2. - __ / __ / _____
Author: Rafael Sampaio
Para compilar em terminal (janela de comandos):
Linux : gcc -o exemplo0000 exemplo0000.c
Windows: gcc -o exemplo0000 exemplo0000.c
Para executar em terminal
Linux : ./exemplo0001
Windows: exemplo0001
*/
// dependencias
#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para as funcoes de sistema
/*
Funcao principal.
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main ( int argc, char* argv [ ] )
{
// definir dados / resultados
// identificar
printf ( "%s\n", "Exemplo0001 - Programa = v0.2" );
printf ( "%s\n", "Autor: Rafael Sampaio" );
printf ( "\n" ); // mudar de linha
// acoes
// encerrar
printf ( "\n\nApertar ENTER para terminar." );
getchar( ); // aguardar por ENTER
return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )