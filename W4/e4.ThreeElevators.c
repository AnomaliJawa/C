#include <stdio.h>

int main() {
    int x, y, k;
    scanf("%d %d %d", &x, &y, &k);

    int t = -1;

    for (int i = 0; i <= 100; i++) {
        int lantai_lift_pertama = x + i;
        int lantai_lift_kedua = y - i;

        if (lantai_lift_pertama == k && lantai_lift_kedua == k) {
            t = i;
            break; 
        }
    }

    printf("%d\n", t);
    return 0;
}



