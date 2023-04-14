#include "node.h"
typedef struct Lista_ Lista;
#define TRUE 1
#define FALSE 0


Lista* cria_lista();
int ler_inicio(Lista *lista, int valor);
int ler_fim(Lista *lista, int valor);
int ler_posicao(Lista *lista, int posicao, int valor);
int inserir_inicio(Lista *lista, int valor);
int inserir_fim(Lista *lista, int valor);
int inserir_posicao(Lista *lista, int posicao, int valor);
int renover_inicio(Lista *lista, int* valor);
int remover_fim(Lista *lista, int* valor);
int remover_posicao(Lista *lista, int posicao, int valor);
//int get_inicio(Lista *lista, int* valor);
int get_fim(Lista *lista, int* valor);
int get_posicao(Lista *lista, int posicao, int* valor);
int get_quantidade(Lista *lista);
void libera_lista(Lista *lista);
int lista_cheia(Lista *lista);
//void show_direct(Lista *lista);
//void show_reverse(Lista *lista);
Node* get_inicio(Lista *lista);