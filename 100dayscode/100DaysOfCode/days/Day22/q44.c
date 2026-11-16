#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            double num = 2 * i - 1;
            double den = 2 * i;
            sum += (num / den);
        }
    }

    printf("Sum: %f\n", sum);
    return 0;
}