#include <stdio.h>

int main() {
    int n = 5;

    for (int row = 1; row <= n; row++) {
        
        for (int i = 1; i <= row; i++) {
            printf("%d ", i);
        }


        for (int i = row - 1; i >= 1; i--) {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}
