#include <stdio.h>

int counter = 0;

int calculateValue(int num)
{
    int result;

    if (num == 0) return 1;
    else if (num == 1) return 2;
    else if (num % 5 == 0)
    {
        if (num % 3 == 0) counter++;
        return num * 2;
    }
    else
    {
        if (num % 3 == 0) counter++;
        result = calculateValue(num - 1) + num + calculateValue(num - 2) + num - 2;
        return result;
    }
}

int main()
{
    int testCases;
    int number;
    scanf("%d", &testCases);

    for (int i = 0; i < testCases; i++)
    {
        scanf("%d", &number);
        int result = calculateValue(number);
        printf("Case #%d: %d %d\n", i + 1, result, counter);
        counter = 0;
    }

    return 0;
}

