#include <stdio.h>
#include <stdlib.h>
#include "io.h"


void method_00(void){


}

/* 01.) Incluir um método (0311) para:
- ler uma palavra do teclado;
- mostrar as letras maiúsculas maiores que 'K'.
DICA: Definir um teste para determinar se um caractere é letra maiúscula.
Comparar os símbolos e não seus códigos numéricos equivalentes.
Exemplo: palavra = "PaLaVrA"*/
void ex0311(){

int x = 0;
int tamanho = 0;
char palavra [STR_SIZE];

    IO_id("EX 01 - Rafael Sampaio.");
    IO_printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

for(x = 0; x < tamanho; x= x + 1 ){

    if (palavra[x] > 'K' && palavra[x] <= 'Z'){
        IO_printf("%c\n", palavra[x]);
    }

}
    IO_pause("Aperte <enter> para finalizar.");

}

/*02.) Incluir um método (0312) para:
- ler uma palavra do teclado;
- contar e mostrar apenas as letras minúsculas menor que 'k'.
DICA: Definir um teste para determinar se um caractere é letra minúscula.
Comparar os símbolos e não seus códigos numéricos equivalentes.
Exemplo: palavra = "PaLaVrA"*/
void ex0312(){

int contador = 0;
int x        = 0;
int tamanho  = 0;
char palavra [STR_SIZE];

    IO_id("EX 02 - Rafael Sampaio. ");
    IO_printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

for (x = 0; x < tamanho; x = x + 1 ){
    

    if (palavra[x] >= 'a' && palavra[x] < 'k'){
        IO_printf("%d. %c\n", contador, palavra[x]);
        contador++;
    }
}
    IO_pause("Aperte <enter> para finalizar.");

}

/*03.) Incluir um método (0313) para:
- ler uma palavra do teclado;
- contar e mostrar as letras minúsculas maiores que 'K', percorrendo do fim para o início da palavra.
Exemplo: palavra = "PaLaVrA"*/
void ex0313(){

int  x        = 0;
int  contador = 0;
int  tamanho  = 0;
char palavra  [STR_SIZE];

    IO_id("EX 03 - Rafael Sampaio");
    IO_printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra) - 1;

for (x = tamanho; x > 0; x-- ){

    if (palavra[x] > 'k' && palavra[x] <= 'z'){
        IO_printf("%d. %c\n", contador, palavra[x]);
        contador++;
    }
}
    IO_pause("Aperte <enter> para finalizar.");

}

/*04.) Incluir um método (0314) para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar todos símbolos que forem letras, ou maiúsculas ou minúsculas.
Exemplo: palavra = "P4LaVr@"*/
void ex0314(){

int x        = 0;
int contador = 0;
int tamanho  = 0;
char palavra [STR_SIZE];

    IO_id("EX 04 - Rafael Sampaio  ");
    IO_printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for (x=0; x < tamanho; x=x+1){

        if (palavra[x] > 'A' && palavra[x] <= 'Z'){
            IO_printf("%d. %c (letra Maiuscula)\n",contador,palavra[x]);
            
        }
        else if (palavra[x] > 'a' && palavra[x] <= 'z'){
            IO_printf("%d. %c (letra minuscula)\n",contador,palavra[x]);
        }
        else{ 
            IO_printf("%d. %c (Diferente de letra)\n",contador,palavra[x]);
        }
        contador++;
    }
        IO_pause("Aperte <enter> para finalizar.");
        getchar();
    
    }


/*05.) Incluir um método (0315) para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar todos os dígitos pares, percorrendo do fim para o início da cadeia de caracteres.
Exemplo: palavra = "P4LaVr@1"*/
void ex0315(){

    int x        = 0;
    int contador = 0;
    int tamanho  = 0;
    char palavra [STR_SIZE];
    
        IO_id("EX 04 - Rafael Sampaio  ");
        IO_printf("Digite uma palavra: ");
        scanf("%s", palavra);
    
        tamanho = strlen(palavra) -1;
    
        for (x= tamanho; x >= 0; x--){
    


            if (contador % 2 == 0){
                IO_printf("%d.%c\n",contador,palavra[x]);
                
            }
            else{
                IO_printf("\n");
            }
            contador++;
        }
            IO_pause("Aperte <enter> para finalizar.");
            getchar();
        
        

}

/*06.) Incluir um método (0316) para:
- ler uma cadeia de caracteres do teclado;
- contar e mostrar tudo o que não for dígito ímpar e também não for letra.
Exemplo: palavra = "P4LaVr@O!"*/
void ex0316(){
    
int x        = 0;
int contador = 0;
int tamanho  = 0;
char palavra [STR_SIZE];
    
        IO_id("EX 04 - Rafael Sampaio  ");
        IO_printf("Digite uma palavra: ");
        scanf("%s", palavra);
    
        tamanho = strlen(palavra) -1;
    
for (x= tamanho; x >= 0; x++){
    


    if (contador % 2 == 0){
        IO_printf("%d.%c\n(NI/L)",contador,palavra[x]);
                
        }
        else{
            IO_printf("\n");
            }
            contador++;
        }
            IO_pause("Aperte <enter> para finalizar.");
            getchar();
        
        

}



/*07.) Incluir um método (0317) para:
- ler dois valores inteiros (a,b), limites para definirem um intervalo [a:b];
- ler uma quantidade (n) de valores inteiros a serem testados;
- repetir a leitura de outros tantos valores, quantos os indicados pela quantidade, um (x) por vez;
- contar e mostrar quantos dentre esses valores lidos (x)
os que forem múltiplos de 3, e pertençam ao intervalo [a:b].
Exemplo: [ 20: 50 ], e n = 7, com { 10, 20, 30, 42, 54, 60, 84 }*/
void ex0317(){


}

/*08.) Incluir um método (0318) para:
- ler dois valores inteiros (a,b), limites para definirem um intervalo [a:b];
- ler uma quantidade (n) de valores inteiros a serem testados;
- ler outros tantos valores quantos os indicados pela quantidade, um (x) por vez;
- contar e mostrar quantos dentre esses valores lidos (x)
os que forem múltiplos de 4, que não forem também múltiplos de 3,
e pertençam ao intervalo [a:b].
Exemplo: [ 15: 55 ], e n = 7, com { 10, 20, 30, 48, 52, 60, 84 }*/
void ex0318(){


}

/*09.) Incluir um método (0319) para:
- ler dois valores reais (a e b), o primeiro (a) menor que o segundo (b), confirmadamente,
para definirem um intervalo aberto (a:b);
- ler a quantidade (n) de valores reais a serem testados, e
ler outros tantos valores (x) quantos os indicados por essa quantidade;
- contar e mostrar todos os valores lidos, pertencentes ao do intervalo,
cujas partes inteiras forem pares e menores que 5.
DICA: Usar conformação de tipo (type casting) para isolar a parte inteira (int),
antes de testar se é par (ver 0110).
Exemplo: ( 1.5: 8.1 ), e n = 7, com { 1.0, 2.4, 3.3, 4.1, 5.5, 6.3, 8.6 }*/
void ex0319(){


}

/*10.) Incluir um método (0320) para:
- ler dois valores reais (a e b), maiores que 0 e menores que 1, confirmadamente,
para definirem um intervalo aberto (a:b);
- ler uma quantidade (n) de valores reais a serem testados, e
ler outros tantos valores quantos os indicados por essa quantidade;
- contar e mostrar todos os valores lidos
que tenham suas partes fracionárias dentro do intervalo ]a:b[.
DICA: Usar conformação de tipo (type casting) para isolar a parte inteira (int),
e obter a parte fracionária mediante a subtração da parte inteira, antes de testar.
Exemplo: ( 0.25: 0.50 ), e n = 7, com { 1.0, 2.8, 3.3, 4.1, 5.5, 6.9, 8.4 }*/
void ex0320(){


}


int main (){

    int opcao = 0;

    do
    {
        IO_id("Atividades - Rafael Sampaio");

        IO_println("Opcoes:");
        IO_println("0 - Terminar");
        IO_println("1 - Atividade  *01");
        IO_println("2 - Atividade  *02");
        IO_println("3 - Atividade  *03");
        IO_println("4 - Atividade  *04");
        IO_println("5 - Atividade  *05");
        IO_println("6 - Atividade  *06");
        IO_println("7 - Atividade  *07");
        IO_println("8 - Atividade  *08");
        IO_println("9 - Atividade  *09");
        IO_println("10 - Atividade  *10");

        opcao = IO_readint("Escolha um exemplo: ");

        //testar valor 
        switch(opcao)
        {
            case 0 : method_00(); break;
            case 1 : ex0311(); break;
            case 2 : ex0312();break;
            case 3 : ex0313(); break;
            case 4 : ex0314();break;
            case 5 : ex0315(); break;
            case 6 : ex0316();break;
            case 7 : ex0317(); break;
            case 8 : ex0318();break;
            case 9 : ex0319(); break;
            case 10 : ex0320(); break;
            default:
                IO_pause ( IO_concat ( "Valor diferente das opcoes (",
                IO_concat ( IO_toString_d ( opcao ), ")" ) ) );
        }
    } 
    while( opcao != 0);
    IO_pause ( "Apertar ENTER para terminar" );
return ( 0 );

}

