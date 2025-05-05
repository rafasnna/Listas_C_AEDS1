#include <stdlib.h>
#include <stdio.h>
#include "io.h"



// Exercícios 
// DICAS GERAIS: Consultar o Anexo C 02 na apostila para outros exemplos. 
// Prever, realizar e registrar todos os testes efetuados. 
// Integrar as chamadas de todos os programas em um só. 


//funções 
void readintArray (int n, int array[]){

    int x = 0;
    int y = 0;
    chars text = IO_new_chars(STR_SIZE);
    
    for (x = 0; x < n; x = x + 1) {
        strcpy(text, STR_EMPTY);
        y = IO_readint(IO_concat(IO_concat(text, IO_toString_d(x)),":"));
    
        array[x] = y;
    }
    }



/*
01.) Incluir um método (0811) para 
ler o tamanho de um arranjo para inteiros do teclado, 
bem como todos os seus elementos, garantindo que só tenha valores positivos e pares. 
Verificar se o tamanho (ou dimensão) não é nulo ou negativo. 
Para testar, ler diferentes quantidades de dados. 
DICA: Retornar no parâmetro (n) a quantidade lida. 

Exemplo: lerPares ( &n, arranjo ); 
*/

int ex01 (){
    
int n = 0;

    printf("De o tamanho do vetor: ");
    scanf("%d", &n);

    while(n <= 0){
    printf("Valor e negativo ou Nulo");

    printf("Digite um valor correto com oque foi pedido: ");
    scanf(" %d", &n);
    }
 
int vetor[n];

int num = 0;

    for(int i=0; i<n; i++){
        scanf(" %d", &num);
        while (num < 0 || num % 2 != 0)
        {   
        printf("Esse valor e negativo ou impar\n");

        printf("Digite um valor correto com oque foi pedido: ");
            scanf(" %d", &num);
        }
        vetor[i] = num;
        
    }

    printf ("os valores lidos foram: %d", &n);
    return n;
}





/**
 Incluir um método (0812) para 
ler um arranjo com inteiros de arquivo.  
Valores negativos e também os ímpares e os negativos deverão ser descartados.  
O arranjo e o nome do arquivo serão dados como parâmetros. 
Guardar, em arquivo primeiro o tamanho, depois os elementos, um dado por linha. 
Para testar, ler diferentes nomes e quantidade de dados. 
 
Exemplo: gravarParesPositivos ( n, arranjo );
 */

 void gravarParesPositivos(chars fileName, int n, int array[])
 {
    FILE* arquivo = fopen (fileName,"wt");
    int x=0;
    int y=0;

    if (arquivo == NULL) //verificar arquivo
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    for(x=0; x < n;x=x+1)
    {
        if(array[x] >=0 && array[x] %2 ==0)
        {
            y=y+1;
        }
    }
    for(x=0; x < n;x=x+1)
    {
        if(array[x] >=0 && array[x] %2 ==0)
        {
            fprintf(arquivo,"%d\n", array[x]);

        }
    }
    
 fclose(arquivo);

}

void fprintfInt (chars fileName, int n, int array[])
{
    FILE *arquivo = fopen(fileName, "wt");
    int x=0;
    for(x=0; x<n;x=x+1)
    {
        array[x] = IO_readint("Entre com um valor : ");
        IO_fprintf(arquivo, "%d\n", array[x]);
    }

    fclose(arquivo);
}
void ex02 ()
{
    int n=0;
    n = IO_readint("Entre com uma quantidade:");
    n = arraySize(n);
    int array [n];
    printf("\n");
    fprintfInt("teste.txt", n, array);
    gravarParesPositivos("PARES0812.TXT",n,array);
    IO_pause("Pressione <enter> para continuar.");


}

/**
*Incluir um método e uma função (0813) para 
*gerar um valor inteiro aleatoriamente dentro de um intervalo,  
*cujos limites de início e de fim serão recebidos como parâmetros; 
*Para para testar, ler os limites do intervalo do teclado; 
ler a quantidade de elementos ( N ) a serem gerados; 
gerar essa quantidade ( N ) de valores aleatórios  
dentro do intervalo aberto e armazená-los em arranjo; 
gravá-los, um por linha, em um arquivo ("DADOS.TXT"). 
A primeira linha do arquivo deverá informar a quantidade  
de números aleatórios ( N ) que serão gravados em seguida. 
DICA: Usar a função rand( ), mas tentar limitar valores muito grandes (usar mod=%). 
 
Exemplo: valor = gerarInt ( inferior, superior ); 
 */

 int gerarInt(int inferior, int superior) 
{
    if (superior <= inferior + 1) 
    {
        printf("ERRO: O intervalo deve ser maior.\n");
    
        return inferior + 1;
    }
    return (rand() % (superior - inferior - 1)) + inferior + 1;
}

void gravarInt (chars fileName, int n, int array[])
{
    int x=0;
    int y =0;
    FILE* arquivo = fopen (fileName, "wt");
    fprintf(arquivo,"%d\n",n);
    for(x=0; x< n; x=x+1)
    {
        fprintf(arquivo,"%d\n",array[x]);

    }

    fclose(arquivo);
}
void ex03 ()
{
    int n=0;
    int i=0;
    int s=0;
    int x=0;
    n= IO_readint("Entre com uma quantidade:");
    n= arraySize(n);//verificar quantidade
    int array[n];
    i= IO_readint("Entre com o limite inferior:");
    s= IO_readint("Entre com o limite superior:");
    for(x=0; x <n ; x=x+1)
    {
        array[x]= gerarInt(i,s);
    }
    gravarInt("DADOS0813.TXT",n, array);
    IO_pause("Pressione <enter> para continuar.");

}

/**
 Incluir um método e uma função (0814) para 
procurar o menor valor par em um arranjo. 
Para testar, receber um nome de arquivo como parâmetro e  
aplicar a função sobre o arranjo com os valores lidos; 
DICA: Procurar o primeiro valor par da tabela como referência inicial 
 para o menor valor, se houver. 
 
Exemplo: arranjo = lerArquivo    ( n, "DADOS.TXT" ); 
 menor  = acharMenorPar ( n, arranjo ); 
 */
void readArray (chars fileName, int n, int array[])
{
    FILE *arquivo = fopen(fileName,"rt");
    int x=0;
    for(x=0;x<n;x=x+1)
    {
        fscanf(arquivo, "%d", &array[x]);
    }
    fclose(arquivo);
}

int menorPar ( int n, int array[] )
{
    int x=0;
    int menor=array[n];
    for(x=0; x < n ; x=x+1)
    {
        if(array[x] < menor && array[x] % 2 ==0)
        {
            menor= array[x];
        }
    }
    return menor;
}

void ex04 ()
{
    int n=0;
    int x=0;
    n= IO_readint("Entre com uma quantidade:");
    n= arraySize(n);//verificar quantidade
    int array[n];
    readArray("teste.txt", n, array);
    x = menorPar(n, array);
    IO_printf("Menor valor = %d\n", x);
    IO_pause("Pressione <enter> para continuar.");
}


/**
 Incluir um método e uma função (0815) para  
procurar o maior valor ímpar e múltiplo de 3 em um arranjo. 
Para testar, receber um nome de arquivo como parâmetro e  
aplicar a função sobre o arranjo com os valores lidos; 
DICA: Usar o primeiro valor ímpar múltiplo de 3 na tabela, se houver, como referência inicial. 
 
Exemplo: arranjo = lerArquivo   ( n, "DADOS.TXT" ); 
 maior   = acharMaiorImparDivisivelPorTres ( n, arranjo );
 */

int acharMaiorImpar (int n, int array[])
{
    int x=0;
    int maior=0;
    for(x=0; x < n ; x=x+1)
    {
        if(array[x] > maior  && array[x] % 2 !=0 && array[x] % 3==0)
        {
            maior= array[x];

        }
    }
    return maior;   
}
void ex05 ()
{
    int n=0;
    int x=0;
    n= IO_readint("Entre com uma quantidade:");
    n= arraySize(n);//verificar quantidade
    int array[n];
    readArray("teste.txt", n, array);
    x = acharMaiorImpar(n, array);
    if(x!=0)
    {
        IO_printf("Maior valor impar e divisivel por 3 = %d\n", x);
    }
    else
    {
        IO_printf("Nenhum valor encontrado que seja impar e divisivel por 3");
    }
    IO_pause("Pressione <enter> para continuar.");
}

/**
  Incluir um método e uma função (0816) para  
para determinar a média valores em um arranjo. 
Para testar, ler o arquivo ("DADOS.TXT") 
armazenar os dados em um arranjo; 
separar em dois outros arquivos, 
os valores menores ou iguais à média, e os maiores que ela. 
 
Exemplo: arranjo = lerArquivo   ( n, "DADOS.TXT" ); 
 media  = acharMedia ( n, arranjo );
 DICA: Considerar a possiblidade de que a quantidade de dados possa ser igual a zero. 
 */
double acharMedia (int n, int array[])
{
    FILE *maiores = fopen("MAIORESMEDIA.TXT", "wt");
    FILE *menores = fopen("MENORMEDIA.TXT", "wt");
    int x=0;
    int y =0;
    double soma=0.0;
    for(x=0; x < n;x=x+1)
    {
        y= y + array[x];
    }

    soma = y/n;

    for(x=0; x < n; x=x+1)
    {
        if(array[x] < soma)
        {
            fprintf(menores,"%d\n", array[x]);
        }
        else if( array[x] >= soma)
        {
            fprintf(maiores,"%d\n",array[x]);
        }
    }

    fclose(menores);
    fclose(maiores);

    return soma;
}

void ex06 ()
{
    int n=0;
    int x=0;
    n= IO_readint("Entre com uma quantidade:");
    n= arraySize(n);//verificar quantidade
    int array[n];
    readArray("teste.txt", n, array);
    printf("\n");
    x= acharMedia(n,array);
    IO_printf("A media dos valores = %d\n", x);
    IO_pause("Pressione <enter> para continuar.");
}


/**
 Incluir um método e uma função (0817) para  
receber como parâmetro um arranjo 
e dizer se está ordenado, ou não, em ordem decrescente. 
DICA: Testar se não está desordenado, ou seja,  
 se existe algum valor que seja maior que o seguinte. 
 Não usar break !
 */

int decrescente (int n, int array[])
{
 int x = 0;
 int y =1;
    for(x=0; x <n-1; x =x +1)
    {
        if( array[x] < array[x+1])
        {
            y =0;
        }

    }

    return y;
}

int entrarValor ( int n, int array[])
{
    int x=0;
    for(x=0; x<n;x=x+1)
    {
        array[x] = IO_readint("Entre com um valor : ");
        IO_printf(" %d\n", array[x]);
    }

}
void ex07 ()
{
    int n=0;
    int x=0;
    n= IO_readint("Entre com uma quantidade:");
    n= arraySize(n);//verificar quantidade
    int array[n];
    printf("\n");
    array[n] = entrarValor(n,array);
    printf("\n");
    x = decrescente(n, array);
    if (x == 0)
    {
        IO_printf("Array nao ordenado");
    }
    else
    {
        IO_printf("Array ordenado de forma decrescente");

    }
    IO_pause("Pressione <enter> para continuar.");
}

/**
  Incluir um método e uma função (0818) para  
procurar por determinado valor em arranjo e  
dizer se esse valor pode ser nele encontrado, 
indicada a posição inicial para se começar a procura. 
Para testar, ler o arquivo ("DADOS.TXT"), 
e armazenar os dados em arranjo; 
ler do teclado um valor inteiro para ser procurado; 
determinar se o valor procurado existe no arranjo,  
a partir da posição indicada. 
 
Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" ); 
 existe  = acharValor ( procurado, 0, n, arranjo ); 
 */
int acharValor (int procurado, int inicio, int n, int array[])
{
    int x=0;
    int existe=0;
    for(x=0+inicio;x < n; x=x+1)
    {
        if(array[x] == procurado)
        {
            existe=1;
        }
    }
    return existe;
}
void ex08 ()
{
    int valor =0;
    int n=0;
    int x=0;
    int p=0;
    n= IO_readint("Entre com uma quantidade:");
    valor = IO_readint("Entre com um valor a ser procurado: ");
    p = IO_readint("Em qual posicao? ");

    n= arraySize(n);//verificar quantidade
    int array[n];
    printf("\n");
    readArray("teste.txt", n, array);
    x= acharValor(valor, p, n, array);
    if(x ==0)
    {
        IO_printf("Valor nao encontrado.");
    }
    else
    {
        IO_printf("Valor encontrado.");

    }
    IO_pause("Pressione <enter> para continuar.");
}


/** Incluir um método e uma função (0819) para  
procurar por determinado valor em arranjo e  
dizer onde se encontra esse valor, 
indicada a posição inicial para começar a procura. 
Para testar, ler o arquivo ("DADOS.TXT"), 
e armazenar os dados em arranjo; 
ler do teclado um valor inteiro para ser procurado; 
determinar a primeira posição onde esse valor ocorrer  no arranjo, 
se houver. 
 
Exemplo: arranjo = lerArquivo       ( n, "DADOS.TXT" ); 
 onde    = acharPosicao ( procurado, 0, n, arranjo );
  */

  int acharPosicao (int procurado, int inicio, int n, int array[])
{
    int x=0;
    int posicao=0;
    for(x=inicio;x < n; x=x+1)
    {
        if(array[x] == procurado)
        {
            posicao=x;
        }
    }
    return posicao;
}
void ex09 ()
{
    int valor =0;
    int n=0;
    int x=0;
    int p=0;
    n= IO_readint("Entre com uma quantidade:");
    valor = IO_readint("Entre com um valor a ser procurado: ");
    p = IO_readint("Comecar em qual posicao:  ");

    n= arraySize(n);//verificar quantidade
    int array[n];
    printf("\n");
    readArray("teste.txt", n, array);
    x= acharPosicao(valor, p, n, array);
    IO_printf("Posicao onde se encontra o valor e' : %d\n", x);
    IO_pause("Pressione <enter> para continuar.");
}


/**
Incluir um método e uma função (0820) para  
procurar por determinado valor em arranjo e  
dizer quantas vezes esse valor pode ser encontrado, 
indicada a posição inicial para começar a procura. 
Para testar, ler o arquivo ("DADOS.TXT"), 
e armazenar os dados em arranjo; 
ler do teclado um valor inteiro para ser procurado; 
determinar quantas vezes o valor procurado aparece no arranjo, 
se ocorrer. 
 
Exemplo: arranjo =  lerArquivo       ( n, "DADOS.TXT" ); 
 vezes   = acharQuantos ( procurado, 0, n, arranjo ); 
 */

 int acharQuantos (int procurado, int inicio, int n, int array[])
 {
     int x=0;
     int contador=0;
     for(x=inicio;x < n; x=x+1)
     {
         if(array[x] == procurado)
         {
             contador= contador+1;
         }
     }
     return contador;
 }
void ex10 ()
{ 
    int valor =0;
    int n=0;
    int x=0;
    int p=0;
    n= IO_readint("Entre com uma quantidade:");
    valor = IO_readint("Entre com um valor a ser procurado: ");
    p = IO_readint("Comecar em qual posicao:  ");

    n= arraySize(n);//verificar quantidade
    int array[n];
    printf("\n");
    readArray("teste.txt", n, array);
    x= acharQuantos(valor, p, n, array);
    IO_printf("Esse valor apareceu : %d\n", x);
    IO_pause("Pressione <enter> para continuar.");
}

/*
Tarefas extras 

E1.) Incluir um método e uma função (08E1) para  
ler um valor inteiro do teclado, 
e mediante funções para calcular e retornar a quantidade  
e seus divisores pares guardados em arranjo,  
o qual deverá ser mostrado na tela após o retorno, 
bem como gravado em arquivo ( "DIVISORES.TXT" ). 
DICA: Supor que a quantidade de divisores  
será, no máximo, igual ao próprio número. 
*/

/*
E2.) Incluir um método e uma função (08E2) para  
ler um arquivo ( "PALAVRAS.TXT" ), 
e mediante uma função retornar as dez primeiras palavras 
que não comecem ou terminem com a letra 'e' (ou 'E'), se houver. 
As palavras encontradas deverão ser exibidas na tela,  
após retorno. 
DICA: Supor que a quantidade de palavras não ultrapassará 100. 
*/


int main()
 {
    int op = 0;

    printf("0 - Terminar\n");
    printf("ATV0811 (1) Ler Pares em Arranjos\n");
    printf("ATV0812 (2) ARRANJOS EX_02\n");
    printf("ATV0813 (3) ARRANJOS EX_03\n");
    printf("ATV0814 (4) ARRANJOS EX_04\n");
    printf("ATV0815 (5) ARRANJOS EX_05\n");
    printf("ATV0816 (6) ARRANJOS EX_06\n");
    printf("ATV0817 (7) ARRANJOS EX_07\n");
    printf("ATV0818 (8) ARRANJOS EX_08\n");
    printf("ATV0819 (9) ARRANJOS EX_09\n");
    printf("ATV0820 (10) ARRANJOS EX_10\n");

    printf("%s\n", "Qual a opcao?");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        ex01();
        break;
    case 2:
        exe02();
        break;
    case 3:
        exe03();
        break;
    case 4:
        exe04();
        break;
    case 5:
        exe05();
        break;
    case 6:
        exe06();
        break;
    case 7:
        exe07();
        break;
    case 8:
        exe08();
        break;
     case 9:
        exe09();
        break;
    case 10:
        exe10();
        break; 
    default:
        break;
    }

}