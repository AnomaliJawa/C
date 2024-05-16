#include <stdio.h>
int main()
{
    int A[1001];
    int B[1001];
    int T;
    int i;
    scanf("%d", &T);
    for (i=1; i<=T; i++)
    {
        scanf("%d %d", &A[i], &B[i]);
    }
    for(i=1; i<=T; i++)
    {
        if(A[i] > B[i])
        {
            printf("Case #%d: Go-Jo\n", i);
        }
        else
        {
            printf("Case #%d: Bi-Pay\n", i);
        }
    }
    return 0;
}
