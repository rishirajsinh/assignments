#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {                
        
        for (int s = 1; s <= 2 * (n - i); s++) {
            printf(" ");
        }

        // print numbers from 1..i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) {
                printf(" ");   
            }
        }

        printf("\n");  
    }

    return 0;
}
