#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {   
        for (int s = 1; s <= 2 * (n - i); s++) {
            printf(" ");
        }

        // print letters
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("%c", 'A' + j);
            if (j < 2 * i - 2) {
                printf(" ");   
            }
        }

        printf("\n");  
    }

    return 0;
}
