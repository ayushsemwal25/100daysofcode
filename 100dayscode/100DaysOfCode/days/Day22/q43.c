#include <stdio.h>

int main() {
    int n, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        int fact = 1;
        for (int i = 1; i <= d; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if (sum == n && n > 0)
        printf("%d is a strong number.\n", n);
    else
        printf("%d is not a strong number.\n", n);

    return 0;
}