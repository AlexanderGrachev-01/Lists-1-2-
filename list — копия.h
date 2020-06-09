#ifndef list_h
#define list_h

typedef struct node
{
    int val;
    struct node * next;
}
node_t;

void create_list (node_t * head);
void print_list (node_t * head); // Печать списка без адресов

#endif
