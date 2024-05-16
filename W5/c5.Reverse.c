#include <stdio.h>
#include <string.h>


void toggleCase(char *str) 
{
    for (int i = 0; i < strlen(str); i++) 
	{
        if (str[i] >= 'a' && str[i] <= 'z')
		{
            str[i] = str[i] - 'a' + 'A'; 
        } else if (str[i] >= 'A' && str[i] <= 'Z') 
		{
            str[i] = str[i] - 'A' + 'a'; 
        }
    }
}

int main() 
{
    int T;
    scanf("%d", &T);

    for (int testCase = 1; testCase <= T; testCase++) 
	{
        char S[1000];
        scanf("%s", S);

        toggleCase(S);

    
        int len = strlen(S);
        for (int i = 0; i < len / 2; i++) 
		{
            char temp = S[i];
            S[i] = S[len - i - 1];
            S[len - i - 1] = temp;
        }

        printf("Case #%d: %s\n", testCase, S);
    }

    return 0;
}
