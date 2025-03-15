#include <stdio.h>

void atividade1 (void){

int x= 0;
int area= 0;

    printf("Me de um valor inteiro: ");
    scanf("%d", &x);
    getchar();
    
    
int calcarea = 3 * x;
    area = calcarea * calcarea;

    printf("\n%d e o lado do quadrado!\n", x);
    printf("A area do quadrado calculada foi: %d", calcarea);

   return;

}

int main (){

  atividade1();
  
return 0;
    
}