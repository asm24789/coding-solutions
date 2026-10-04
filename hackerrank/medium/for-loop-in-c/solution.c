#include <stdio.h>

int main() 
{
    int a, b;
    // Read the range [a, b]
    scanf("%d\n%d", &a, &b);

    // Array storing word representations for numbers 1 through 9
    char *words[] = {
        "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    // Iterate through all numbers from a to b inclusive
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            printf("%s\n", words[i - 1]);
        } else if (i % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

    return 0;
}
