#include <stdio.h>


int main() {
    int tamanho = 9;
    int listaTeste[] = {3,5,7,2,4,16,20,11,19};
    int iteracoes = 0;
    for (int i = tamanho-1; i != 0; i--) {
        for (int j = 0; j < tamanho - 1; j++) {
            iteracoes += 1;
            int numeroAtual = listaTeste[j];
            int proxNumero = listaTeste[j+1];
            // printf("%d, %d\n", numeroAtual, proxNumero);
            if (numeroAtual > proxNumero) {
                int temporario = proxNumero;
                listaTeste[j+1] = numeroAtual;
                listaTeste[j] = temporario;
            }
        }
    }
    printf("Foi iterado %d vezes", iteracoes); // (N - 1)² 
    printf("[");
    for (int i = 0; i < tamanho - 1; i++) {
        printf("%d,", listaTeste[i]);
    }
    printf("]");
    return 0;
}