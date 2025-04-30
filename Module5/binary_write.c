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
    
    struct person p = {NULL, '\0', 0};
    p.name = malloc(NAME_BUFFER_SIZE * sizeof(char));

    fprintf(stdout, "Enter a Name and Age: ");
    fscanf(stdin, "%s %d", p.name, &(p.age));

    p.first_initial = *p.name;

    FILE *file = fopen(DATA_PATH, "w");
    fwrite(&p, sizeof(struct person), 1, file);
    fwrite(p.name, sizeof(char), NAME_BUFFER_SIZE, file);
    
    fclose(file);
    free(p.name);

    return 0;
}