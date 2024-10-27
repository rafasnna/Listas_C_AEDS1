#include <stdio.h>
#include <math.h>
#include <string.h>
#include "io.h"
#include <ctype.h>

void f_01 (chars fileName, int valor)
{
   FILE* arquivo = fopen ( fileName, "wt");
   int y = 1;
   int i = 0;
   for (y = 1; y <= valor; y = y + 1){
      if(y % 2 ==0){
        valor ++;
      }
      else{
            i = y * 3;
            fprintf (arquivo, "%d\n", i);
          }
       }
       fclose (arquivo);
}
void metodo01 ( void )
{
   int n = 0;
   printf ("\n\nEntrar com um valor:");
   scanf("%d",&n);
   f_01 ("f_01.txt", n);

    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
}
void f_02 (chars fileName, int n)
{
  FILE * arquivo = fopen(fileName, "wt");
  int y = 0;
  int z = (n - 1) + 6;
  int i = 0;
  int x = 6;
    for(y = z; y>=x ; y--){
      i = y * 6;
      if(!(i % 2 == 0)){
        x = x - 1;
        }
        else{
          fprintf(arquivo, "%d\n", i);
          }
    }
      fclose(arquivo);
}
void metodo02 ( void )
{
   int n = 0;
   printf ("\n\nEntrar com um valor:");
   scanf("%d", &n);
   f_02 ("f_02.txt", n);
 
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
}
void f_pow (chars fileName, int valor){
  FILE * arquivo = fopen(fileName, "wt");
  int i = 0;
  int result = 0;
    for(i = 0; i < valor; i++){
      result = pow(4, i);
      fprintf(arquivo, "%d\n", result);      
    }
    fclose(arquivo);
}
void metodo03 ( void )
{
   int valor = 0;
   printf ( "\n%s\n", "Metodo03" );
   printf ("\n\nEntrar com um valor:");
   scanf("%d", &valor);
   f_pow ("f_pow.txt", valor);

   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
}
void f_inv_pow (chars fileName, int valor){
   FILE * arquivo = fopen(fileName, "wt");
   int i = 0;
   int result = 0;
    for(i = valor; i >= 0; i--){
      result = pow( 4, i);
      fprintf(arquivo, "1/%d\n", result);
      }
  fclose(arquivo);
}
void metodo04 ( void )
{
   int valor = 0;
   printf ( "\n%s\n", "Metodo04" );
   printf ("\n\nEntrar com um valor:");
   scanf("%d", &valor);
   f_inv_pow ("f_inv_pow.txt", valor);
 
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
}
void real_potencia (chars fileName, int valor, int x){
  FILE * arquivo = fopen(fileName, "wt");
  int i;
  int j = 2;
  double result = 0.0;
  int init = 1;
  double total = 0.0;
    fprintf(arquivo, "%d\n", init);
      for(i = 2; i <= valor; i++){
        result = pow(x, j);
        j+= 2;
        total = 1 / result;
        fprintf(arquivo, "%lf\n", total);
        }
    fclose(arquivo);
}
  
void metodo05 ( void )
{
   int valor = 0;
   double x = 0;
   printf ("\n\nEntrar com um valor inteiro :");
   scanf("%d", &valor);
   printf ("\n\nEntrar com um valor real :");
   scanf("%lf", &x);
   real_potencia ("real_potencia.txt", valor, x);
   
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
}
void fm2b (chars fileName, int valor, int x, int soma)
{
   FILE* arquivo = fopen ( fileName, "wt");
   int y = 0;
   double z = 0;
   double o = 1;
   for (
        y = 0;
        y <= valor - 1;
        y = y + 1
       )
       {
            fprintf (arquivo, "%lf\n", 1/o + soma);
            z = z + 2;
            o = pow( x , z );
       }
       fclose (arquivo);
}
void f_0716(const char* inputFile, const char* outputFile, int n) {
    FILE* arquivoEntrada = fopen(inputFile, "rt");
    FILE* arquivoSaida = fopen(outputFile, "wt");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo %s\n", inputFile);
        return;
    }
    if (arquivoSaida == NULL) {
        printf("Erro ao abrir o arquivo %s\n", outputFile);
        fclose(arquivoEntrada); 
        return;
    }

    int valor = 0;
    int soma = 0;
    int count = 0;

    while (fscanf(arquivoEntrada, "%d", &valor) == 1 && count < n) {
        soma += valor;
        count++;
    }

    fprintf(arquivoSaida, "Quantidade: %d\nSoma: %d\n", n, soma);

    fclose(arquivoEntrada);
    fclose(arquivoSaida);
}

void metodo06(void) {
    int n = 0;
    
    printf("\n\nEntrar com um valor para a quantidade de números a serem somados: ");
    scanf("%d", &n);

    f_0716("f_716.txt", "RESULTADO06.TXT", n);

    printf("\n%s\n", "Resultado gravado em 'RESULTADO06.TXT'. Apertar ENTER para continuar.");
    getchar(); 
    getchar();  
}

void metodo07 ( void )
{
  int valor = 0;
   printf ( "\n%s\n", "Metodo07" );
   printf ("entrar com um valor:");
   scanf("%d", &valor);
   f_inv_pow ("RESULTADO07.txt", valor);
   
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );

}

void fibonacci (chars fileName, int valor)
{
   FILE* arquivo = fopen ( fileName, "wt");
   int y = 0;
   int z = 0;
   int o = 1;
   int x = 0;
      for ( y = 0; y <= valor - 1; y = y + 1){
            x = o + z;
            fprintf (arquivo, "%d\n", x);
            o = z;
            z = x;
            }
       fclose (arquivo);
}
void metodo08 ( void )
{
   int valor = 0;
   int x = 0;

   printf ( "\n%s\n", "Metodo08" );
   printf ("entrar com um valor:");
   scanf("%d", &valor);
   fibonacci("RESULTADO08.txt", valor);
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
}

void  islow(chars fileName, char * cadeia){
   FILE* arquivo = fopen ( fileName, "wt");
   int posicao = 0;
   for (posicao = 0; posicao < strlen(cadeia); posicao++){
      if (isalpha(cadeia[posicao])){
         if (cadeia[posicao] >= 'a' && cadeia[posicao] <= 'z'){
            fprintf ( arquivo, "%c\n", (cadeia[posicao]));
         }
      }
   }
   fclose ( arquivo );
}
void metodo09 ( void ){
   char cadeia[80];
   
   printf ("entrar com uma cadeia:");
   scanf("%s", cadeia);
   islow("RESULTADO09.txt", cadeia);
   printf ("\n%s\n", "Apertar ENTER para continuar.");
   getchar( );
}
void d_m_i_4(chars fileName, char * cadeia){
   FILE* arquivo = fopen ( fileName, "wt");
   int posicao = 0;
   for ( posicao = 0; posicao < strlen(cadeia); posicao = posicao + 1){
      if (isdigit(cadeia[posicao])){
         if ((cadeia[posicao]) <= '4' ){
            fprintf ( arquivo, "%c\n", (cadeia[posicao]));
         }
      }
   }
   fclose ( arquivo );
}
void metodo10 ( void ){
   printf ( "\n%s\n", "Metodo10" );
   char cadeia[80];
   printf ("entrar com uma cadeia:");
   scanf("%s", cadeia);
   d_m_i_4("RESULTADO10.txt", cadeia);
 
   printf ( "\n%s\n", "Apertar ENTER para continuar." );
   getchar( );
}

int main ( void ){
    int opcao = 0;
    do
    {
        printf ( "\n" );        
        printf ( "%s\n", "Opcoes:"         );
        printf ( "%s\n", " 0 - parar"      );
        printf ( "%s\n", " 1 - metodo 01   2 - metodo 02" );
        printf ( "%s\n", " 3 - metodo 03   4 - metodo 04" );
        printf ( "%s\n", " 5 - metodo 05   6 - metodo 06" );
        printf ( "%s\n", " 7 - metodo 07   8 - metodo 08" );
        printf ( "%s\n", " 9 - metodo 09  10 - metodo 10" );
        printf ( "%s\n", "" );
        printf ( "%s", "Qual a sua opcao? " );
        scanf  ( "%d", &opcao ); getchar ( );
        printf ( "%d",  opcao );
        switch ( opcao )
        {
           case  0:               break;
           case  1: metodo01 ( ); break;
           case  2: metodo02 ( ); break;
           case  3: metodo03 ( ); break;
           case  4: metodo04 ( ); break;
           case  5: metodo05 ( ); break;
           case  6: metodo06 ( ); break;
           case  7: metodo07 ( ); break;
           case  8: metodo08 ( ); break;
           case  9: metodo09 ( ); break;
           case 10: metodo10 ( ); break;
           default:
                    printf ( "\n%s\n\n", "ERRO: Opcao invalida." );
                    break;
        }
    }
    while ( opcao != 0 );
    printf ( "\n%s\n\n", "Apertar ENTER para terminar." );
    getchar( );
  return 0;
}
