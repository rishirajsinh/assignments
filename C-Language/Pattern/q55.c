#include <stdio.h>

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            printf("  ");
        }

        for (int num = 1; num <= i; num++) {
            printf("%d ", num);
        }

        for (int num = i - 1; num >= 1; num--) {
            printf("%d ", num);
        }

        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) {
            printf("  ");
        }

        for (int num = 1; num <= i; num++) {
            printf("%d ", num);
        }

        for (int num = i - 1; num >= 1; num--) {
            printf("%d ", num);
        }

        printf("\n");
    }

    return 0;
}
