#include <stdio.h>
#include <string.h>

int checkPalindrome(char input[]) 
{
    int length = strlen(input);
    for (int i = 0; i < length / 2; i++) 
	{
        if (input[i] != input[length - i - 1]) 
		{
            return 0; // It's not a palindrome
        }
    }
    return 1; // It's a palindrome
}

int main() 
{
    int numberOfCases;
    scanf("%d", &numberOfCases);

    for (int caseNumber = 1; caseNumber <= numberOfCases; caseNumber++) 
	{
        char inputWord[505];
        scanf("%s", inputWord);

        if (checkPalindrome(inputWord)) 
		{
            printf("Case #%d: Yay, it's a palindrome\n", caseNumber);
        } else 
		{
            printf("Case #%d: Nah, it's not a palindrome\n", caseNumber);
        }
    }

    return 0;
}

