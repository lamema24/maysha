//https://judge.beecrowd.com/en/problems/view/1064
#include <stdio.h>

int main() {
    float num;
    float sum_positives = 0.0;
    int count_positives = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%f", &num);
        if (num > 0) {
            sum_positives += num;
            count_positives++;
        }
    }

    printf("%d valores positivos\n", count_positives);
    if (count_positives > 0) { // Avoid division by zero if no positives
        printf("%.1f\n", sum_positives / count_positives);
    }

    return 0;
}