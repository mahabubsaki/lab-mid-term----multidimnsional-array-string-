#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int x, count = 2;
    scanf("%d", &x);
    for (int y = 1; y <= x; y++)
    {
        if (y == 1)
        {
            for (int a = 1; a <= x; a++)
            {
                printf("%d", a);
            }
            printf("\n");
        }
        else if (y == x)
        {
            for (int a = 1; a <= y; a++)
            {
                printf("%d", y);
            }
            printf("\n");
        }
        else
        {

            for (int a = 0; a < x; a++)
            {
                if (a == 0)
                {
                    printf("%d", count);
                    count++;
                }
                else if (a + 1 == x)
                {
                    printf("%d", x);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
