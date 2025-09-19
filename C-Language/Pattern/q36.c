#include <stdio.h>

int main() {
    int n = 5; 

    for (int i = 1; i <= n; i++) {
        // Print (i - 1) spaces
        for (int space = 1; space < i; space++) {
            printf(" ");
        }

        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}
