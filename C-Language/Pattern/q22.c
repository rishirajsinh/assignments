#include <stdio.h>

int main() {
    int n = 5;

    for (int row = 1; row <= n; row++) {

        for (int space = 1; space < row; space++) {
            printf("  ");  
        }

        for (int num = 1; num <= n - row + 1; num++) {
            printf("%d ", num);
        }

        printf("\n");
    }

    return 0;
}
