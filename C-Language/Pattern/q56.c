#include <stdio.h>

int main() {
    int n = 5;
    int center = n / 2;  

    for (int i = 0; i < n; i++) {         
        for (int j = 0; j < n; j++) {     
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == center || j == center) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
