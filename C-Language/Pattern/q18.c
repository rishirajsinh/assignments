#include <stdio.h>

int main() {
    int n = 5;

    for (int row = 0; row < n; row++) {
        for (char ch = 'A'; ch < 'A' + (n - row); ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}
