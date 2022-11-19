#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    long long int input;
    scanf("%lld", &input);
    if (input % 3 == 0)
    {
        printf("%lld", input / 3);
    }
    else
    {
        printf("%d", -1);
    }
}
