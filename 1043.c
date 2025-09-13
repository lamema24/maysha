//https://judge.beecrowd.com/en/problems/view/1043
#include<stdio.h>

int main() 
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    // Check if it's a valid triangle
    if ((A < B + C) && (B < A + C) && (C < A + B)) {
        double perimeter = A + B + C;
        printf("Perimetro = %.1lf\n", perimeter);
    } else {
        double area = ((A + B) * C) / 2.0;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}