#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

int main(void)
{
    struct node head = {10, NULL};
    struct node middle = {20, NULL};
    struct node tail = {30, NULL};

    head.next = &middle;
    middle.next = &tail;

    for (struct node *i = &head; i != NULL; i = i->next)
    {
        print("%d\n", i->value);
    }

    return 0;
}