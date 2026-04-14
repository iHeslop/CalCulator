#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int z;
    char symbol;

    printf("What's X? ");
    fflush(stdout);

    if (scanf("%d", &x) != 1)
    {
        printf("Invalid integer input\n");
        return 1;
    }

    printf("What's Y? ");
    fflush(stdout);
    if (scanf("%d", &y) != 1)
    {
        printf("Invalid integer input\n");
        return 1;
    }

    printf("Which Operation? ");
    fflush(stdout);
    scanf(" %c", &symbol);

    if (symbol == '*')
    {
        z = x * y;
    }
    else if (symbol == '/')
    {
        if (y == 0)
        {
            printf("Cannot divide by zero\n");
            return 1;
        }
        z = x / y;
    }
    else if (symbol == '+')
    {
        z = x + y;
    }
    else if (symbol == '-')
    {
        z = x - y;
    }
    else
    {
        printf("Invalid Input\n");
        return 1;
    }
    printf("%i\n", z);
    return 0;
}