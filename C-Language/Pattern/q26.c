#include <stdio.h>

int main() {
    int n = 5;

    for (int row = 0; row < n; row++) {

        for (int space = 0; space < row; space++) {
            printf(" ");
        }

    
        for (int star = 0; star < 2 * (n - row) - 1; star++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
