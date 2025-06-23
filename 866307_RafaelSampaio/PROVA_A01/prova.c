// Rafael de Sena Sampaio - 866307 (Refação)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "io.h"

void question_01 (void){

int n = 5; 
int x = 4; 
int y = n; 
int z = 0;

while ( z < y ){

    x = x + 4*z + 1;

    if ( x % 7 == 0){

        y = y + 1; 

    }
    else
    {
        printf ("\n %d", x);
    }
    z = z + 1;
    }

    
}// 95

void question_02 ( void ){

char s [] = "a+2*3-D45+(b+c)/e;";

int x = 0;

for ( x = strlen(s)/2; x <strlen(s); x = x + 1){

    if ('A' <= s[x] && s[x] <= 'Z'){

        printf("%c", s[x]); x = x + 2;}
    }
}// Outra resposta, era impossivel sair algum resultado

int f_03 (int x){

int y = x;

    if(x % 2 == 0) y = f_03(x-1);
    else if (x > 2) y = y+f_03(x-2);
    return (y);

}

void question_03(){

    printf ("f_03(%d) = %d\n",9,f_03(9));
    getchar();
} //25

void question_04(){

int n = 9876789, x = 0, y = 0, z = 0, p = 1;

    while(p <= n){ p = p*10; z = z + 1; } p = p/10; z=z/2;
    while(x <z){
        if(n/p == n% 10){ y = y + 1; n = n%p/10; p = p/100; x = x + 1;}
    else x = z;
    }
    printf("%s %d\n","y= ", y);
    printf("%s %d", "z= ", z);

}// y = 3, z = 3;
void question_05 (){

    int n=5, y=3, x=1, impar=1;
    printf("%d\t%d\n",x,y);
    x=x+1;
    while( x<=n){
        y = y+ impar; 
        printf("%d\t%d\n",x,y);
        impar = 2 * x -1;
        x = x+1; 
    }/* 1       3
        2       4
        3       7
        4       12
        5       19*/

}
bool is_Multiple_of_7(int valor) {
    
    if (valor == -14 || valor == -7 || valor == 0) {
        return true;
    } 
    else if (valor > 0) {
        return is_Multiple_of_7((valor / 10) - (valor % 10 * 2));
    }
    
    return false;
}

void question_06() 
{
    int valor=0;
    
    printf("Questao 6 - aberta\n");
    printf("Entre com um valor: ");
    scanf("%d", &valor);
    
    if (is_Multiple_of_7(valor)) { 
        printf("Valor %d e' multiplo de 7.\n", valor);
    } else { 
        printf("Valor %d nao e' multiplo de 7.\n", valor);
    }
}

double sum (int n)
{
    double result = 0.0;
    double ante= 0.0;
    double diff =0.0;
    int x=0;

    for(x=1; x<=n+1; x=x+1)
    {
        ante = result;
        if(x%2 == 0)
        {
            result = result - (1.0/x) ;
        }
        else
        {
            result = result + (1.0/x) ;

        }

        diff = ante - result;
        if (diff < 0)
        {
        diff = -diff;
        }
        

       printf("O termo %d = %.4lf e a diferenca entre ele e o proximo %.4lf \n", x, result,diff);
    }

    return result;
}




void question_07 ()
{
    int n=0;
    double x=0;
    double soma=0.0;
    IO_printf("Questao 7 - aberta\n");
    n = IO_readint("Entre com uma quantidade:");
    x= sum(n);
    soma = x;
    printf("Soma total com %d termos: %.6lf\n", n, soma);

}

bool parequema (char* palavra1, char* palavra2)
{
    int t1 = strlen(palavra1);
    int t2 = strlen(palavra2);
    bool result = false;
    
    if (t1 >= 1 && t2 >= 1)
    {
        if (palavra1[t1 - 1] == palavra2[0])
        {
            printf("%c e %c são ....\n", palavra1[t1 - 1], palavra2[0]);
            result = true;
        }
    }

    if (t1 >= 2 && t2 >= 2)
    {
        if (palavra1[t1 - 2] == palavra2[0] &&
            palavra1[t1 - 1] == palavra2[1])
        {
            printf("2 letras repetem: %c%c\n", palavra1[t1 - 2], palavra1[t1 - 1]);
            result = true;
        }
    }
    
    return result;
}

void question_08 ()
{
    char palavra1[100];
    char palavra2[100];

    printf("Entre com a primeira palavra: ");
    while (getchar() != '\n'); // Clear input buffer
    fgets(palavra1, sizeof(palavra1), stdin);
    palavra1[strcspn(palavra1, "\n")] = '\0'; // Remove newline character
    
    printf("Entre com a segunda palavra: ");
    fgets(palavra2, sizeof(palavra2), stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0'; // Remove newline character

    if (parequema(palavra1, palavra2))
    {
        printf("\nSao parequema (silabas iguais)\n");
    }
    else
    {
        printf("\nNao sao parequema\n");
    }
}


int main() {
    int opcao = 0;

    do {
        
        printf("\nOpcoes:\n");
        printf("0 - Sair");
        printf("\n1 - Q01");
        printf("\n2 - Q02");
        printf("\n3 - Q03");
        printf("\n4 - Q04");
        printf("\n5 - Q05");
        printf("\n6 - Q06");
        printf("\n7 - Q07");
        printf("\n8 - Q08");
       // printf("\n9 - Q09");

        opcao = printf("\nEscolha uma opcao: ");
                scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                break;
            case 1:
                question_01();
                break;
            case 2:
                question_02();
                break;
            case 3:
                question_03();
                break;
            case 4:
               question_04();
                break;
             case 5:
               question_05();
                break;
            case 6:
               question_06();
                break;
            case 7:
               question_07();
                break;
            case 8:
               question_08();
                break;
           /* case 9:
               question_09();
                break;*/
           /* default:
                printf("Opção inválida!");*/
        }
    } while (opcao != 0);

    return 0;
}
