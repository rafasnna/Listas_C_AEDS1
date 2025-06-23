#include <stdlib.h>
#include <stdio.h>
#define MAX 100

typedef struct parR {
    int N1;
    int N2;
} parR;

typedef struct parR* R_parR;

void metodo1() {
    int c = 0;
    int array[MAX];
    FILE* arquivo = fopen("DADOS_1.TXT", "rt");

    if (arquivo == NULL) {
        printf("\nNao e possivel prosseguir\npressione <enter> para continuar");
        getchar();
        return;
    }

   
    // Lendo os inteiros do arquivo corretamente
    for (int x = 0; x == 5; x++) 
    {
        if(c<MAX)
        {
        fscanf(arquivo,"%d\n", array[x]);
        c=c+1;
        }
    }

    fclose(arquivo); // Fecha o arquivo antes de usar os dados

    // Exibindo os valores lidos
    printf("\nDados lidos:\n");
    for (int y = 0; y < c; y++) {
        printf("%d\n", array[y]);
    }
}

/*
Funcao principal
@return codigo de encerramento
@param argc - quantidade de parametros na linha de comandos
@param argv - arranjo com o grupo de parametros na linha de comandos
*/

int main(int argc, char* argv[]) {
    int opcao = 0;

    printf("%s\n", "Exemplo0100 - Programa = v0.0");
    printf("%s\n", "Autor: Rafael Sampaio");
    printf("\n");

    do {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Metodo 1");
        printf("\n%s", "2 - Metodo 2");
        printf("\n%s", "3 - Metodo 3");
        printf("\n%s", "4 - Metodo 4");
        printf("\n%s", "5 - Metodo 5");
        
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);

        // Limpa o buffer de entrada para evitar problemas
        while (getchar() != '\n');

        printf("\n%s%d", "Opcao = ", opcao);

        switch (opcao) {
            case 0: break;
            case 1: metodo1(); break;
            default: printf("\nERRO: nenhuma opcao valida\n"); break;
        }
    } while (opcao != 0);

    printf("\n\n<enter> para fechar o programa");
    getchar();
    return 0;
}


/*
a) a
b) 4.2
c) 10
d) 1
e) abc def
f) abc def
*/