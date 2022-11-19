#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int s = 0; s < testcase; s++)
    {
        int strlength, sum = 0;
        scanf("%d", &strlength);
        char charac[strlength];
        scanf("%s", charac);
        for (int x = 0; x < strlength - 1; x++)
        {
            if ((charac[x] == '0' && charac[x + 1] == '1') || (charac[x] == '1' && charac[x + 1] == '0'))
            {
                sum++;
            }
        }
        printf("%d", sum);
        printf("\n");
    }
    return 0;
}
