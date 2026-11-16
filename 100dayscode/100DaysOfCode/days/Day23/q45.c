#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        double num = 2.0 * i;
        double den = 4.0 * i - 1.0;
        sum += (num / den);
    }

    printf("Sum: %f\n", sum);
    return 0;
}