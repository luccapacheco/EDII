#ifndef LISTA_H
#define LISTA_H

#include "node.h"


#define TRUE 1
#define FALSE 0

typedef struct Lista {
    Node *inicio;
    int quantidade;
} Lista;



Lista* cria_lista();
void inserir_inicio(Lista *lista, Cliente *cliente);
// int ler_inicio(Lista *lista, int valor);
Node* ler_fim(Lista *lista);
// int ler_posicao(Lista *lista, int posicao, int valor);
void inserir_fim(Lista *lista, Node *node);
// int inserir_posicao(Lista *lista, int posicao, int valor);
// int renover_inicio(Lista *lista, int* valor);
// int remover_fim(Lista *lista, int* valor);
// int remover_posicao(Lista *lista, int posicao, int valor);
// //int get_inicio(Lista *lista, int* valor);
// int get_fim(Lista *lista, int* valor);
// int get_posicao(Lista *lista, int posicao, int* valor);
int get_quantidade(Lista *lista);
// void libera_lista(Lista *lista);
// int lista_cheia(Lista *lista);
// //void show_direct(Lista *lista);
// //void show_reverse(Lista *lista);
Node* get_inicio(Lista *lista);

#endif // LISTA_H