#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {            
        for (int j = 0; j < i; j++) {        
            printf("%c", 'A' + j);           
            if (j < i - 1) {
                printf(" ");                  
            }
        }
        printf("\n");  
    }

    return 0;
}
