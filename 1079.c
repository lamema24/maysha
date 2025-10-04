//https://judge.beecrowd.com/en/problems/view/1079
#include<stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);

    while (N > 0) {
        float a, b, c;
        scanf("%f %f %f", &a, &b, &c);

        float weightedAverage = ((a * 2) + (b * 3) + (c * 5)) / 10.0; 

        printf("%.1f\n", weightedAverage);
        N--;
    }

    return 0;
}