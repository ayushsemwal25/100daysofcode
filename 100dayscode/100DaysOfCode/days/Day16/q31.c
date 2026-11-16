#include <stdio.h>

int main() {
    unsigned int n;
    printf("Enter a positive integer: ");
    scanf("%u", &n);

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int started = 0;
    printf("Binary: ");
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit == 1) started = 1;
        if (started) printf("%d", bit);
    }
    printf("\n");
    return 0;
}