#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#define Quantitty_of_el 10 // Изначальное число элементов в списке
#define range 20 // Диапозон значений элемнетов


typedef struct node
{
    int val;
    struct node * next;
}
node_t;


void print_list (node_t * head){ // Печать списка без адресов
    node_t * current = head;

    while (current != NULL) {        printf("%d\n", current -> val);
        current = current -> next;
    }
    printf("\n");
}


void create_list (node_t * head){ // Заполнение списка
    node_t * current = head;
    for (int i=0; i < Quantitty_of_el - 1; i++){
        current -> val = rand() % range;
        current -> next = (node_t*) malloc(sizeof(node_t));
        current = current -> next;
    }
    current -> val = rand() % range;
    current -> next = NULL;
}
