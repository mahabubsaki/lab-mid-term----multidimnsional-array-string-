#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m], ans[n][m];
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < m; b++)
        {
            scanf("%d", &arr[a][b]);
        }
    }
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < m; y++)
        {
            if (x + 1 == arr[x][y] && y + 1 == arr[x][y])
            {
                ans[x][y] = arr[x][y] + 3;
            }
            else if (x + 1 == arr[x][y])
            {
                ans[x][y] = arr[x][y] + 2;
            }
            else if (y + 1 == arr[x][y])
            {
                ans[x][y] = arr[x][y] + 1;
            }
            else
            {
                ans[x][y] = arr[x][y];
            }
        }
    }
    for (int p = 0; p < n; p++)
    {
        for (int q = 0; q < m; q++)
        {
            printf("%d ", ans[p][q]);
        }
        printf("\n");
    }
    return 0;
}
