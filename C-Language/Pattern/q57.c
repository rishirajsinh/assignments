#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {        
        for (int j = 0; j < n; j++) {    
            int top = i;
            int bottom = n - 1 - i;
            int left = j;
            int right = n - 1 - j;

            int min_dist = top;
            if (bottom < min_dist) min_dist = bottom;
            if (left < min_dist) min_dist = left;
            if (right < min_dist) min_dist = right;

            printf("%d", min_dist + 1);
        }
        printf("\n");
    }

    return 0;
}
