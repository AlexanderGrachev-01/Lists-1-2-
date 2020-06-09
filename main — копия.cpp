#include <iostream>
#include <time.h>
#include "list.h"
#include "Scan_One_list(1).h"
#include "Sort_list(2).h"


int main()
{
    srand(time(NULL));

    node_t * L1 = NULL;
    L1 = (node_t*) malloc(sizeof(node_t));

    if (L1 == NULL){
    return 1;
    }

    create_list(L1); // Заполнение списка L1
    printf("L1:\n"); // Печать списка L1
    print_list(L1);
    scan_list(L1); // Поиск двух одинаковых элементов в списке
    
    node_t * L2 = NULL;
    L2 = (node_t*) malloc(sizeof(node_t));

    if (L2 == NULL){
    return 2;
    }
    
    node_t * L3 = NULL;
    L3 = (node_t*) malloc(sizeof(node_t));

    if (L3 == NULL){
    return 3;
    }
    
    create_list(L2); // Заполнение списка L2
    printf("L2:\n"); // Печать списка L2
    print_list(L2);
    
    Sort_lists(L1, L2, L3);
    printf("L3:\n"); // Печать списка L3
    print_list(L3);
    
    return 0;
}
