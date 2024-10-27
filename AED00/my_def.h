

// Prototipos das funções
void P1(int X);
void P2(int X);

void P1(int X) {
    X = X + 1;
    printf("CHAMADO O PROCEDIMENTO P1 COM X = %d\n", X);
    if (X < 4) {
        P2(X);
        P1(X); // Corrigido para chamar P1 recursivamente com X atualizado
    }
    printf("\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = %d\n", X);
    getchar(); // Pausa para visualização
}

void P2(int X) {
    printf("CHAMADO O PROCEDIMENTO P2 COM X = %d\n", X);
    if (X > 1) {
        P2(X - 1); // Chamada recursiva com X decrementado
    }
    printf("RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = %d\n", X);
    getchar(); // Pausa para visualização
}

int main(void) {
    printf("EXEMPLO0508 - MULTIPLAS CHAMADAS/RETORNOS\n\n");
    P1(1); // Inicia a chamada com X igual a 1
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // Pausa final para visualização
    return EXIT_SUCCESS;
}
