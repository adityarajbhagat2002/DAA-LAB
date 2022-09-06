#include <stdio.h>
#include <stdlib.h>

int algo1(int n) // 
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int algo2(int n) // O(sqrt(n))
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

#define N 100000
int *prime;

void sieve()
{
    prime = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
        prime[i] = 1;
    for (int p = 2; p * p <= N; p++)
    {
        if (prime[p] == 1)
            for (int i = p * p; i <= N; i += p)
                prime[i] = 0;
    }
}

int algo3(int n) 
{
    return prime[n];
}

int main()
{
    sieve();
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    algo1(n) == 1 ? printf("%d is a prime number\n", n) : printf("%d is not a prime number\n", n);
    algo2(n) == 1 ? printf("%d is a prime number\n", n) : printf("%d is not a prime number\n", n);
    algo3(n) == 1 ? printf("%d is a prime number\n", n) : printf("%d is not a prime number\n", n);
    return 0;
}