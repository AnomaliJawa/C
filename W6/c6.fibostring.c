#include <stdio.h>

int rumus(int K, char F0, char F1)
{
    int f;
    if(K == 0)
    {
        printf("%c", F0);
        return F0;
    }
    else if(K == 1)
    {
        printf("%c", F1);
        return F1;
    }
    else
    {
        f = rumus(K - 1, F0, F1) + rumus(K - 2, F0, F1);
        return f;
    }
    
}

int main()
{
    int T;
    int K;
    char F0;
    char F1;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%d %c %c", &K, &F0, &F1);
        printf("Case #%d: ", i + 1);
        rumus(K, F0, F1);
        printf("\n");
    }

    return 0;
}
