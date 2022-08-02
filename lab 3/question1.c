// Write a program to store random numbers into an array of n integers and then find out
// the smallest and largest number stored in it. n is the user input.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 10;
    int smallest = arr[0];
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
        if (arr[i] > largest)
            largest = arr[i];
    }
    printf("Array Elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nSmallest: %d\nLargest: %d\n", smallest, largest);
    return 0;
}