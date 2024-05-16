#include <stdio.h>

void traverseAndPrint(int numbers[], int index, int n, int sum) {
    if (index >= n) {
        return;
    }
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int currentSum = sum + numbers[index];

    if (left >= n && right >= n) {
        printf("%d\n", currentSum);
        return;
    }
  
    traverseAndPrint(numbers, left, n, currentSum);
    traverseAndPrint(numbers, right, n, currentSum);
}

int main() {
    int T, j;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int n;
        scanf("%d", &n);
        int numbers[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &numbers[j]);
        }
        
        printf("Case #%d:\n", i + 1);
        traverseAndPrint(numbers, j, n, 0);
    }

    return 0;
}

