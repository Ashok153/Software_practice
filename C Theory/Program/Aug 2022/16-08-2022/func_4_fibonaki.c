#include <stdio.h>

int fibonacci(int n)
{

    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else if (n > 2)
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int n;
    printf("enter the position of number :");
    scanf("%d", &n);
    printf("%d", fibonacci(n));
    return 0;
}