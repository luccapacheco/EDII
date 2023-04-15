#ifndef NODE_H
#define NODE_H

#include "cliente.h"

// struct Node{
//     struct Cliente *data;
//     struct Node * next;  
// };

typedef struct Node {
    Cliente *data;
    struct Node * next;  
} Node;
// typedef struct Node_ Node;

// typedef struct Cell {
//   bool isParent;
//   struct Cell* child;
// } Cell;

Node* cria_node(Cliente *cliente);
Cliente* get_data(Node *node);
// int get_d(Node *node);
Node* get_next(Node *node);
// void set_next(Node* node, Node* node_next);
// int set_data(Node* node, int valor);

#endif // NODE_H