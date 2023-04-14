#ifndef ESTRUTURA_H
#define ESTRUTURA_H

#include "cliente.h"
#include "lista.h"
typedef struct Estrutura_ Estrutura;
#define TABSIZE 19

Estrutura* cria_estrutura();

void insere_cliente(Estrutura *estrutura, int tipo_busca, Cliente *cliente);

int hash(char *str);

Lista* recupera_cliente(Estrutura *estrutura, int tipo_busca, int criterio_numerico, char *criterio_textual);

#endif // ESTRUTURA_H