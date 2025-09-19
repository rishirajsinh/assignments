#include <stdio.h>

int main() {
    int n = 5;
    int mid = n / 2;  

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == mid) {
                printf("%d", j + 1);
            } else if (j == mid) {
                printf("%d", mid + 1);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
