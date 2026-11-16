#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digits = 0, first, last;
    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    temp = n;
    while (temp >= 10) {
        digits++;
        temp /= 10;
    }
    first = temp;

    if (digits == 0) {
        printf("Swapped: %d\n", n);
        return 0;
    }

    int p = (int)round(pow(10, digits));
    int middle = (n % p) / 10;
    int swapped = (last * p) + (middle * 10) + first;

    printf("Swapped: %d\n", swapped);
    return 0;
}