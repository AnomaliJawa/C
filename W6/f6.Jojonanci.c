#include <stdio.h>

int sequence[100];
int testCases;
int termCount;
int result;

void calculateFormula()
{
    if (termCount == 0) result = sequence[termCount];
    else if (termCount == 1) result = sequence[termCount];
    else
    {
        for (int i = 2; i <= termCount; i++)
        {
            sequence[i] = sequence[i - 1] - sequence[i - 2];
        }
    }
}

int main()
{
    scanf("%d", &testCases);
    for (int j = 0; j < testCases; j++)
    {
        scanf("%d %d %d", &termCount, &sequence[0], &sequence[1]);
        calculateFormula();
        printf("Case #%d: %d\n", j + 1, sequence[termCount]);
    }
    return 0;
}

