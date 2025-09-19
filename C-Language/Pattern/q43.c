#include <stdio.h>

int main() {
    int rows = 4, cols = 7;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows) {
                printf("%d", j);
            }
            else {
                if (j == 1) {
                    printf("1");
                } else if (j == cols) {
                    printf("%d", cols);
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
