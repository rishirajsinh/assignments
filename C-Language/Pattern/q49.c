#include <stdio.h>

int main() {
    int n = 4;              
    char ch = 'A';          

    for (int i = 1; i <= n; i++) {         
        for (int j = 1; j <= n; j++) {     
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
