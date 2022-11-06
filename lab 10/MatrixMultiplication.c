#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of matrices: ");
    scanf("%d", &n);
    int p[n + 1];
    printf("Enter the dimensions of the matrices: \n");
    for (int i = 0; i <= n; i++)
    {
        printf("p%d: ", i);
        scanf("%d", &p[i]);
    }
    int m[n][n];
    int s[n][n];
    for (int i = 0; i < n; i++)
        m[i][i] = 0;
    for (int l = 2; l <= n; l++)
    {
        for (int i = 0; i < n - l + 1; i++)
        {
            int j = i + l - 1;
            m[i][j] = 999999;
            for (int k = i; k < j; k++)
            {
                int q = m[i][k] + m[k + 1][j] + p[i] * p[k + 1] * p[j + 1];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
    printf("The minimum number of multiplications is: %d\n", m[0][n - 1]);
}