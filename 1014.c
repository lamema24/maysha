//https://judge.beecrowd.com/en/problems/view/1014
#include<stdio.h>

int main() 
{
    int X;
    double Y;

    scanf("%d", &X);
    scanf("%lf", &Y);

    double consumption = X / Y;

    printf("%.3f km/l\n", consumption);

    return 0;
}