#include <stdio.h>
#include "list.h"

void scan_list (node_t * head){ // Поиск двух одинаковых чисел
    node_t * current = head;
    int flag = 0; // Флаг для выхода из 1 цикла
    
    while (current != NULL) {
        int chek = current -> val;
        current = current -> next;
        node_t * current_in = current;
        
        while (current_in != NULL){
            if (current_in -> val == chek){
                flag = 1;
                printf("Есть одинаковые элемнеты %d\n\n", chek);
                break;
            }
            current_in = current_in -> next;
        }
        
        if (flag == 1){
            break;
        }
    }
    if (flag == 0){
        printf("Одинаковых элемнетов нет\n\n");
    }
}
