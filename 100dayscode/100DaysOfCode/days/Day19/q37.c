#include <stdio.h>

int main() {
    int a, b, x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int gcd = x;
    long long lcm = ((long long)a * b) / gcd;

    printf("LCM: %lld\n", lcm);
    return 0;
}