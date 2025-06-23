#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI 3.14

/*1.) Fazer um programa (01E1) para: 
- definir e ler um valor real do teclado; 
- supor que esse valor informe a área de uma circunferência, 
- calcular e mostrar o raio para sete vezes essa área. 
 
Exemplo: valor = 5.0 */

void E_01E1 (){

double x = 0.0;
double areaC;

    printf("nos de um valor real do seu teclado: ");
    scanf("%lf", &x);
    getchar();

    x = areaC;

    areaC = 7 * areaC;

double raio = sqrt(areaC /PI );

    printf("O Resultado e = %lf ", &raio);

    
    printf("<enter> para continuar");
    getchar();

}






 
/* E2.) Fazer um programa (01E2) para: 
- definir e ler um valor real do teclado; 
- supor que esse valor represente o volume de uma esfera; 
- calcular e mostrar o raio de três quintos do volume da esfera e a área dessa superfície. 
  DICA: Usar constantes reais em expressões que envolvam valores reais.  
 
Exemplo: valor = 5.0 */

void E_01E2 (){

double VE = 0.0; // volume de uma esfera
double TQ; //tres quintos
double raio;
double area;

    printf("nos de um volume de uma esfera em real: ");
    scanf("%lf", &VE);
    getchar();

    TQ = (3.0/5.0) * VE;

    raio = cbrt(TQ / ((4.0/3.0) * PI));

    area = 4.0 * PI * raio * raio;


    printf("O Raio para tres quintos desse volume e: %lf", raio);

    printf("A area da superficie dessa esfera e: %lf", area);

    printf("<enter> para continuar");
    getchar();
}


//Extras ED2 :

/*E1.) Incluir um procedimento (02E1) para: 
- ler três valores literais separadamente (um caractere em cada) do teclado e  
  dizer se o primeiro valor lido está entre os outros dois, ou se é igual a um deles. 
 
Exemplos: { ('a','e','c'), ('e','a','c'), ('a','c','e'), ('e','c','a'), ('a','e','a') } */

void E_02E1 (){

char x = ' ';
char y = ' ';
char z = ' ';

    
    printf("\ndigite uma letra para x = ");
    scanf("%c", &x);
    getchar(); // limpar

  
    printf("\ndigite uma letra para y = ");
    scanf("%c", &y);
    getchar(); // limpar
    

    printf("\ndigite uma letra para z = ");
    scanf("%c", &z);
    getchar(); // limpar


    if ( x == y || x == z){
        printf("\n(x) e igual a (y) ou (z).\n");
    //}else if (x != y && x != z){
     //   printf("\ntodos sao diferentes entre si \n");
    }else if(x>y && x<z){
        printf("(x) esta entre os outros dois");
    
    }else if((x == y || x == z)){
        printf("(x) e igual aos outros caracteres");
    }else{printf("\ntodos sao diferentes entre si \n");}

}




 
/* E2.) Incluir um procedimento (02E2) para: 
- ler três valores literais separadamente (um caractere em cada) do teclado e  
  dizer se o primeiro valor lido está fora do intervalo definido pelos outros dois, 
  se esses todos forem diferentes entre si. 
  OBS.: Notar que não haverá garantias de ser o segundo menor que o terceiro. 
 
Exemplos: { ('a','e','c'), ('e','a','c'), ('a','c','e'), ('e','c','a'), ('a','e','a') } */
 
 
void E_02E2 (){

char x = ' ';
char y = ' ';
char z = ' ';

  
    printf("\ndigite uma letra para x = ");
    scanf("%c", &x);
    getchar();
  
    printf("\ndigite uma letra para y = ");
    scanf("%c", &y);
    getchar();

    printf("\ndigite uma letra para z = ");
    scanf("%c", &z);
    getchar();

    if ( x > y || x > z){
        printf("\n(x) esta fora do intervalo\n");
    }
    else if ( y < x || y > z){
        printf("\n(y) esta fora do intervalo\n");
    }
    else if ( z < x || z < y){
        printf("\n(z) esta fora do intervalo\n");
    }
    else if ((x > y && x < z) || ( x > z && x < y)){
        printf("\no primeiro char esta em os dois. \n");
    }
    else{
        printf("todos sao diferentes de si e o (x) nao esta entre nenhum");
    }

}




/*E1.) Incluir um método (03E1) para: 
- ler uma linha do teclado; 
- separar em outra cadeia de caracteres e mostrar  
  todos os símbolos não alfanuméricos (letras ou dígitos) na cadeia de caracteres. 
  DICA: A leitura de uma linha inteira, incluindo espaços em branco, 
  poderá ser feita por meio de    
 
  IO_readln( "_" ),  
 
  ou  
 
  fgets ( cadeia, tamanho, stdlin );      // melhor, mais seguro 
  cadeia [ strcspn(cadeia,"\n") ] = '\0'; // eliminar a mudanca de linha, se houver 
 
  ou  
 
  gets( )          // NAO SEGURO, NAO RECOMENDADO. EVITAR !!!. 
 
Exemplo: sequência = "P4LaVr@O! & pAl4vR1n#a" */


void E_03E1 (){

char N_AN   [100];
char result [100];
int  j     =    0;

    printf("nos forneca uma palavra: ");
    fgets(N_AN, 100, stdin);

for (int i = 0; N_AN[i] != '\0'; i = i + 1){
    if(N_AN[i] == '\n'){
        N_AN[i] = '\0'; // tirando quebras de linhas
    }
}

for (int i = 0; N_AN[i] != '\0'; i = i + 1){ // apos a verificacao
    char c = N_AN[i]; // definindo c como a string proposta
if(!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <='z') || // condicoes para ser nao alfanumerico
    (c >= '0' && c <= '9'))){
        result[j] = c;
        j++;
    } // na minha logica faz o seguinte pensamento de que ele ta verificando caractere por caractere e verificando se esses valores tem alfanumericos
}
result[j] = '\0';

    printf("simbolos nao alfanumericos: %s\n", result);

}


 
/*E2.) .) Incluir um método (03E2) para: 
- ler uma cadeia de caracteres do teclado; 
- dizer se a sequência contém apenas símbolos que NÃO são dígitos ou letras. 
 
Exemplo: sequência = "+@0!$#"*/ 

void E_03E2 (){

char CS [100];
char R  [100];
int  t =    0;

    printf("Nos forneca uma cadeia de caracteres: ");
    fgets(CS, 100 , stdin);

for (int i = 0; CS[i] != '\0'; i = i + 1){
    if (CS[i] == '\n'){
        CS[i] =  '\0'; // tirando quebras de linhas
    }
}

for(int i = 0; CS[i] != '\0'; i = i + 1 ){
    char R = CS[i];
    if((CS))
}


}


















int main (){

    E_03E1();

    return 0;
}