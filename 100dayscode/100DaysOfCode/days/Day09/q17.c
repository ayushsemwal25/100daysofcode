#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, disc, r1, r2, realPart, imagPart;
    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    disc = b * b - 4 * a * c;

    if (disc > 0) {
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", r1, r2);
    } else if (disc == 0) {
        r1 = -b / (2 * a);
        printf("Roots are real and equal: %.2f and %.2f\n", r1, r1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-disc) / (2 * a);
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}