#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct node
{
    int value;
    struct node* next; 
};

struct node *create_node(int value, struct node *next);

struct node *array_to_nodes(int *values, int n_values);

void free_nodes(struct node *n);

void push_node(struct node *head, struct node *node);

struct node *pop_node(struct node *head);

void print_nodes(char *fmt, struct node *head, char *end_fmt);

#endif // LINKED_LIST_H