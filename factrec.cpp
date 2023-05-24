//factorial of a number without using recursion:
#include <stdio.h>

int main()
{
    int i, n, fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else
    {
        for (i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        printf("Factorial of %d = %d", n, fact);
    }

    return 0;
}
