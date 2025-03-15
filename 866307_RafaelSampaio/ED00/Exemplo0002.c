/*
Exemplo0001 - v0.3. - __ / __ / _____
Author: Rafael Sampaio
Para compilar em terminal (janela de comandos):
Linux : gcc -o exemplo0000 exemplo0000.c
Windows: gcc -o exemplo0000 exemplo0000.c
Para executar em terminal (janela de comandos):
Linux : ./exemplo0002
Windows: ./exemplo0002
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
int opcao = 0;
// identificar
printf ( "%s\n", "Exemplo0002 - Programa = v0.3" );
printf ( "%s\n", "Autor: Rafael Sampaio" );
printf ( "\n" ); // mudar de linha
// acoes
//ler opcoes do teclado
printf("\n%s","Opcao= "); // (mostramos a mensagem e logo abaixo pedimos a resposta)
scanf("%d",&opcao); // (apos pegar a resposta ele armazena no inteiro (Opcao))
getchar(); // para limpar a entrada de dados
// o (\n) é a quebra de linha 

//para mostrar a opcao lida
printf("\n%s%d","Opcao =", opcao);
// encerrar 
printf ( "\n\nApertar ENTER para terminar." );
getchar( ); // aguardar por ENTER
return ( 0 ); // voltar ao SO (sem erros)
} // end main ( )