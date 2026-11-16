#include <stdio.h>

int main() {
    int n, has_odd = 0;
    long long prod = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) n = -n;

    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0) {
            prod *= d;
            has_odd = 1;
        }
        n /= 10;
    }

    if (has_odd)
        printf("Product of odd digits: %lld\n", prod);
    else
        printf("No odd digits found.\n");

    return 0;
}