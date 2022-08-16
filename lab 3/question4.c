
// Write a program that takes three variable (a, b, c) as separate parameters and rotates the
// values stored so that value a goes to be, b, b to c and c to a by using SWAP(x,y)
// function that swaps/exchanges the numbers x & y.



#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void rotate(int *a, int *b, int *c)
{
    swap(b, c);
    swap(a, b);
}

int main()
{
    int a, b, c;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Before Swapping:\na: %d\nb: %d\nc: %d\n", a, b, c);
    rotate(&a, &b, &c);
    printf("After Swapping:\na: %d\nb: %d\nc: %d\n", a, b, c);
    return 0;
}



