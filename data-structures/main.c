// main.c
#include <stdio.h>
#include "lista.h"

int main() {
    TLista* lista = NULL;
    
    lista = insere_ordenado(lista, 10);
    lista = insere_ordenado(lista, 5);
    lista = insere_ordenado(lista, 20);
    lista = insere_ordenado(lista, 15);
    lista = insere_ordenado(lista, 10);
    lista = insere_ordenado(lista, 8);
    
    imprime_lista(lista);  // Saída esperada: 5 -> 10 -> 15 -> 20 -> NULL
    
    return 0;
}
