/*19/05/2025
Autor: Rafael Sampaio*/

#include <iostream> //std::cin, std::cout, std:endl
#include <limits>   //std::numeric_limits
#include <string>   //para cadeia de caracteres

//DEF GLOBAIS

void pause (std::string text){

    std::string dummy;
    std::cin.clear();
    std::cout<<std::endl<<text;
    std::cin.ignore();
    std::getline(std::cin, dummy);
}

#include "myarray.hpp"

using namespace std;

void metodo_00(){

}

void metodo_01(){
    Array <int> int_array(5,0);

    int_array.set( 0,1 );
    int_array.set( 1,2 );
    int_array.set( 2,3 );
    int_array.set( 3,4 );
    int_array.set( 4,5 );

    cout << "\nMetodo 01 - 0.1\n" << endl;
    int_array.print();//mostrar dados / show data

    int_array.free();//reciclar espaco / recycle space

    pause("<enter> para continuar"); //encerrar / end
}
/*
  0:        1
  1:        2
  2:        3
  3:        4
  4:        5

Creio que a saida esteja correta


*/

void metodo_02(){
    
Array <int> int_array(5,0); // definindo dados

    cout << endl << "Metodo 02 - 0.2" <<endl; //identificar

    int_array.read();//ler os dados

    int_array.print();// mostrar os dados

    int_array.free();// reciclagem de dados

    pause("<enter> para continuar");

}

void metodo_03(){

    Array <int> int_array(5,0); // dados
    
    cout << endl << "Metodo 02 - 0.2" << endl;//identificar

    int_array.read();//ler dados

    int_array.fprint("INT_ARRAY1.TXT");//mostrar dados

    int_array.free();//reciclar espaço

    //encerrar
    pause("<enter> para continuar");
}

void metodo_04(){

    
 // definir dados 
    Array  <int> int_array ( 5, 0 ); 
 
 // identificar 
   cout << endl << "Metodo 04 - 0.4" << endl; 
 
 // ler dados 
    int_array.fread ( "INT_ARRAY1.TXT" ); 
 
 // mostrar dados 
    int_array.print ( ); 
 
 // reciclar espaco 
    int_array.free ( );

    pause("<enter> para continuar");
}

void metodo_05(){

    // definir dados 
    int other [ ] = { 1, 2, 3, 4, 5 }; 
    Array  <int> int_array ( 5, other ); 
 
 // identificar 
    cout << endl << "Metodo 05 - 0.5" << endl;
 
 // mostrar dados 
    cout << "\nCopia\n" << endl; 
    int_array.print (  ); 
 
 // reciclar espaco 
    int_array.free ( );

    pause("<enter> para continuar");
}

void metodo_06(){

    // definir dados 
    Array  <int> int_array1 ( 1, 0 ); 
 
 // identificar 
    cout <<  endl << "Metodo 06 - v0.6" << endl; 
 
 // ler dados 
    int_array1.fread ( "INT_ARRAY1.TXT" ); 
 
 // mostrar dados 
    cout << "\nOriginal\n" << endl; 
    int_array1.print ( ); 
 
 // criar   copia 
    Array <int> int_array2 ( int_array1 ); 
 
 // mostrar dados 
    cout << "\nCopia\n" << endl; 
    int_array2.print ( ); 
 
 // reciclar espaco 
    int_array1.free ( );  
    int_array2.free ( ); 

    pause("<enter> para continuar");
}

void metodo_07(){

    Array <int> int_array1(1,0);
    Array <int> int_array2(1,0);

    //identificar 
    cout << endl << "Metodo 07 - 0.7" << endl;

    int_array1.fread("INT_ARRAY1.TXT");

    cout << "\nOriginal\n" << endl;
    int_array2 = int_array1;

    cout << "\nCopia\n" << endl;
    int_array2.print();

    int_array1.free();
    int_array2.free();

    pause("<enter> para continuar");
}

void metodo_08(){

    int other [] = {1,2,3};
    Array <int> int_array1(3,other);
    Array <int> int_array2(3,other);
    int x;

    cout << endl << "Metodo 08 - 0.8 " << endl;

    cout << endl;
    cout << "Array_1";
    int_array1.print();

    cout << "Array_2";
    int_array2.print();

    cout << "Igualdade = " << (int_array1 == int_array2)<< endl;

    int_array2.set(0,(-1));

    cout << endl;
    cout << "Array_1" << endl;
    int_array1.print();

    cout << "Array_2" << endl;
    int_array2.print();

    cout << "Igualdade = " << (int_array1 == int_array2) << endl;

    int_array1.free();
    int_array2.free();
    pause("<enter> para continuar");
}

void metodo_09(){

    Array <int> int_array1(1,0);
    Array <int> int_array2(1,0);
    Array <int> int_array3(1,0);

    cout << endl << "Metodo 09 - 0.9 " << endl;

    int_array1.fread("INT_ARRAY1.TXT");

    int_array2 = int_array1;
    int_array3 = int_array2 + int_array1;

    cout << endl;
    cout << "Original" << endl;
    int_array1.print();

    cout << "Copia" << endl;
    int_array2.print();

    cout << "Soma" << endl;
    int_array2.print();

    cout << "Soma" <<endl;
    int_array3.print();

    int_array1.free();
    int_array2.free();
    int_array3.free();


    pause("<enter> para continuar");
}

void metodo_10(){

    int other[] = {1,2,3,4,5};
    Array <int> int_array (5, other);
    int x;

    cout << endl << "Metodo 10 - 0.10" << endl;

    cout << "\nAcesso externo" << endl;
    for (x = 0; x < int_array.getLength(); x = x + 1){
        cout << endl << setw(3) << x << ":" << int_array[x];
    }
    cout << endl << "\nFora dos limites:";
    cout << endl << "[-1]: " << int_array.get(-1)     << endl;
    cout << endl << "["      << int_array.getLength() <<  "]:" 
                 << int_array [int_array.getLength()] << endl;

    int_array.free(); 

    pause("<enter> para continuar");
}

int main (int argc, char** argv){

int x = 0;

do{
    cout <<"Exemplos_11 - Programa de nivel 0" << endl;

    //mostrar opcoes
        cout<<"Opcoes                               "<<endl;
        cout<<"0 - Pare                             "<<endl;
        cout<<"1 - mostrar dados inteiros em arranjo"<<endl;
        cout<<"2 -                                  "<<endl;
        cout<<"3 -                                  "<<endl;
        cout<<"4 -                                  "<<endl;
        cout<<"5 -                                  "<<endl;
        cout<<"6 -                                  "<<endl;
        cout<<"7 -                                  "<<endl;
        cout<<"8 -                                  "<<endl;
        cout<<"9 -                                  "<<endl;
        cout<<"10-                                  "<<endl;

    //ler do teclado
    cout << endl << "Entrar com uma opcao: ";
    cin >> x;

    switch(x){
        case 0:  metodo_00(); break;
        case 1:  metodo_01(); break;
        case 2:  metodo_02(); break;
        case 3:  metodo_03(); break;
        case 4:  metodo_04(); break;
        case 5:  metodo_05(); break;
        case 6:  metodo_06(); break;
        case 7:  metodo_07(); break;
        case 8:  metodo_08(); break;
        case 9:  metodo_09(); break;
        case 10: metodo_10(); break;
    }
}
    while (x != 0);
    //encerrar
    pause("<enter> para finalizar");
    return (0);
}


/* 
---------------------------------------------- documentacao complementar 
 
---------------------------------------------- notas / observacoes / comentarios 
 
---------------------------------------------- previsao de testes 
 
---------------------------------------------- historico 
 
Versao Data      Modificacao 
  0.1 __/__      esboco 
 
 ---------------------------------------------- testes 
 
Versao Teste 
  0.1 01. ( OK )  identificacao de programa 
 
*/
//g++ -o nome_do_executavel nome_do_arquivo.cpp