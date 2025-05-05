#include <stdio.h>
#include <stdlib.h>

#define DATA_PATH   "person_data"
#define NAME_BUFFER_SIZE    128

struct person {
    char *name;
    char first_initial;
    int age;
};

int main(void)
{
    struct person p;

    FILE *file = fopen(DATA_PATH, "r");

    fread(&p, sizeof(struct person), 1, file);
    p.name = malloc(NAME_BUFFER_SIZE * sizeof(char));

    fread(p.name, sizeof(char), NAME_BUFFER_SIZE, file);
    
    fclose(file);

    fprintf(stdout, "%s (%c) is %d years old.\n", p.name, p.first_initial, p.age);

    free(p.name);

    return 0;
}