 #include "node.h"
#include <stdlib.h>

struct Node_ {
    int valor;
    Cliente *data;
    Node *next;  
};

Node* cria_node(Cliente *cliente) {
    Node *novo = (Node *) malloc(sizeof(Node));
    if(novo != NULL) {
        novo->data = cliente;
    }
    return novo;
}



Cliente* get_data(Node *node) {
    return node->data;
}

Node* get_next(Node *node) {
    return node->next;
}

void set_next(Node* node, Node* node_next){
     node->next = node_next;
}

int set_data(Node* node, int valor){
     node->data = valor;
}