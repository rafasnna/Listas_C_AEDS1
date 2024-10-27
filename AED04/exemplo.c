/*
Exemplo0400 - v0.0 05/09/2024
Autor: Rafael de Sena Sampaio
*/

#include <stdio.h>
#include "io.h"

void method_01 ()
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    IO_id("Method 01 - v0.0");
    quantidade = IO_readint("Entrar com uma quantidade: ");
    controle = 1;
    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(IO_concat("", IO_toString_d(controle)), ": "));
        printf("\n%s%d", "valor = ", valor);
        controle = controle + 1;
    }
    IO_pause("Apertar ENTER para continuar");
}

bool positive(int x)
{
    bool result = false;
    if (x > 0)
    {
        result = true;
    }
    return (result);
}

void method_02 ()
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    IO_id("Method02 - v0.0");
    quantidade = IO_readint("Entrar com uma quantidade: ");
    controle = 1;
    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(IO_concat("", IO_toString_d(controle)), ": "));
        if (positive(valor))
        {
            contador = contador + 1;
        }
        controle = controle + 1;
    }
    IO_printf("%s%d\n", "Positivos = ", contador);
    IO_pause("Apertar ENTER para continuar");
}

bool belongsTo(int x, int inferior, int superior)
{
    bool result = false;
    if (inferior < x && x < superior)
    {
        result = true;
    }
    return (result);
}

void method_03 ()
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    IO_id("Method_03 - v0.0");
    quantidade = IO_readint("Entrar com uma quantidade: ");
    controle = 1;
    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(IO_concat("", IO_toString_d(controle)), ": "));
        if (belongsTo(valor, 0, 100))
        {
            contador = contador + 1;
        }
        controle = controle + 1;
    }
    IO_printf("%s%d\n", "Positivos menores que 100 = ", contador);
    IO_pause("Apertar ENTER para continuar");
}

bool even(int x)
{
    bool result = false;
    if (x % 2 == 0)
    {
        result = true;
    }
    return (result);
}

void method_04 ()
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    IO_id("Method_04 - v0.0");
    quantidade = IO_readint("Entrar com uma quantidade: ");
    controle = 1;
    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(IO_concat("", IO_toString_d(controle)), ": "));
        if (belongsTo(valor, 0, 100) && even(valor))
        {
            contador = contador + 1;
        }
        controle = controle + 1;
    }
    IO_printf("%s%d\n", "Positivos menores que 100 e pares = ", contador);
    IO_pause("Apertar ENTER para continuar");
}

void method_05 ()
{
    int quantidade = 0;
    int valor = 0;
    int controle = 0;
    int contador = 0;
    bool ok = false;
    IO_id("EXEMPLO0405 - Method05 - v0.0");
    quantidade = IO_readint("Entrar com uma quantidade: ");
    controle = 1;
    while (controle <= quantidade)
    {
        valor = IO_readint(IO_concat(IO_concat("", IO_toString_d(controle)), ": "));
        ok = belongsTo(valor, 0, 100);
        ok = ok && even(valor);
        if (ok)
        {
            contador = contador + 1;
        }
        controle = controle + 1;
    }
    IO_printf("%s%d\n", "Positivos menores que 100 e pares = ", contador);
    IO_pause("Apertar ENTER para continuar");
}

bool isLowerCase(char x)
{
    bool result = false;
    if ('a' <= x && x <= 'z')
    {
        result = true;
    }
    return (result);
}

void method_06 ()
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    IO_id("Method06 - v0.0");
    palavra = IO_readstring("Entrar com uma palavra: ");
    tamanho = strlen(palavra);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];
        if (isLowerCase(simbolo))
        {
            contador = contador + 1;
        }
    }
    IO_printf("%s%d\n", "Minusculas = ", contador);
    IO_pause("Apertar ENTER para continuar");
}

void method_07 ()
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    IO_id("Method07 - v0.0");
    palavra = IO_readstring("Entrar com uma palavra: ");
    tamanho = strlen(palavra);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];
        if (isLowerCase(simbolo))
        {
            IO_printf("%c ", simbolo);
            contador = contador + 1;
        }
    }
    IO_printf("\n%s%d\n", "Minusculas = ", contador);
    IO_pause("Apertar ENTER para continuar");
}

void method_08 ()
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    chars minusculas = IO_new_chars(STR_SIZE);
    strcpy(minusculas, STR_EMPTY);
    IO_id("Method08 - v0.0");
    palavra = IO_readstring("Entrar com uma palavra: ");
    tamanho = strlen(palavra);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];
        if (isLowerCase(simbolo))
        {
            minusculas = IO_concat(minusculas, IO_toString_c(simbolo));
            contador = contador + 1;
        }
    }
    IO_printf("\n%s%d [%s]\n", "Minusculas = ", contador, minusculas);
    IO_pause("Apertar ENTER para continuar");
}

bool isDigit(char x)
{
    bool result = false;
    if ('0' <= x && x <= '9')
    {
        result = true;
    }
    return (result);
}

void method_09 ()
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    int contador = 0;
    IO_id("Method09 - v0.0");
    palavra = IO_readstring("Entrar com caracteres: ");
    tamanho = strlen(palavra);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];
        if (isDigit(simbolo))
        {
            IO_printf("%c ", simbolo);
            contador = contador + 1;
        }
    }
    IO_printf("\n%s%d\n", "Algarismos = ", contador);
    IO_pause("Apertar ENTER para continuar");
}

bool isADigit(char x)
{
    return ('0' <= x && x <= '9');
}

chars concatADigit(chars string, char digit)
{
    return (IO_concat(string, IO_toString_c(digit)));
}

void method_10 ()
{
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int posicao = 0;
    char simbolo = '_';
    chars digitos = IO_new_chars(STR_SIZE);
    strcpy(digitos, STR_EMPTY);
    IO_id("Method_10 - v0.0");
    palavra = IO_readstring("Entrar com uma palavra: ");
    tamanho = strlen(palavra);
    for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
    {
        simbolo = palavra[posicao];
        if (isADigit(simbolo))
        {
            digitos = concatADigit(digitos, simbolo);
        }
    }
    IO_printf("\n%s%d [%s]\n", "Algarismos = ", strlen(digitos), digitos);
    IO_pause("Apertar ENTER para continuar");
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
    printf("\n%s", "1 - Method_01");
    printf("\n%s", "2 - Method_02");
    printf("\n%s", "3 - Method_03");
    printf("\n%s", "4 - Method_04");
    printf("\n%s", "5 - Method_05");
    printf("\n%s", "6 - Method_06");
    printf("\n%s", "7 - Method_07");
    printf("\n%s", "8 - Method_08");
    printf("\n%s", "9 - Method_09");
    printf("\n%s", "10 - Method_10");
    printf("\n");

    printf("\n%s", "Opcao = ");
    scanf("%d", &opcao);
    getchar(); 

    printf("\n%d", "Opcao = ", opcao);

    switch(opcao)
    {
        case 0: break;
        case 1: method_01(); break;
        case 2: method_02(); break;
        case 3: method_03(); break;
        case 4: method_04(); break;
        case 5: method_05(); break;
        case 6: method_06(); break;
        case 7: method_07(); break;
        case 8: method_08(); break;
        case 9: method_09(); break;
        case 10: method_10(); break;
        default:
        printf("\nERRO: Opcao invalida.\n"); break;
        } 
    }
    while(opcao!=0);

    printf("\n\nApertar ENTER para terminar.");
    getchar();
    return(0); 
}