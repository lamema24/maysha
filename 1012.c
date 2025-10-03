//https://judge.beecrowd.com/en/problems/view/1012
#include<stdio.h>
#include<math.h>

#define PI 3.14159

int main() 
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double area_triangle = (A * C) / 2.0;
    double area_circle = PI * C * C;
    double area_trapezium = ((A + B) * C) / 2.0;
    double area_square = B * B;
    double area_rectangle = A * B;

    printf("TRIANGULO: %.3lf\n", area_triangle);
    printf("CIRCULO: %.3lf\n", area_circle);
    printf("TRAPEZIO: %.3lf\n", area_trapezium);
    printf("QUADRADO: %.3lf\n", area_square);
    printf("RETANGULO: %.3lf\n", area_rectangle);

    return 0;