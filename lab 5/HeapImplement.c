/*
5.1 Write a menu (given as follows) driven program to sort an array of n integers in
ascending order by heap sort algorithm and perform the operations on max heap.
Determine the time required to sort the elements. Repeat the experiment for different
values of n, the number of elements in the array to be sorted and plot a graph of the time
taken versus n. The elements can be read from a file or can be generated using the
random number generator.
MAX-HEAP & PRIORITY QUEUE MENU
0. Quit
1. n Random numbers=>Array
2. Display the Array
3. Sort the Array in Ascending Order by using Max-Heap Sort
technique
4. Sort the Array in Descending Order by using any algorithm
5. Time Complexity to sort ascending of random data
6. Time Complexity to sort ascending of data already sorted in
ascending order
7. Time Complexity to sort ascending of data already sorted in
descending order
8. Time Complexity to sort ascending all Cases (Data Ascending,
Data in Descending & Random Data) in Tabular form for
values n=5000 to 50000, step=5000
9. Extract largest element
10. Replace value at a node with new value
11. Insert a new element
12. Delete an element
*/
#include <stdio.h>
#include <stdlib.h>
int arr[256];
int n = 0;
int noSwap;
int noComp;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    noSwap++;
}
void heapify(int arr[], int n, int index)
{
    int p = index;
    int l = 2 * index + 1;
    int r = 2 * index + 2;
    if (l < n && arr[l] > arr[p])
        p = l;
    if (r < n && arr[r] > arr[p])
        p = r;
    if (p != index)
    {
        swap(&arr[index], &arr[p]);
        heapify(arr, n, p);
    }
    noComp += 3;
}
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
void BubbleSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void insert(int val)
{
    n++;
    int index = n - 1;
    arr[index] = val;
    while (index > 0)
    {
        int p = (index - 1) / 2;
        if (arr[p] < arr[index])
        {
            swap(&arr[p], &arr[index]);
            index = p;
        }
        else
            return;
    }
}
void delete ()
{
    if (n < 0)
    {
        printf("nothing to delete/n");
        return;
    }
    n--;
    arr[0] = arr[n];
    int i = 0;
    int largest = i;
    while (i < n)
    {
        largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if (l < n && arr[i] < arr[l])
        {
            largest = l;
        }
        if (r < n && arr[i] < arr[r])
        {
            largest = r;
        }
        if (largest != i)
        {
            swap(&arr[i], &arr[largest]);
            i = largest;
        }
        else
            return;
    }
}
void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int choice, randCost = 0, sortedCost = 0, DesCost = 0, cost = 0;
    int size;
    do
    {
        printf("** MAX-HEAP & PRIORITY QUEUE MENU **\n");
        printf("0. Quit\n");
        printf("1. Input n Random numbers in Array\n");
        printf("2. Display the Array\n");
        printf("3. Sort the Array in Ascending Order by using Max-Heap Sort technique\n");
        printf("4. Sort the Array in Descending Order by using any algorithm\n");
        printf("5. Time Complexity to sort ascending of random data\n");
        printf("6. Time Complexity to sort ascending of data already sorted in ascending order\n");
        printf("7. Time Complexity to sort ascending of data already sorted in descending order\n");
        printf("8. Time Complexity to sort ascending all Cases\n");
        printf("9. Extract largest element\n");
        printf("10.Replace value at a node with new value\n");
        printf("11.Insert a new element\n");
        printf("12.Delete an element\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            return 0;
            break;
        case 1:
            printf("Enter the number of inputs : ");
            scanf("%d", &size);
            n = size;
            for (int i = 0; i < n; i++)
                scanf("%d", &arr[i]);
            break;
        case 2:
            printArray(arr, n);
            break;
        case 3:
            heapSort(arr, n);
            break;
        case 4:
            BubbleSort(arr, n);
            break;
        case 5:
            noSwap = 0;
            noComp = 0;
            heapSort(arr, n);
            randCost = 3 * noSwap + noComp;
            printf(" Time Complexity to sort ascending of random data:\n");
            printf("No of swapping is = %d\n", noSwap);
            printf("No of comparisions = %d\n", noComp);
            printf("Cost function = %d\n", randCost);
            break;
        case 6:
            heapSort(arr, n);
            noSwap = 0;
            noComp = 0;
            heapSort(arr, n);
            sortedCost = 3 * noSwap + noComp;
            printf("Time Complexity to sort ascending of data already sorted in ascending order :\n");
            printf("No of swapping is = %d\n", noSwap);
            printf("No of comparisions = %d\n", noComp);
            printf("Cost function = %d\n", sortedCost);
            break;
        case 7:
            BubbleSort(arr, n); // sorted in descending order
            noSwap = 0;
            noComp = 0;
            heapSort(arr, n);
            DesCost = 3 * noSwap + noComp;
            printf("Time Complexity to sort ascending of data already sorted in descending order :\n");
            printf("No of swapping is = %d\n", noSwap);
            printf("No of comparisions = %d\n", noComp);
            printf("Cost function = %d\n", DesCost);
            break;
        case 8:;
            int totalCost = randCost + sortedCost + DesCost;
            printf("Time Complexity to sort ascending of data for all Cases = %d\n", totalCost);
            break;
        case 9:
            for (int i = n / 2 - 1; i >= 0; i--)
                heapify(arr, n, i);
            printf("Largest element = %d\n", arr[0]);
            break;
        case 10:;
            int index;
            printf("Enter index of value to be changed\n");
            scanf("%d", &index);
            printf("Enter new value\n");
            int num;
            scanf("%d", &num);
            arr[index] = num;
            heapify(arr, n, index);
            break;
        case 11:;
            int val;
            printf("Enter the number which you want to insert : ");
            scanf("%d", &val);
            insert(val);
            break;
        case 12:
            delete ();
            printf("deleted successfully./n");
            break;
        default:
            printf("Please enter the valid number between 0 to 8\n");
            break;
        }
    } while (choice != 0);

    return 0;
}