#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char str[25];
    int x, y, sum = 0;
    fgets(str, sizeof(str), stdin);
    scanf("%d %d", &x, &y);
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (str[i] == '+')
        {
            sum += (x + y);
        }
        else
        {
            sum += (x * y);
        }
    }
    printf("%d", sum);
    return 0;
}
