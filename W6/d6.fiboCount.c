#include <stdio.h>

int counter = 0;

int calculateFormula(int input)
{
    int result;
    counter++;
    if (input == 0) return 1;
    else if (input == 1) return 2;
    else return calculateFormula(input - 1) + calculateFormula(input - 2);
    return result;
}

int main()
{
    int testCases;
    int input;
    scanf("%d", &testCases);
    
    for (int i = 0; i < testCases; i++)
    {
        scanf("%d", &input);
        calculateFormula(input);
        printf("Case #%d: %d\n", i + 1, counter);
        counter = 0;
    }

    return 0;
}

