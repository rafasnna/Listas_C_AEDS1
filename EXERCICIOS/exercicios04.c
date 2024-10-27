/*
Tive ajuda dos meninos!
Exemplo0400 - v0.0 15/09/2024
Autor: Rafael de Sena Sampaio
*/

#include <stdio.h>
#include "io.h"

void exercicio_01 ()
{
    int quantidade = 0;
    int i = 0;
    float intervaloInferior = 0.0;
    float intervaloSuperior = 0.0;
    float valor = 0.0;
    int dentroIntervalo = 0;
    int foraIntervalo = 0;

    printf("\nDigite a quantidade de valores reais: ");
    scanf("%d", &quantidade);

    printf("\nDigite o valor do intervalo inferior: ");
    scanf("%f", &intervaloInferior);
    printf("\nDigite o valor do intervalo superior: ");
    scanf("%f", &intervaloSuperior);

    if (intervaloInferior > intervaloSuperior) {
        float temp = intervaloInferior;
        intervaloInferior = intervaloSuperior;
        intervaloSuperior = temp;
    }

    for (i = 0; i < quantidade; i++) {
        printf("Digite o valor real: ", i + 1);
        scanf("%f", &valor);

        if (valor >= intervaloInferior && valor <= intervaloSuperior) {
            dentroIntervalo++;
        } else {
            foraIntervalo++;
        }
    }

    printf("Quantidade de valores dentro do intervalo: %d\n", dentroIntervalo);
    printf("Quantidade de valores fora do intervalo: %d\n", foraIntervalo);
    IO_pause("Apertar ENTER para continuar");
    getchar();
}

void exercicio_02 ()
{
    
}

void exercicio_03 ()
{
    
}

void exercicio_04 ()
{
   
}

void exercicio_05 ()
{
    
}

void exercicio_06 ()
{
   
}

void exercicio_07 ()
{
  
}

void exercicio_08 ()
{

}

void exercicio_09 ()
{
 
}

void exercicio_10 ()
{
   
}

int main (void)
{
    int opcao = 0; 

    printf("%s\n", "Exemplo_0400 - Programa -v0.0"); 
    printf("%s\n", "Autor: Rafael de Sena Sampaio");
    printf("\n"); 

    do
    {
    
    printf("\n%s\n", "Opcoes:");
    printf("\n%s", "0 - Terminar");
    printf("\n%s", "1 - exercicio_01");
    printf("\n%s", "2 - exercicio_02");
    printf("\n%s", "3 - exercicio_03");
    printf("\n%s", "4 - exercicio_04");
    printf("\n%s", "5 - exercicio_05");
    printf("\n%s", "6 - exercicio_06");
    printf("\n%s", "7 - exercicio_07");
    printf("\n%s", "8 - exercicio_08");
    printf("\n%s", "9 - exercicio_09");
    printf("\n%s", "10 - exercicio_10");
    printf("\n");

    printf("\n%s", "Opcao = ");
    scanf("%d", &opcao);
    getchar(); 

    printf("\n%d", "Opcao = ", opcao);

    switch(opcao)
    {
        case 0: break;
        case 1: exercicio_01(); break;
        case 2: exercicio_02(); break;
        case 3: exercicio_03(); break;
        case 4: exercicio_04(); break;
        case 5: exercicio_05(); break;
        case 6: exercicio_06(); break;
        case 7: exercicio_07(); break;
        case 8: exercicio_08(); break;
        case 9: exercicio_09(); break;
        case 10: exercicio_10(); break;
        default:
        printf("\nERRO: Opcao invalida.\n"); break;
        } 
    }
    while(opcao!=0);

    printf("\n\nApertar ENTER para terminar.");
    getchar();
    return(0); 
}