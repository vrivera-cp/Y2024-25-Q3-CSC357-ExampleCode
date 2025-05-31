#include <signal.h>
#include <unistd.h>

int main(void)
{
    alarm(5);
    pause();
    return 0;
}