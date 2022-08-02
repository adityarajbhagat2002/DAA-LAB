


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int **mat = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        mat[i] = (int *)malloc(n * sizeof(int));
    printf("Enter the matrix: \n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    int nonZero = 0, sumLeading = 0, productDiagonal = 1;
    printf("Elements below minor diagonal: ");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] != 0)
                nonZero++;
            if (i < j)
                sumLeading += mat[i][j];
            if (i > j)
                printf("%d ", mat[i][j]);
            if (i == j)
                productDiagonal *= mat[i][j];
        }
    printf("\nNumber of Non-Zero Elements: %d\nSum of Elements Above Leading Diagonal: %d\nProduct of Diagonal Elements: %d\n", nonZero, sumLeading, productDiagonal);
}


