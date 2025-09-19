#include <stdio.h>

int main() {
    int n = 6;
    char ch = 'A'; 

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%c ", ch);
            
            ch++;
            if (ch > 'Z') {
                ch = 'A';
            }
        }
        printf("\n");
    }

    return 0;
}
