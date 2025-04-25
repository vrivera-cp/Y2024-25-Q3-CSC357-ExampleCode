#include <stdlib.h>

#include "linked_list.h"

int main(void)
{
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8};

    struct node *list1 = array_to_nodes(data, 4);
    struct node *list2 = array_to_nodes(data + 4, 4);

    print_nodes("%d ", list1, "\n");
    print_nodes("%d ", list2, "\n");
    
    push_node(list1, create_node(5, NULL));
    pop_node(list2);

    print_nodes("%d ", list1, "\n");
    print_nodes("%d ", list2, "\n");

    push_node(list1, pop_node(list2));

    print_nodes("%d ", list1, "\n");
    print_nodes("%d ", list2, "\n");

    push_node(list1, list2);

    print_nodes("%d ", list1, "\n");
    print_nodes("%d ", list2, "\n");

    free_nodes(list1);
    
    return 0;
}