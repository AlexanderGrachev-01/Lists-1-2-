#include <stdio.h>
#include <stdlib.h>
#include "list.h"


void Sort_lists(node_t * head_1, node_t * head_2, node_t * head_3){
    node_t * current_1 = head_1;
    
    while (current_1 != NULL) {
        int flag = 0; // Отсутствие элемента в списке L2
        node_t * current_2 = head_2;
        while (current_2 != NULL){
            if (current_1 -> val == current_2 -> val){
                flag = 1;
                break;
            }
            current_2 = current_2 -> next;
        }
        
        if (flag == 0){
            head_3 -> val = current_1 -> val;
            head_3 -> next = (node_t*) malloc(sizeof(node_t));
            head_3 = head_3 -> next;
        }
        
        current_1 = current_1 -> next;
    }
    head_3 -> next = NULL;
}
