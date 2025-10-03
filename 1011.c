//https://judge.beecrowd.com/en/problems/view/1011
#include<stdio.h>
#include<math.h>

int main() 
{
    double R, volume;
    double pi = 3.14159;

    scanf("%lf", &R);

    volume = (4.0/3.0) * pi * pow(R, 3);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}