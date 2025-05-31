#include <stdio.h>
#include <signal.h>

void function(int signum)
{
    printf("💀 There is no escape, Mwuahahaha!\n");
}

int main(void)
{
    signal(SIGINT, function);
    while (1);
    return 0;
}