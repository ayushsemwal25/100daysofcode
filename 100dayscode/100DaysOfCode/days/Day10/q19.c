#include <stdio.h>

int main() {
    double s1, s2, s3;
    printf("Enter three sides of the triangle: ");
    scanf("%lf %lf %lf", &s1, &s2, &s3);

    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {
        if (s1 == s2 && s2 == s3)
            printf("Equilateral Triangle\n");
        else if (s1 == s2 || s2 == s3 || s1 == s3)
            printf("Isosceles Triangle\n");
        else
            printf("Scalene Triangle\n");
    } else {
        printf("Invalid triangle sides.\n");
    }

    return 0;
}