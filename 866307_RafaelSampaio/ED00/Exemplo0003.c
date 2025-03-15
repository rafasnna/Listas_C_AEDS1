/*
Exemplo0001 - v0.4. - __ / __ / _____
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
printf ( "%s\n", "Exemplo0003 - Programa = v0.4" );
printf ( "%s\n", "Autor: Rafael Sampaio" );
printf ( "\n" ); // mudar de linha
// acoes
// para mostrar opcoes

printf("\n%s\n", "Opcoes:");
printf("\n%s","Terminar");
printf("\n");

//ler opcoes do teclado
printf("\n%s","Opcao = "); 
scanf("%d",&opcao); 
getchar(); 

//para mostrar a opcao lida
printf("\n%s%d","Opcao = ", opcao);

//escolher acao dependente da opcao
switch (opcao)
{
    case 0: // nao fazer nada
    break;
    default: // comportamento padrão
        printf("\n Erro: Opcao invalida.\n");
    break;
} // end switch

// encerrar 
printf ( "\n\nApertar ENTER para terminar." );
getchar( ); // aguardar por ENTER
return ( 0 ); // voltar ao SO (sem erros)
} // end main ()