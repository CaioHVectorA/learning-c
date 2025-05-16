#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
    int info;
    struct Lista* prox;
} TLista;

void imprime_lista(TLista* head) {
    while (head) {
        printf("%d -> ", head->info);
        head = head->prox;
    }
    printf("NULL \n");
}

TLista* insere_inicio(TLista* li, int i) {
    TLista* novo = (TLista*) malloc(sizeof(TLista));
    novo->info = i;
    novo->prox = li;
    return novo;
}

TLista* insere_fim(TLista* li, int i) {
    TLista* temp = li;
    // iterar até o último
    while (li->prox) {
        li = li->prox;
    }
    TLista* novo = (TLista*) malloc(sizeof(TLista));
    novo->info = i;
    novo->prox = NULL;
    li->prox = novo;
    return temp;
}

TLista* insere_ordenado(TLista* li, int i) {
    TLista* novo = (TLista*) malloc(sizeof(TLista));
    novo->info = i;
    
    // Caso 1: A lista está vazia ou o novo elemento é menor que o primeiro
    if (li == NULL || li->info >= i) {
        novo->prox = li;
        return novo;
    }

    // Caso 2: Percorrer a lista até encontrar a posição correta
    TLista* temp = li;
    while (temp->prox != NULL && temp->prox->info < i) {
        temp = temp->prox;
    }

    // Inserir o novo nó
    novo->prox = temp->prox;
    temp->prox = novo;

    return li;
}
