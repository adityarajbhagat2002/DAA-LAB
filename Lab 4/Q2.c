#include <stdio.h>
#include <stdlib.h>

int insertionSort(int a[], int n)
{
    int i, j, val, itr = 0;
    for (i = 1; i < n; i++)
    {
        val = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > val)
        {
            a[j + 1] = a[j];
            j = j - 1;
            itr++;
        }
        a[j + 1] = val;
    }
    return itr;
}

int main()
{
    freopen("output.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    int tc = 10;
    printf("n \t Ascending \t Descending \t Random\n");
    while (tc--)
    {
        int n;
        scanf("%d", &n);
        int *asc = (int *)malloc(n * sizeof(int));
        int *desc = (int *)malloc(n * sizeof(int));
        int *rand = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &asc[i]);
        for (int i = 0; i < n; i++)
            scanf("%d", &desc[i]);
        for (int i = 0; i < n; i++)
            scanf("%d", &rand[i]);
        int itrAsc = insertionSort(asc, n);
        int itrDesc = insertionSort(desc, n);
        int itrRand = insertionSort(rand, n);
        printf("\n%d \t %d \t %d \t %d", n, itrAsc, itrDesc, itrRand);
    }
    return 0;
}