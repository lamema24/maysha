//https://judge.beecrowd.com/en/problems/view/1045
#include <stdio.h>
#include <math.h>
#include <stdlib.h> // For qsort

// Comparison function for qsort to sort in descending order
int compare(const void *a, const void *b) {
    double valA = *(const double *)a;
    double valB = *(const double *)b;
    if (valA < valB) return 1;
    if (valA > valB) return -1;
    return 0;
}

int main() {
    double sides[3];
    scanf("%lf %lf %lf", &sides[0], &sides[1], &sides[2]);

    qsort(sides, 3, sizeof(double), compare);

    double A = sides[0];
    double B = sides[1];
    double C = sides[2];

    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (A * A == B * B + C * C) {
            printf("TRIANGULO RETANGULO\n");
        } else if (A * A > B * B + C * C) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else { 
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (A == B || B == C || A == C) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
