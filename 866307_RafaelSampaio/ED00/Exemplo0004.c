
#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para as funcoes de sistema

/**
 * Metodo 1
 */
void method_01 (void)
{
    //identificar
    printf("%s\n", "\n- Metodo 01");
    //encerrar
    printf ( "\n\nApertar ENTER para terminar." );
    getchar( ); 
} //end method_01 ()

int main ( int argc, char* argv [ ])
{

int opcao = 0;

printf ( "%s\n", "Exemplo0004 - Programa = v0.5" );
printf ( "%s\n", "Autor: Rafael Sampaio" );
printf ( "\n" ); // mudar de linha

printf("\n%s\n", "Opcoes:");
printf("\n%s","0 - Terminar");
printf("\n%s","1 - Metodo 01");
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
    case 1: //executar metodo 01
        method_01();
        break;
    default: // comportamento padrão
        printf("\n Erro: Opcao invalida.\n");
    break;
} // end switch

// encerrar 
printf ( "\n\nApertar ENTER para terminar." );
getchar( ); 
return ( 0 ); 
} // end main ( )