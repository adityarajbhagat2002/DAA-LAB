#include <stdio.h>
#include <stdlib.h>

void counter(){
    approach1counter=0;
    approach2counter=0;
    approach3counter=0 ;

}

int approach1(int n) 
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
        approach1counter++;
            return 0;
    return 1;
}

int approach2(int n) 
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
        approach2counter++;

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

int approach3(int n) // O(1)
{
    approach2counter=
    return prime[n];
}

int main()
{
    sieve();
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    approach1(n) == 1 ? printf("%d is a prime number\n", n) : printf("%d is not a prime number\n", n);
    approach2(n) == 1 ? printf("%d is a prime number\n", n) : printf("%d is not a prime number\n", n);
    approach3(n) == 1 ? printf("%d is a prime number\n", n) : printf("%d is not a prime number\n", n);
    p

    return 0;
}