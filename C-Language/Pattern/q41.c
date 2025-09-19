#include <stdio.h>

int main() {
    int n = 5;  

    for (int i = 1; i <= n; i++) {
        for (int space = 1; space < i; space++) {
            printf(" ");
        }

        int total_chars = 2 * (n - i) + 1;

        for (int j = 1; j <= total_chars; j++) {
            if (i == 1 || j == 1 || j == total_chars) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
