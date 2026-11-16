#include <stdio.h>

int main() {
    long long bin, temp, place = 1, comp = 0;
    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    temp = bin;
    while (temp > 0) {
        int d = temp % 10;
        int flipped = (d == 1) ? 0 : 1;
        comp = comp + (flipped * place);
        place *= 10;
        temp /= 10;
    }

    printf("1's complement: %lld\n", comp);
    return 0;
}