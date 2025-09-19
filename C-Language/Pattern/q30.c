#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch++);
        }

        ch -= 2;
        for (int j = 1; j < i; j++) {
            printf("%c", ch--);
        }

        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch++);
        }

        ch -= 2;
        for (int j = 1; j < i; j++) {
            printf("%c", ch--);
        }

        printf("\n");
    }

    return 0;
}
