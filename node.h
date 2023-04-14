#include "cliente.h"
typedef struct Node_ Node;

Node* cria_node(Cliente *cliente);
Cliente* get_data(Node *node);
int get_d(Node *node);
Node* get_next(Node *node);
void set_next(Node* node, Node* node_next);
int set_data(Node* node, int valor);
