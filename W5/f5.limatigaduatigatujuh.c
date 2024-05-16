#include <stdio.h>
#include <ctype.h>

int main() 
{
    char inputString[10001];
    fgets(inputString, sizeof(inputString), stdin);

    for (int i = 0; inputString[i] != '\0'; i++) 
    {
        if (isalpha(inputString[i])) 
        {
            inputString[i] = toupper(inputString[i]);
            switch (inputString[i]) 
            {
                case 'I':
                    inputString[i] = '1';
                    break;
                case 'R':
                    inputString[i] = '2';
                    break;
                case 'E':
                    inputString[i] = '3';
                    break;
                case 'A':
                    inputString[i] = '4';
                    break;
                case 'S':
                    inputString[i] = '5';
                    break;
                case 'G':
                    inputString[i] = '6';
                    break;
                case 'T':
                    inputString[i] = '7';
                    break;
                case 'B':
                    inputString[i] = '8';
                    break;
                case 'P':
                    inputString[i] = '9';
                    break;
                case 'O':
                    inputString[i] = '0';
                    break;
            }
        }
    }

    printf("%s", inputString);

    return 0;
}

