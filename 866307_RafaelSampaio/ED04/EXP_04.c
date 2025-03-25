#include <stdlib.h>
#include <stdio.h>
#include "io.h"

int ex1 (void){

int quantidade = 0;
int valor      = 0;
int controle   = 0;

IO_id("Metodo 1 - Programa v0.0");

quantidade = IO_readint("Entrar com uma quantidade: ");

controle = 1;
while(controle <= quantidade){
    valor = IO_readint(IO_concat(IO_concat("",IO_toString_d(controle)),": "));

    printf("\n%s%d","valor = ", valor);
    //passar ao proximo valor
    controle = controle + 1;
}
IO_pause("Pressione <enter> para finalizar.");
    getchar();
}

bool positive(int x){

bool result = false;

    if(x > 0){
        result = true;
    }

    return(result);
}

int ex2 (void){

int quantidade = 0;
int valor      = 0;
int controle   = 0;
int contador   = 0;

IO_id("Method02 - v0.2"); 

quantidade = IO_readint("Entrar com uma quantidade: ");

controle = 1;
while(controle <= quantidade){
    valor = IO_readint(IO_concat(IO_concat("",IO_toString_d(controle)),": "));
    if(positive(valor)){
        contador++;
    }
        controle++;
}
IO_printf("%s%d\n","Positivos = ", contador);

IO_pause("Pressione <enter> para continuar");
getchar();
}

bool belongsTo ( int x, int inferior, int superior )
{

// definir dado local
bool result = false;
// testar a condicao
if ( inferior < x && x < superior )
{
result = true;
} // end if
return ( result );
} // end belongsTo ( )

int ex3 (void){

int quantidade = 0;
int valor      = 0;
int controle = 0;
int contador = 0;

IO_id("Metodo 3 - 0.2");

    quantidade = IO_readint("Entrar com uma quantidade: ");

    controle = 1;
    while(controle <= quantidade){
        valor = IO_readint(IO_concat(IO_concat("",IO_toString_d(controle)),": "));
        
        if(belongsTo(valor,0,100)){
            contador = contador + 1;
        }//end if
        controle++;
    }
    IO_printf("%s%d\n","Positivos menores que 100 = ", contador);
    IO_pause("Pressione <enter> para finalizar.");
    getchar();
}

int ex4 (void){

int quantidade = 0;
int valor      = 0;
int controle   = 0;
int contador   = 0;

    IO_id("Metodo 4 - 0.3");

    quantidade = IO_readint("Entrar com uma quantidade");
    controle   = 1;

    while(controle <= quantidade){
        valor = IO_readint(IO_concat(IO_concat("",IO_toString_d(controle)),": "));
        if(belongsTo(valor, 0,100)&& even (valor)){
            contador++;
        }
            controle++;
    }
    IO_printf("%s%d\n","Positivos menores que 100 e pares = ", contador);
    IO_pause("Pressione <enter> para continuar.");
}

int ex5 (void){
    
int quantidade = 0;
int valor      = 0;
int controle   = 0;
int contador   = 0;
bool ok        = false;

    IO_id("Metodo 5 - 0.4");

    quantidade = IO_readint("Entrar com uma quantidade");

    controle   = 1;

    while(controle <= quantidade){
        valor = IO_readint(IO_concat(IO_concat("",IO_toString_d(controle)),": "));

        ok = belongsTo(valor,0,100);
        ok = ok && even(valor);
        if (ok){
            contador++;
        }
            controle++;
    }
    IO_printf("%s%d\n","Positivos menores que 100 e pares = ", contador);
    IO_pause("Pressione <enter> para finalizar");
    getchar();
}

bool isLowerCase(char x){
    bool result = false;
    if('a' <= x && x <= 'z'){
        result = true;
    }
    return(result);
}

int ex6 (void){

chars palavra = IO_new_chars(STR_SIZE);
int  tamanho   = 0;
int  posicao   = 0;
char simbolo   = '_';
int  contador  = 0;

IO_id("Metodo 6 - 0.5");

    palavra = IO_readstring("Entrar com uma palavra: ");

    tamanho = strlen (palavra);

for (posicao = 0; posicao < tamanho; posicao++){
    simbolo = palavra[posicao];
    if(isLowerCase(simbolo)){
        contador++;
    }
}
    IO_printf("%s%d\n","Minusculas = ", contador);
    IO_pause("Pressione <enter> para continuar");
    getchar();   
}

int ex7 (void){

chars palavra = IO_new_chars(STR_SIZE);
int tamanho  = 0;
int posicao  = 0;
char simbolo ='_';
int contador = 0;

    IO_id("Metodo 7 - 0.6");

    palavra = IO_readstring("Entrar com uma palavra: ");
    tamanho = strlen (palavra);

    for (posicao = 0; posicao < tamanho; posicao++){

        simbolo = palavra[posicao];
        if(isLowerCase(simbolo)){
            IO_printf("%c",simbolo);
            contador++;
        }  
    }
    IO_printf("\n%s%d\n","Minusculas = ",contador);
    IO_pause("Pressione <enter> para continuar");
    getchar();    
}

int ex8 (void){

chars palavra = IO_new_chars(STR_SIZE);
int tamanho   = 0;
int posicao   = 0;
char simbolo  = '_';
int contador  = 0;
chars minusculas= IO_new_chars(STR_SIZE);

    strcpy(minusculas, STR_EMPTY); // vazio

    IO_ID("Metodo 8 - v0.7");

    palavra = IO_readstring("Entre com uma palavra: ");
        tamanho = strlen(palavra);

    for(posicao = 0; posicao < tamanho; posicao++){
        simbolo = palavra[posicao];
    if(isLowerCase(simbolo)){
        minusculas = IO_concat(minusculas, IO_toString_c(simbolo));
        contador++;
    }//if
    }//for
        IO_printf("\n%s%d[%s]\n","Minusculas = ", contador, minusculas);
    IO_pause("Pressione <enter> para continuar.");
    getchar();
    }

bool isDigit(char x){

    bool result = false;
        if('0' <= x && x <= '9'){
            result = true;
        }
        return (result);
    }

int ex9 (void){

chars palavra = IO_new_chars(STR_SIZE);
int tamanho = 0;
int posicao = 0;
char simbolo = '_';
int contador = 0;

    IO_id("Metodo 9 v0.8 - Ler palavra e contar os algarismos. ");
    palavra = IO_readstring("Entrar com caracteres: "); 

    tamanho = strlen(palavra);

for (posicao  = 0; posicao< tamanho; posicao++){
    simbolo = palavra[posicao];

        if(isDigit(simbolo)){
            IO_printf("%c", simbolo);
            contador++;
            }
    }
    IO_printf("\n%s%d\n", "Algarismos = ", contador);
    IO_pause("Pressione <enter> para continuar");
    getchar();
}

bool isADigit(char x){
    return('0' <= x && x <= '9');
}

chars concatADigit(chars string, char digit){
    return(IO_concat(string, IO_toString_c(digit)));
}


int ex10 (void){

chars palavra = IO_new_chars(STR_SIZE);
int tamanho = 0;
int posicao = 0;
char simbolo = '_';
chars digitos = IO_new_chars(STR_SIZE);

    strcpy(digitos, STR_EMPTY);

        IO_id("Metodo 10 v0.9");

    palavra = IO_readstring("Entrar com uma palavra: ");
        tamanho= strlen(palavra);

for (posicao = 0; posicao < tamanho; posicao++){
    simbolo = palavra[posicao];
    if(isADigit(simbolo)){
        digitos = concatADigit(digitos,simbolo);
    }
}
    IO_printf("zn%s%d[%s]\n","Algarismos =", strlen(digitos), digitos);
    IO_pause("Pressione <enter> para finalizar");
    getchar();
}

chars concatADigit (chars string, char digit){
    if(string){
        string[strlen(string)+1]='\0'; //avançar o terminador
        string[strlen(string)  ]= digit; //guardar o digito
    }
    return(string);
}

int main() {
    // definir dados / resultados
    int opcao = 0;
      printf("%s\n", "Programa de Exemplos ED4 = v1.0");
    printf("%s\n", "Autor: Rafael Sampaio");
    printf("\n"); 

    do {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Metodo 01");
        printf("\n%s", "2 - Metodo 02");
        printf("\n%s", "3 - Metodo 03");
        printf("\n%s", "4 - Metodo 04");
        printf("\n%s", "5 - Metodo 05");
        printf("\n%s", "6 - Metodo 06");
        printf("\n%s", "7 - Metodo 07");
        printf("\n%s", "8 - Metodo 08");
        printf("\n%s", "9 - Metodo 09");
        printf("\n%s", "10 - Metodo 10");
        printf("\n");
    
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar(); 
        printf("\n%s%d", "Opcao = ", opcao);

        switch (opcao) {
            case 0: 
                break;
            case 1: 
                ex1();
                break;
            case 2: 
                ex2();
                break;
            case 3:  
                ex3();
                break;
            case 4: 
                ex4();
                break;
            case 5: 
                ex5();
                break;
            case 6: 
                ex6();
                break;
            case 7: 
                ex7();
                break;
            case 8:
                ex8();
                break;
            case 9:
                ex9();
                break;
            case 10:
                ex10();
                break;
            default:
                printf("\nERRO: Opcao invalida.\n");
                break;
        }

    } while (opcao != 0);
   
    printf("\n\nApertar ENTER para terminar.");
    getchar();
    return (0); 
}