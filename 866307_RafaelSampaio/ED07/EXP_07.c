#include<stdio.h>
#include<stdlib.h>
#include "io.h"
#include<time.h>


/**
writeInts - Gravar em arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/

 void writeInts( chars fileName, int x)
 {
    //definir dados
    FILE* arquivo = fopen (fileName, "wt");
    int y=0;

    //repetir quantidade de dados
    for(y=1; y <= x; y=y+1)
    {
        //gravar valor no arquivo
        fprintf(arquivo,"%d\n",y);
    }
    fclose(arquivo);
 }

 void exemplo_01 ()
 {
    IO_id("Exemplo_01 - ed07");
    writeInts("DADOS1.TXT",10);
    IO_pause("Apertar ENTER para continuar");
 }


 /** 
   readInts - Ler de arquivo texto certa quantidade de valores. 
   @param fileName - nome do arquivo 
   @param x - quantidade de valores 
 */

void readInts ( chars fileName)
{
    FILE* arquivo = fopen (fileName, "rt");
    int x=0;

    //tentar ler o arquivo
    fscanf(arquivo, "%d", &x);
    //repetir enquanto houver dados
    while ( !feof (arquivo))
    {
        printf("%d\n", x);
        fscanf(arquivo, "%d", &x);
    }
    fclose (arquivo);
}
 void exemplo_02()
 {
    IO_id("Exemplo_02 - ed07");
    readInts("DADOS1.TXT");
    IO_pause("Apertar ENTER para continuar");
 }

 /** 
   writeDoubles - Gravar em arquivo texto certa quantidade de valores. 
   @param fileName - nome do arquivo 
   @param x - quantidade de valores 
 */

 void writeDoubles (chars fileName, int x)
 {
    FILE* arquivo = fopen (fileName, "wt");
    int y=0;

    //gravar quantidade
    IO_fprintf(arquivo, "%d\n", x);
    for (y=1; y<= x; y=y+1)
    {
        IO_fprintf(arquivo, "%lf\n",(0.1*y));
    } 
    fclose(arquivo);
 }

 void exemplo_03()
 {
    IO_id("Exemplo_03 - ed07");
    writeDoubles("DADOS2.TXT",10);
    IO_pause("Apertar ENTER para continuar");
    
 }

/** 
   readDoubles - Ler de arquivo texto certa quantidade de valores. 
   @param fileName - nome do arquivo 
   @param x - quantidade de valores 
 */

 void readDoubles (chars fileName)
 {
    FILE* arquivo = fopen (fileName, "rt");
    int x=0;
    int y=1;
    double z=0.0;

    //tentar ler a quantidade de dados
    fscanf(arquivo, "%d", &x);
    /** repetir enquanto houver dados
     *  e quantidade n tiver sido alcancada */

     while (!feof (arquivo) && y <= x)
     {
        //tentar ler arquivo
        fscanf (arquivo, "%lf", &z);
        //mostrar valor
        printf("%2d: %lf\n", y, z);
        //passar ao proximo valor 
        y=y+1;
     }

     fclose (arquivo);
    }

 void exemplo_04()
 {
    IO_id("Exemplo_04 - ed07");
    readDoubles("DADOS2.TXT");
    IO_pause("Apertar ENTER para continuar");
 }

 /** 
   writeText - Gravar em arquivo texto certa quantidade de valores. 
   @param fileName - nome do arquivo 
   @param x - quantidade de valores 
 */
 void writeText ( chars fileName)
 {
    FILE*arquivo = fopen (fileName, "wt");
    chars linha = IO_new_chars (STR_SIZE);

    //repetir ate o "PARAR"
    IO_println ("Gravar linhas ( para terminar, entara com \"PARAR\"): \n");
    do
    {
        //LER TECLADO
        strcpy (linha , IO_readln (""));
        //gravar valor
        IO_fprintf(arquivo, "%s\n", linha);
    }
    while(strcmp ("PARAR",linha) !=0);
    fclose(arquivo);
 } 
 void exemplo_05()
 {
    IO_id("Exemplo_05 - ed07");
    writeText("DADOS3.TXT");
    IO_pause("Apertar ENTER para continuar");
 }

 /** 
   readText - Ler de arquivo texto certa quantidade de valores. 
   @param fileName - nome do arquivo 
 */ 

 void readText (chars fileName)
 {
    FILE* arquivo = fopen(fileName, "rt");
    chars linha = IO_new_chars (STR_SIZE);

    //tentar ler o priemiro
    strcpy (linha, IO_freadln (arquivo));
    //repetir enquando houver dados
    while (!feof (arquivo) && strcmp ("PARAR",linha) !=0)
    {
        //mostrar valor
        printf("%s\n",linha);
        //tentar ler o proximo
        strcpy (linha, IO_freadln(arquivo));
    }

    fclose(arquivo);
 }

 void exemplo_06()
 {
    IO_id("Exemplo_06 - ed07");
    readText("DADOS3.TXT");
    IO_pause("Apertar ENTER para continuar");
 }

 /** 
   copyText - Copiar arquivo texto. 
   @param fileOut - nome do arquivo de saida     (destino) 
   @param fileIn    - nome do arquivo de entrada (origem ) 
 */ 

 void copyText (chars fileOut, chars fileln)
 {
    FILE* saida = fopen (fileOut, "wt");
    FILE* entrada = fopen(fileln, "rt");
    chars linha = IO_new_chars (STR_SIZE);
    int contador=0;

    //ler da origem

    strcpy (linha, IO_freadln(entrada));
    //repetir enquanto houver dados
    while(!feof (entrada))
    {
        contador = contador +1;
        //gravar no destino EXCEPCIONALMENTE sem a ultima linha ("PARAR")
        if(strcmp ("PARAR",linha) !=0)
        {
            IO_fprintf(saida, linha);
        }
        //ler da origem
        strcpy (linha, IO_freadln(entrada));
    }

    //informar total de linhas copiadas do arquivo
    IO_printf( "Lines read = %d\n", contador);
    fclose(saida);
    fclose(entrada);
 }
 void exemplo_07()
 {
    IO_id("Exemplo_07 - ed07");
    copyText("DADOS4.TXT", "DADOS3.TXT");
    IO_pause("Apertar ENTER para continuar");  
 }

 /** 
   appendText - Gravar em arquivo texto certa quantidade de valores. 
   @param fileName - nome do arquivo 
   @param x - quantidade de valores 
 */

 void appendText (chars fileName)
 {
    FILE* arquivo = fopen (fileName,"at");
    chars linha= IO_new_chars (STR_SIZE);

    IO_println ( "Gravar linhas (para terminar, entrar com \"PARAR\"):\n" ); 
    do 
    { 
     // ler do teclado 
        strcpy ( linha, IO_readln ( "" ) ); 
     // gravar valor 
        IO_fprintln ( arquivo, linha ); 
    } 
    while ( strcmp ( "PARAR", linha ) != 0 );

    fclose(arquivo);
 }

 void exemplo_08()
 {
    IO_id("Exemplo_08 - ed07");
    appendText("DADOS4.TXT");
    IO_pause("Apertar ENTER para continuar");  
 }
 
 /** 
   readWords - Ler palavras de arquivo. 
   @param fileName - nome do arquivo 
 */

 void readWords (chars fileName)
 {
    FILE* arquivo = fopen (fileName, "rt");
    chars linha = IO_new_chars(STR_SIZE);

    //tentar ler primeira 
    strcpy (linha, IO_fread(arquivo));
    //repetir enquanto houver dados
    while (! feof(arquivo) && strcmp ("PARA", linha) !=0)
    {
     //mostrar valor 
        printf ( "%s\n", linha ); 
     // tentar ler o proximo 
        strcpy ( linha, IO_fread ( arquivo ) ); 
    }
    fclose(arquivo);
 }

 void exemplo_09()
 {
    IO_id("Exemplo_09 - ed07");
    readWords("DADOS4.TXT");
    IO_pause("Apertar ENTER para continuar");  
 }

 /** 
   searchWord - Procurar palavra em arquivo. 
   @return true, se encontrar; false, caso contrario 
   @param fileName - nome do arquivo 
   @param word       - palavra a procurar 
 */
 
 bool searchWord (chars fileName, chars word)
 {
    FILE* arquivo = fopen (fileName, "rt");
    chars linha = IO_new_chars (STR_SIZE);

    //tentar ler primeira
    strcpy (linha, IO_fread(arquivo));
    //repetir enquando houver dados
    while ( ! feof (arquivo)  && strcmp("word",linha) !=0)
    {
        //tentar ler o proximo
        strcpy (linha, IO_fread (arquivo));
    }
    fclose (arquivo);

 }
 void exemplo_10()
 {
    IO_id("Exemplo_10 - ed07");
    IO_printf("Procurar (\"%s\") = %d\n", "pqr", searchWord("DADOS4.TXT", "pqr"));
    IO_printf("Procurar (\"%s\") = %d\n", "pqs", searchWord("DADOS4.TXT", "pqs"));
    IO_pause("Apertar ENTER para continuar");
 }

 int main()
 {
    int op = 0;

    printf("0 - Terminar\n");
    printf("1 - Exemplo_01\n");
    printf("2 - Exemplo_02\n");
    printf("3 - Exemplo_03\n");
    printf("4 - Exemplo_04\n");
    printf("5 - Exemplo_05\n");
    printf("6 - Exemplo_06\n");
    printf("7 - Exemplo_07\n");
    printf("8 - Exemplo_08\n");
    printf("9 - Exemplo_09\n");
    printf("10 - Exemplo_10\n");

    printf("%s\n", "Qual a opcao?");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        exemplo_01();
        break;
    case 2:
        exemplo_02();
        break;
    case 3:
        exemplo_03();
        break;
    case 4:
        exemplo_04();
        break;
    case 5:
        exemplo_05();
        break;
    case 6:
        exemplo_06();
        break;
    case 7:
        exemplo_07();
        break;
    case 8:
        exemplo_08();
        break;
    case 9:
        exemplo_09();
        break;
    case 10:
        exemplo_10();
        break;
    default:
        break;
    }
 }
