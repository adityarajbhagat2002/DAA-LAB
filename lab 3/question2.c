// Write a program to store random numbers into an array of n integers, where the array
// must contains some duplicates. Do the following:
// a) Find out the total number of duplicate elements.
// b) Find out the most repeating element in the array.



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
    int dup[10];
    for (int i = 0; i < 10; i++)
        dup[i] = 0;
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 10, dup[arr[i]]++;
    int totDuplicates = 0, mostRepeating = 0, mx = dup[0];
    for (int i = 0; i < 10; i++)
    {
        if (dup[i] > 1)
            totDuplicates++;
        if (mx < dup[i])
        {
            mx = dup[i];
            mostRepeating = i;
        }
    }
    printf("Array Elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nTotal Duplicate Elements: %d\nMost Repeating Element: %d\n", totDuplicates, mostRepeating);
    return 0;
}