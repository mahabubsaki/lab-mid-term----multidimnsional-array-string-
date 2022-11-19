#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int total, seq = 0, temp = 1;
    scanf("%d", &total);
    char plusMinus[total];
    scanf("%s", plusMinus);
    for (int x = 0; x < total; x++)
    {
        if (plusMinus[x] == plusMinus[x + 1])
        {
            temp++;
        }
        else
        {
            if (temp > seq)
            {
                seq = temp;
            }
            temp = 1;
        }
    }
    printf("%d", seq);

    return 0;
}
