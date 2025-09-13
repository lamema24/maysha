//https://judge.beecrowd.com/en/problems/view/1060
#include<stdio.h>

int main() 
{
    int count_positive = 0;
    double num;

    for (int i = 0; i < 6; i++) {
        scanf("%lf", &num);
        if (num > 0) {
            count_positive++;
        }
    }

    printf("%d valores positivos\n", count_positive);

    return 0;
}