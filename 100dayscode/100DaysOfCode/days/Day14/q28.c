#include <stdio.h>

int main() {
    int n;
    long long prod = 1;
    int found = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        prod *= i;
        found = 1;
    }

    if (found)
        printf("Product = %lld\n", prod);
    else
        printf("No even numbers in the range.\n");

    return 0;
}