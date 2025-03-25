/* 
    Exemplo0300 - v0.0 - 11/03/2025
    Autor: Rafael Sampaio
    Titulo: aprendiz de theldo!
*/

#include "io.h"


void atividade0 (void){
    
}

void atividade1 (void){

int x = 0;

    IO_id("Metodo 1 - 0.1");

x = IO_readint ("Entrar com uma quantidade: ");

while (x > 0){ //enquanto x for maior que 0
    IO_println(IO_toString_d(x));
    x = x - 1;

}// fim

//encerrar 
    IO_pause("Pressione <enter> para continuar.");

}

void atividade2 (void){

int x = 0;
int y = 0;

    IO_id("Metodo 2 - 0.2");

    x = IO_readint ("Entrar com uma quantidade: ");
    
    //repetir (x) vezes
    y = x;
    while (y > 0){
        //valor atual
    IO_println(IO_toString_d(x));
    // passa ao proximo valor
    y = y - 1;

    }

    IO_pause("Aperte enter para continuar");
}

void atividade3 (void){

int x = 0;
int y = 0;

    IO_id("Metodo_3 - 0.3");

    x = IO_readint("Entrar com uma quantidade: ");

    y = 1;
    while( y <= x){

        IO_printf("%d\n", y);
        y = y + 1;
    }
    IO_pause("Aperte enter para continuar");
}

void atividade4 (void){

int x = 0;
int y = 0;
int z = 0;

    IO_id("Metodo 4 - 0.4");

    x = IO_readint("Entrar com uma quantidade: ");

for (y = 1; y <= x; y = y + 1){

//ler do teclado
    z = IO_readint("Valor= ");
//mostrar valor atual
    IO_printf("%d.%d\n",y,z);
}
    IO_pause("Pressione <enter> para continuar");
}

void atividade5 (void){

int x = 0;
int y = 0;
int z = 0;

    IO_id("Metodo 5 - 0.5");

    x = IO_readint("Entre com uma quantidade: ");

    //repetir (X) vezes
    // inicio   teste   variacao
    for (y = x; y >= 1; y = y -1){
        //ler valor do teclado
     z= IO_readint("Valor= ");
        //mostrar valor atual
        IO_printf("%d.%d\n",y,z);
    }
    IO_pause("Apertar Enter para continuar");
}

void atividade6 (void){

int x = 0;
int y = 0;

    chars palavra = IO_new_chars (STR_SIZE);
    int tamanho = 0;

    IO_id("Metodo 6 - 0.6");

    palavra  = IO_readstring("Entrar com uma palavra: ");

    tamanho = strlen (palavra) -1;
    // OBS: A cadeia de caracteres iniciam suas posições em zero.

    //   inicio       teste   variacao
    for( y = tamanho; y >= 0; y = y -1){

        IO_printf("%d:[%c]\n",y, palavra[y]);
    }
    IO_pause("Pressione <enter> para continuar");
}

void atividade7 (void){

int x = 0;
int y = 0;

    char palavra [STR_SIZE];
    int tamanho = 0;

    IO_id("Metodo 7 - 0.7");

    IO_printf("Entrar com uma palavra: ");
    scanf("%s",palavra);getchar();
    
    //repetir para cada letra
    tamanho = strlen(palavra);
    //OBS:A cadeia de caracteres iniciam suas posicoes em zero

    for(y = 0; y < tamanho; y = y + 1){

        IO_printf("%d:[%c]\n",y,palavra[y]);

    }
    IO_pause ("Pressione <enter> para continuar.");


}

void atividade8 (void){

int inferior = 0;
int superior = 0;
int x        = 0;

    IO_id("Metodo 8 - 0.8");

    //ler do teclado
    inferior =IO_readint("Limite inferior do intervalo: ");
    superior =IO_readint("Limite superior do intervalo: ");

    for(x = inferior; x <= superior; x = x + 1 ){

        IO_printf("%d\n",x);
    }

    IO_pause("Pressione <enter> para finalizar.");

}

void atividade9 (void){

double inferior = 0;
double superior = 0;
double passo    = 0;
double x        = 0;

    IO_id("Metodo 9 - 0.9");

    //ler do teclado
    inferior =IO_readdouble ("Limite inferior do intervalo: ");
    superior =IO_readdouble ("Limite superior do intervalo: ");
    passo    =IO_readdouble("Variacao no intervalo (passo): ");

        //inicio           teste   variacao
    for(x = superior; x >= inferior; x = x - passo){

        IO_printf("%lf", x);
    }

    IO_pause("Pressione <enter> para finalizar.");

}

void atividade10 (void){

double inferior = 0;
double superior = 0;
double passo    = 0; 
double x        = 0;

    IO_id("Metodo 10 - v1.0");

    inferior = IO_readdouble("Limite inferior do intervalo: ");
    
    //repetir ate haver confirmacao de validade
    do{
        passo=IO_readdouble("Variacao no intervalo (passo): ");
    }while(passo <= 0.0);

    for(x = inferior; x <= superior; x = x + passo){
        IO_printf("%lf\n",x);
    }
    IO_pause("Pressione <enter> para finalizar.");
}


int main (){

int x = 0;

do{
    IO_id("Exemplo0300 - Programa - 1.0");;

    IO_println("Opcoes");
    IO_println("0 - Parar");
    IO_println("1* Exemplo.");
    IO_println("2* Exemplo.");
    IO_println("3* Exemplo.");
    IO_println("4* Exemplo.");
    IO_println("5* Exemplo.");
    IO_println("6* Exemplo.");
    IO_println("7* Exemplo.");
    IO_println("8* Exemplo.");
    IO_println("9* Exemplo.");
    IO_println("10* Exemplo.");
    IO_println ("");

    x = IO_readint("Entrar com uma opcao: ");

    switch(x){
        case 0: atividade0(); break;
        case 1: atividade1(); break;
        case 2: atividade2(); break;
        case 3: atividade3(); break;
        case 4: atividade4(); break;
        case 5: atividade5(); break;
        case 6: atividade6(); break;
        case 7: atividade7(); break;
        case 8: atividade8(); break;
        case 9: atividade9(); break;
        case 10: atividade10(); break;
        default:
        IO_pause(IO_concat("Valor diferente das opcoes[0,1](",
                                                IO_concat(IO_toString_d(x),")")));
    }

}while(x !=0);


}