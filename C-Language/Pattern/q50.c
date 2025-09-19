#include <stdio.h>

int main() {
    int n = 5;
    int total_numbers = n * (n + 1) / 2;
    int num = total_numbers;

    for (int i = 1; i <= n; i++) {        
        for (int j = 1; j <= i; j++) {     
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}
