#include <stdio.h>

int main() {
    int n = 5; 

    for (int i = 1; i <= n; i++) {
        for (int space = 1; space < i; space++) {
            printf(" ");
        }

        for (char ch = 'A'; ch < 'A' + (n - i + 1); ch++) {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}
