#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int f = open(argv[1], O_RDONLY);

    char c;
    while ((read(f, &c, 1)) > 0)
    {
        // Do Nothing
    }

    close(f);

    return EXIT_SUCCESS;
}