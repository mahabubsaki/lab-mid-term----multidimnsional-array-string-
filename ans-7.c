#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int testcase;
    scanf("%d", &testcase);
    for (int x = 0; x < testcase; x++)
    {
        char myString[25];
        int isPalindrom = 0;
        scanf("%s", myString);
        int reverseNum = strlen(myString) - 1;
        int forwardNum = 0;
        while (reverseNum >= 0)
        {
            if (myString[reverseNum] == myString[forwardNum])
            {
                isPalindrom = 1;
            }
            else
            {
                isPalindrom = 0;
                break;
            }
            reverseNum--;
            forwardNum++;
        }

        if (isPalindrom && strlen(myString) <= 7)
        {
            printf("Case #3: %s", myString);
        }
        else if (isPalindrom)
        {
            printf("Case #2: %c%d%c", myString[0], strlen(myString) - 2, myString[strlen(myString) - 1]);
        }
        else
        {
            printf("Case #1: Not Palindrome");
        }
        printf("\n");
    }

    return 0;
}
