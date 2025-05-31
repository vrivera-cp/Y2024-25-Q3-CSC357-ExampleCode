#include <stdio.h>

int add(int a, int b)       { return a + b; }
int subtract(int a, int b)  { return a - b; }
int multiply(int a, int b)  { return a * b; }
int divide(int a, int b)    { return a / b; }

int main(void)
{
    while (1)
    {
        // Get input
        int x, y;
        char symbol;

        printf("> ");
        if (scanf("%d %c %d", &x, &symbol, &y) != 3)
        {
            break;
        }

        // Determine which operation using a function pointer
        int (*operation)(int, int);
        switch (symbol)
        {
            case '+': operation = add; break;
            case '-': operation = subtract; break;
            case '*': operation = multiply; break;
            case '/': operation = divide; break;
            default: continue;
        }
        
        // Perform the operation
        printf("%d %c %d = %d\n", x, symbol, y, operation(x, y));
    }

    return 0;
}