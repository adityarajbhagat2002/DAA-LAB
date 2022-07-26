#include <stdio.h>

int func1(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        itr++;
    return itr;
}

int func2(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            itr++;
    return itr;
}

int func3(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; k++)
                itr++;
    return itr;
}

int func4(int n, int k)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= k; j++)
            itr++;
    return itr;
}

int func5(int n, int k)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= k / 2; j++)
            itr++;
    return itr;
}

int func6(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n / 2; j++)
            itr++;
    return itr;
}

int func7(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= 100; j++)
            itr++;
    return itr;
}

int func8(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            itr++;
    return itr;
}

int func9(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i / 2; j++)
            itr++;
    return itr;
}

int func10(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i / 3; j++)
            itr++;
    return itr;
}

int main()
{
    int n = 10;
    while (n <= 100000)
    {
        printf("n = %d\n", n);
        printf("Function 1: %d\n", func1(n));
        printf("Function 2: %d\n", func2(n));
        printf("Function 3: %d\n", func3(n));
        printf("Function 4: %d\n", func4(n, 500));
        printf("Function 5: %d\n", func5(n, 500));
        printf("Function 6: %d\n", func6(n));
        printf("Function 7: %d\n", func7(n));
        printf("Function 8: %d\n", func8(n));
        printf("Function 9: %d\n", func9(n));
        printf("Function 10: %d\n", func10(n));
        printf("\n");
        n *= 10;
    }
    return 0;
}