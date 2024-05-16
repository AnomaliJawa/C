#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);

    int results[T][100]; 
    int lengths[T]; 

    for (int count = 0; count < T; count++) 
	{
        int N;
        scanf("%d", &N);
        lengths[count] = N;

        int A[N], B[N];

        for (int i = 0; i < N; i++) 
		{
            scanf("%d", &A[i]);
        }

        for (int i = 0; i < N; i++) 
		{
            scanf("%d", &B[i]);
        }

        for (int i = 0; i < N; i++) 
		{
            results[count][i] = A[i] - B[i];
        }
    }

    for (int count = 0; count < T; count++) 
	{
        printf("Case #%d: ", count + 1);
        for (int i = 0; i < lengths[count]; i++) 
		{
            if (results[count][i] < 0) 
			{
                printf("-%d", -results[count][i]);
            } else 
			{
                printf("%d", results[count][i]);
            }
            if (i < lengths[count] - 1) 
			{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

