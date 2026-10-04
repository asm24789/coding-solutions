#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    // Outer loop selects i from 1 to n
    for (int i = 1; i <= n; i++) {
        // Inner loop selects j from i+1 to n (ensuring i < j)
        for (int j = i + 1; j <= n; j++) {
            
            // 1. Bitwise AND
            int val_and = i & j;
            if (val_and < k && val_and > max_and) {
                max_and = val_and;
            }

            // 2. Bitwise OR
            int val_or = i | j;
            if (val_or < k && val_or > max_or) {
                max_or = val_or;
            }

            // 3. Bitwise XOR
            int val_xor = i ^ j;
            if (val_xor < k && val_xor > max_xor) {
                max_xor = val_xor;
            }
        }
    }

    // Print the maximum values on new lines
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
    return 0;
}
