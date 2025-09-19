#include <stdio.h>

int main() {
    int n = 5;

    for (int row = 1; row <= n; row++) {
    
        for (int space = 1; space < row; space++) {
            printf("  ");
        }

    
        for (char ch = 'A'; ch < 'A' + (n - row + 1); ch++) {
            printf("%c ", ch);
        }

        printf("\n");
    }

    return 0;
}
