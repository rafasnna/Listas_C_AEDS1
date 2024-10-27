#include <stdio.h> //para as entradas e saidas
#include <stdlib.h> //para outras funcoes de uso geral
#include<stdbool.h> // para valores logicos
                    // Nota: Em alguns compiladores pode haver problemas
                    // com relacao a essa biblioteca, caso acontecer
                    // considerar o uso de definicoes alternativas 
#include <string.h>


/**
 * 
  Method_01
 */
void method_01 (void)
{
    //definir dado
    int x = 0; // definir variavel com valor inicial

    //identificar
 printf("%s\n", "Method_01 - Programa v0.3");
    // mostrar valor inicial
    printf ("\n%s%d\n","x=",x);
                  //OBS.: O formato para int -> %d(ou%i)
    printf ("&%s%p\n","x=",&x);
                  //OBS.: O formato para endereco -> %p)
   // ler do teclado
   printf ("\nEntrar com um valor inteiro: ");   
   scanf("%d",&x);
                 //OBS.:Necessario indicar o endereco -> &
   getchar();   //OBS.: Limpar a entrada de dados

// mostrar valor lido
printf ("%s%i\n", "x =", x);


  // encerrar 
  printf("\nApertar ENTER para continuar.\n");
  getchar ();
} //end method_01 ()


/*
Funcao principal.
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo com o grupo de paramentros na linha de comandos
*/
int main( int argc, char* argv []) 
{
    // definir dado
    int opcao = 0;

    // identificar
    printf ("%s\n", "Exemplo0102 - Programa =v0.1");
    printf ("%s\n", "Autor:Rafael Sampaio");
    printf ( "\n" ); // mudar de linha

    // acoes
    // repetir
    do
{
    // para mostrar opcoes
    printf ("\n%s\n", "Opcoes:" );
    printf ("\n%s" , "0 - Terminar");
    printf ("\n%s" , "1 - Method_01");
    // ler a opcao do teclado
    printf ( "\n%s", "Opcao = " );
    scanf ( "%d", &opcao );
    getchar( ); // para limpar a entrada de dados
    // para mostrar a opcao lida
    printf ( "\n%s%d", "Opcao = ", opcao );
    // escolher acao dependente da opcao
    switch ( opcao )
    {
    case 0: // nao fazer nada
    break;
    case 1: // executar method_01
    method_01 ( );
    break;
    default: // comportamento padrao
        printf ( "\nERRO: Opcao invalida.\n" );
    break;
    } // end switch
}
while ( opcao != 0 );
// encerrar
printf ( "\n\nApertar ENTER para terminar." );
getchar( ); // aguardar por ENTER
return 0; // voltar ao SO (sem erros)
} // end main ( )

/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 9/2024 esboco
---------------------------------------------- testes
Versao Teste
0.0 01. ( OK ) identificacao de programa
*/



