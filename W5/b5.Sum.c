#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);

    for (int caseNumber = 1; caseNumber <= T; caseNumber++) 
	{
        int X;
        scanf("%d", &X);

        int twoDimensionalArray[X][X];
        int columnSums[X];

        for (int i = 0; i < X; i++) 
		{
            columnSums[i] = 0;
        }

        for (int i = 0; i < X; i++) 
		{
            for (int j = 0; j < X; j++) 
			{
                scanf("%d", &twoDimensionalArray[i][j]);
                columnSums[j] += twoDimensionalArray[i][j];
            }
        }

        printf("Case #%d:", caseNumber);
        for (int i = 0; i < X; i++) 
		{
            printf(" %d", columnSums[i]);
        }
        printf("\n");
    }

    return 0;
}

