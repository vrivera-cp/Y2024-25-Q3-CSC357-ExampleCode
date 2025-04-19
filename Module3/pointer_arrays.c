#include <stdio.h>

int main(int argc, char *argv[])
{
    char *cats[3];

    *cats = "Mochi";
    cats[1] = "Harvest";
    *(cats + 2) = "Pearl";

    printf("cats[0]: %s\n", cats[0]);
    printf("cats[1]: %s\n", cats[1]);
    printf("cats[2]: %s\n", cats[2]);

    return 0;
}