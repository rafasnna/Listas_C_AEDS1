#include <stdio.h>  // Biblioteca padrão de entrada e saída
#include <math.h>   // Biblioteca para funções matemáticas, como pow

// Função que gera e imprime múltiplos de 4 até x
void multiplos_04(int x) {
    int valor = 0;
    int i = 1;
    for (i = 1; i <= x; i++) {
        valor = i * 4;
        printf("\n%d", valor);
    }
}

// Método que solicita uma quantidade de múltiplos de 4 a ser gerada
void method_0511() {
    int n = 0;
    printf("\nDigite uma quantidade de valores a serem gerados: ");
    scanf("%d", &n);

    multiplos_04(n);  // Chama a função multiplos_04
}

// Função que gera e imprime múltiplos de 3 e 4 (12)
void mult_03_04(int x) {
    int i = 1;
    int valor = 0;

    for (i = 1; i <= x; i++) {
        valor = 12 * i;
        printf("\n%d", valor);
    }
}

// Método que solicita uma quantidade e gera múltiplos de 3 e 4
void method_0512() {
    int n = 0;
    printf("\nDigite uma quantidade inteira de valores a serem gerados: ");
    scanf("%d", &n);

    printf("\nOs múltiplos de 3 e 4 são : ");
    mult_03_04(n);  // Chama a função mult_03_04
}

// Função que calcula a potência de 3 até x e imprime
void potencia(int x) {
    int i = 0;
    int valor = 0;
    for (i = x; i > 0; i--) {
        valor = pow(3, i);  // Calcula a potência de 3^i
        printf("\n%d", valor);
    }
}

// Método que solicita uma quantidade de valores e gera potências de 3
void method_0513() {
    int n = 0;
    printf("\nDigite uma quantidade de valores a serem gerados: ");
    scanf("%d", &n);

    potencia(n);  // Chama a função potencia
}

// Função que gera os inversos de múltiplos de 4 até x
void inverso_04(int x) {
    int i = 1;
    int valor = 0;
    for (i = 1; i <= x; i++) {
        valor = i * 4;
        printf("\n 1/%d", valor);  // Imprime o inverso de cada múltiplo de 4
    }
}

// Método que solicita uma quantidade e gera inversos de múltiplos de 4
void method_0514() {
    int n = 0;
    printf("\nDigite uma quantidade de valores a serem gerados: ");
    scanf("%d", &n);

    inverso_04(n);  // Chama a função inverso_04
}

// Função que calcula potências de um número x e imprime seus inversos
void inv_x(int n, double x) {
    int i = 1;
    int expoente = 1;
    double valor = 0.0;
    for (i = 1; i <= n; i++) {
        valor = pow(x, expoente);  // Calcula x^expoente
        printf("\n 1/%f", valor);  // Imprime o inverso da potência
        expoente = expoente + 2;
    }
}

// Método que solicita uma quantidade e valor real, e imprime potências inversas
void method_0515() {
    int n = 0;
    double x = 0.0;
    printf("\nDigite uma quantidade de valores a serem gerados: ");
    scanf("%d", &n);
    printf("\nDigite um valor real para x: ");
    scanf("%lf", &x);

    inv_x(n, x);  // Chama a função inv_x
}

// Função que soma múltiplos de 4 até x, ignorando múltiplos de 5
int somam_04(int x) {
    int i = 1;
    int valor = 0;
    int soma = 0;
    for (i = 1; i <= x + 1; i++) {
        valor = i * 4;
        if (!(valor % 5 == 0)) {  // Se não for múltiplo de 5
            soma = valor + soma;  // Soma os múltiplos de 4
            printf("\n%d", soma);
        }
    }
    return soma;  // Retorna o valor total somado
}

// Método que solicita uma quantidade e calcula a soma dos múltiplos de 4
void method_0516() {
    int n = 0;
    int soma = 0;
    printf("\nDigite uma quantidade de valores a serem gerados: ");
    scanf("%d", &n);
    soma = somam_04(n);  // Chama a função somam_04
    printf("\nA soma total é de %d ", soma);
}

// Função que soma inversos de múltiplos de 3, exceto os múltiplos de 5
int soma_inverso(int x) {
    int i = 0;
    int soma = 0;
    int valor = 0;
    for (i = 1; i <= x + 1; i++) {
        valor = i * 3;
        if (!(valor % 5 == 0)) {  // Se não for múltiplo de 5
            soma = valor + soma;  // Soma os múltiplos de 3
            printf("\n1/%d", soma);  // Imprime o inverso da soma
        }
    }
    return soma;
}

// Método que solicita uma quantidade e imprime a soma de inversos de múltiplos de 3
void method_0517() {
    int n = 0;
    int soma = 0;
    printf("\nDigite uma quantidade de valores a serem gerados: ");
    scanf("%d", &n);
    soma = soma_inverso(n);  // Chama a função soma_inverso
    printf("\nA soma é de 1/%d ", soma);
}

// Função que soma a partir de 4, incrementando o valor a cada iteração
int som_um(int x) {
    int i = 0;
    int soma = 0;
    int valor = 4;
    for (i = 1; i <= x + 1; i++) {
        soma = valor + soma;
        printf("\n%d", soma);
        valor++;
    }
    return soma;
}

// Método que solicita uma quantidade e imprime a soma incremental a partir de 4
void method_0518() {
    int n = 0;
    int soma = 0;
    printf("\nDigite uma quantidade de valores a serem gerados: ");
    scanf("%d", &n);
    soma = som_um(n);  // Chama a função som_um
    printf("\nA soma é de %d ", soma);
}

// Função que soma quadrados dos valores a partir de 4
int som(int x) {
    int i = 0;
    int soma = 0;
    int valor = 4;
    for (i = 1; i <= x + 1; i++) {
        soma = valor * valor;
        printf("\n%d", soma);  // Imprime o quadrado do valor
        valor++;
    }
    return soma;
}

// Método que solicita uma quantidade e imprime a soma dos quadrados
void method_0519() {
    int n = 0;
    int soma = 0;
    printf("\nDigite uma quantidade de valores a serem gerados: ");
    scanf("%d", &n);
    soma = som(n);  // Chama a função som
    printf("\nA soma é de %d ", soma);
}

// Função que calcula e imprime inversos de valores a partir de 4
int inv_som(int x) {
    int i = 0;
    int total = 0;
    int valor = 4;
    for (i = 0; i < x; i++) {
        valor = valor + i;
        printf("\n1/%d", valor);  // Imprime o inverso do valor
        total = total + valor;
    }
    return total;
}

// Método que solicita uma quantidade e calcula inversos de somas a partir de 4
void method_0520() {
    int n = 0;
    int soma = 0;
    printf("\nDigite uma quantidade de valores a serem gerados: ");
    scanf("%d", &n);
    soma = inv_som(n);  // Chama a função inv_som
    printf("\nA soma é de 1/%d ", soma);
}

// Função principal com menu de opções
int main() {
    int x = 0;

    do {
        // Exibe o menu de opções
        printf("\n\nOpções: ");
        printf("\nOpção 1 - ");
        printf("\nOpção 2 - ");
        printf("\nOpção 3 - ");
        printf("\nOpção 4 - ");
        printf("\nOpção 5 - ");
        printf("\nOpção 6 - ");
        printf("\nOpção 7 - ");
        printf("\nOpção 8 - ");
        printf("\nOpção 9 - ");
        printf("\nOpção 10 - ");

        printf("\nEscolha uma opção: ");
        scanf("%d", &x);  // Lê a opção escolhida
        printf("\nopção escolhida =  %d ", x);

        // Chama a função correspondente à opção escolhida
        switch (x) {
            case 0: break;
            case 1: method_0511(); break;
            case 2: method_0512(); break;
            case 3: method_0513(); break;
            case 4: method_0514(); break;
            case 5: method_0515(); break;
            case 6: method_0516(); break;
            case 7: method_0517(); break;
            case 8: method_0518(); break;
            case 9: method_0519(); break;
            case 10: method_0520(); break;
            default: printf("\n\n ERRO: opção inválida."); break;
        }
    } while (x != 0);  // Repete o menu até que o usuário digite 0 para sair

    printf("\n\nApertar ENTER para terminar: ");
    getchar();  // Aguarda o usuário pressionar ENTER antes de encerrar
    return 0;
}
