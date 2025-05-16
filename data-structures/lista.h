// lista.h
#ifndef LISTA_H
#define LISTA_H

typedef struct Lista {
    int info;
    struct Lista* prox;
} TLista;

// Funções que vão ser implementadas no arquivo lista.c
TLista* insere_inicio(TLista* li, int i);
TLista* insere_fim(TLista* li, int i);
TLista* insere_ordenado(TLista* li, int i);
void imprime_lista(TLista* head);

#endif
