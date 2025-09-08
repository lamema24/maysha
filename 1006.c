//https://judge.beecrowd.com/en/problems/view/1006
#include<stdio.h>

int main() 
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    double average = (A * 2.0 + B * 3.0 + C * 5.0) / 10.0;
    printf("MEDIA = %.1lf\n", average);
    return 0;
}