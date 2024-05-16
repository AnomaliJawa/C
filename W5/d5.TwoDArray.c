#include <stdio.h>

int main() 
{
    int numRows, numCols, numQueries;
    scanf("%d %d %d", &numRows, &numCols, &numQueries);

    int twoDimensionalArray[numRows][numCols];

    for (int i = 0; i < numRows; i++) 
	{
        for (int j = 0; j < numCols; j++) 
		{
            twoDimensionalArray[i][j] = 0;
        }
    }

    for (int i = 0; i < numQueries; i++) 
	{
        int row, col, value;
        scanf("%d %d %d", &row, &col, &value);

        twoDimensionalArray[row][col] = value;
    }

    for (int i = 0; i < numRows; i++) 
	{
        for (int j = 0; j < numCols; j++) 
		{
            printf("%d", twoDimensionalArray[i][j]);
            if (j < numCols - 1) 
			{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

