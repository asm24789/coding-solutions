#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    float fnum1, fnum2;

    // Read inputs without any prompt text
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &fnum1, &fnum2);

    // Output integer sum and difference
    printf("%d %d\n", num1 + num2, num1 - num2);

    // Output float sum and difference rounded to 1 decimal place
    printf("%.1f %.1f\n", fnum1 + fnum2, fnum1 - fnum2);

    return 0;
}
