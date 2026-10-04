#include <stdio.h>

int main() 
{
    int n;
    // Read the input integer n
    scanf("%d", &n);

    // Array storing word representations for numbers 1 through 9
    char *words[] = {
        "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    // Check if n is between 1 and 9 inclusive
    if (n >= 1 && n <= 9) {
        printf("%s\n", words[n - 1]);
    } else if (n > 9) {
        printf("Greater than 9\n");
    }

    return 0;
}
