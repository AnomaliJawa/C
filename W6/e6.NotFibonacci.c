#include <stdio.h>

int fibonacciSequence[100];
int termCount;

void generateFibonacci()
{
    for (int i = 2; i <= termCount; i++)
    {
        fibonacciSequence[i] = fibonacciSequence[i - 1] + fibonacciSequence[i - 2];
    }
    printf("%d\n", fibonacciSequence[termCount]);
}

int main()
{
    scanf("%d %d", &fibonacciSequence[0], &fibonacciSequence[1]);
    scanf("%d", &termCount);
    generateFibonacci();

    return 0;
}

