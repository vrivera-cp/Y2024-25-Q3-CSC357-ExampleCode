#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    // Setup ls arguments
    char *program_argv[argc + 1]; 
    
    program_argv[0] = "ls"; // First arg is, by convention, the program name
    for (int i = 1; i < argc; i++)
    {
        program_argv[i] = argv[i]; // Reference this programs arguments
    }
    program_argv[argc] = NULL; // Ensure argument list is NULL-terminated

    // Replace process with ls
    execvp("ls", program_argv);

    return EXIT_FAILURE;
}