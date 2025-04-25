#include <stdlib.h>
#include <stdio.h>

#include "linked_list.h"

struct node *create_node(int value, struct node *next)
{
    struct node *n = malloc(sizeof(struct node));
    
    n->value = value;
    n->next = next;

    return n;
}

struct node *array_to_nodes(int *values, int n_values)
{
    // Return NULL if we have no data
    if (n_values == 0)
    {
        return NULL;
    }

    // Iterate over the array while creating and linking nodes
    struct node *head = create_node(values[0], NULL);
    struct node *current = head;
    for (int i = 1; i < n_values; i++)
    {
        current->next = create_node(values[i], NULL);
        current = current->next;
    }
    
    return head;
}

void free_nodes(struct node *n)
{
    // Free linked nodes first
    if (n->next != NULL)
    {
        free_nodes(n->next);
    }
    
    // Free given node
    free(n);
}

void push_node(struct node *head, struct node *n)
{
    // Traverse to until head is pointing to the last node
    while (head->next != NULL)
    {
        head = head->next;
    }

    // Add the new node to the last node
    head->next = n;
}

struct node *pop_node(struct node *head)
{
    // Return current node if it's the only one
    if (head->next == NULL)
    {
        return head;
    }

    // Traverse to second to last node
    while (head->next->next != NULL)
    {
        head = head->next;
    }

    // Get the last node
    struct node *popped = head->next;

    // Disconnect the last node
    head->next = NULL;

    // Return the last node
    return popped;
}

void print_nodes(char *fmt, struct node *head, char *end_fmt)
{
    if (head == NULL)
    {
        printf("%s", end_fmt);
    }
    else
    {
        printf(fmt, head->value);
        print_nodes(fmt, head->next, end_fmt);
    }
}