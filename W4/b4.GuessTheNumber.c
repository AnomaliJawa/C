#include <stdio.h>

int main() {
    int A, B;


    scanf("%d %d", &A, &B);
    
    for (int i = 0; i <= B; i++) {
        printf("%d\n", A);
        A++;
    }

    return 0;
}

