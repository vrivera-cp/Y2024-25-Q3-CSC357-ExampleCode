#include <unistd.h>

int main(void)
{
    write(STDOUT_FILENO, "Hello, world!\n", sizeof("Hello, world!\n") - 1);

    return 0;
}