#include <stdio.h>

int main() {
    // Declaração do array a ser ordenado
    int array[] = {12, 11, 13, 5, 6, 3, 2, 1,4,8,9};
    
    // Calculando o tamanho do array
    int tamanho_array = sizeof(array) / sizeof(array[0]);
    
    // Variáveis para os loops e para o valor sendo inserido
    int indice_atual;         // Índice do elemento atual sendo inserido
    int indice_anterior;      // Índice para percorrer elementos anteriores
    int valor_para_inserir;   // Valor que está sendo inserido na posição correta
    
    // ALGORITMO INSERTION SORT
    // Começamos a partir do segundo elemento (índice 1)
    for (indice_atual = 1; indice_atual < tamanho_array; indice_atual++) {
        
        // Guardamos o valor atual que será inserido na posição correta
        valor_para_inserir = array[indice_atual];
        
        // Começamos a comparar com o elemento anterior
        indice_anterior = indice_atual - 1;
        
        // Enquanto não chegamos ao início do array E
        // o elemento anterior for maior que o valor a ser inserido
        while (indice_anterior >= 0 && array[indice_anterior] > valor_para_inserir) {
            
            // Deslocamos o elemento anterior uma posição para frente
            array[indice_anterior + 1] = array[indice_anterior];
            
            // Passamos para o elemento anterior
            indice_anterior = indice_anterior - 1;
        }
        
        // Inserimos o valor na posição correta
        array[indice_anterior + 1] = valor_para_inserir;
    }
    
    // Mostrando o array ordenado
    printf("Array ordenado:\n");
    for (indice_atual = 0; indice_atual < tamanho_array; indice_atual++) {
        printf("%d ", array[indice_atual]);
    }
    printf("\n");
    
    return 0;
}