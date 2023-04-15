#include "estrutura.h"
#include "cliente.h"
#include "lista.h"
#include <stdlib.h>

struct Estrutura_ {
    Lista *tabela_nome[TABSIZE];
    Lista *tabela_bairro[TABSIZE];
    Lista *tabela_q_pessoas[5];
    Lista *tabela_criancas[2];
    Lista *tabela_renda[4];
    };

int hash(char *str) {
    int temp = 0;
    int high;

    while(*str) {
        temp = (temp << 4) + *(str++);
        if((high = temp & 0xf0000000)) {
            temp ^= high >> 24;
        }
        temp &= ~high;
    }
    return temp % TABSIZE;
}

Estrutura* cria_estrutura() {
    Estrutura *estrutura = (Estrutura *) malloc(sizeof(Estrutura));
    if(estrutura != NULL) {
        int i;
        for(i = 0; i < TABSIZE; i++) {
            estrutura->tabela_nome[i] = cria_lista();
            estrutura->tabela_bairro[i] = cria_lista();
        }
        for(i = 0; i < 5; i++) {
            estrutura->tabela_q_pessoas[i] = cria_lista();
        }
        for(i = 0; i < 2; i++) {
            estrutura->tabela_criancas[i] = cria_lista();
        }
        for(i = 0; i < 4; i++) {
            estrutura->tabela_renda[i] = cria_lista();
        }
    }
    return estrutura;
}



Lista* recupera_cliente(Estrutura *estrutura, int tipo_busca, int criterio_numerico, char *criterio_textual){
    
     

     
}

void insere_cliente(Estrutura *estrutura, int tipo_busca, Cliente *cliente){
  Node *node = cria_node(cliente);

  int indice = hash(get_nome(cliente));
  inserir_fim(estrutura->tabela_nome[indice], node);
  
//   if(estrutura->tabela_nome[indice].inicio == NULL){
//     estrutura->tabela_nome[indice].inicio = node;
//     estrutura->tabela_nome[indice].fim = node;
//   }else{
//     set_next(estrutura->tabela_nome[indice]fim, node);
//     estrutura->tabela_nome[indice].fim = node;
//   }
}
