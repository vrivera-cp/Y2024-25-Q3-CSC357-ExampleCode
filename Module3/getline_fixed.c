#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char *buffer = NULL;
    size_t buffer_size = 0;

    getline(&buffer, &buffer_size, stdin);

    printf("%s", buffer);

    free(buffer);

    return 0;
}