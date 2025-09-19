#include <stdio.h>

int main() {
    int n = 5; 

    for (int i = 1; i <= n; i++) {
        
        for (int space = 1; space < i; space++) {
            printf(" ");
        }

    
        for (int num = 1; num <= n - i + 1; num++) {
            printf("%d", num);
        }

        printf("\n");
    }

    return 0;
}
