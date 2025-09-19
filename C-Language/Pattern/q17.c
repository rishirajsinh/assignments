#include <stdio.h>

int main() {
    int n = 5;

    for (int row = 0; row < n; row++) {
        for (int num = 1; num <= n - row; num++) {
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}
