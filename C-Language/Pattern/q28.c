#include <stdio.h>

int main() {
    int n = 5;

    for (int row = 0; row < n; row++) {
        
        for (int space = 0; space < row; space++) {
            printf("  ");
        }

        
        int count = 2 * (n - row) - 1;


        for (int i = 0; i < count; i++) {
            printf("%c ", 'A' + i);
        }

        printf("\n");
    }

    return 0;
}
