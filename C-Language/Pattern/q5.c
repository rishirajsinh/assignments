#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {           
        for (int j = 1; j <= n; j++) {     
            printf("%d", j);
            if (j < n) {
                printf(" ");                
            }
        }
        printf("\n");   
    }

    return 0;
}
