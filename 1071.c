//https://judge.beecrowd.com/en/problems/view/1071
#include <stdio.h>

int main() {
    int X, Y, sum_odd = 0;
    scanf("%d %d", &X, &Y);

    int start = (X < Y) ? X : Y;
    int end = (X > Y) ? X : Y;

    for (int i = start + 1; i < end; i++) {
        if (i % 2 != 0) {
            sum_odd += i;
        }
    }

    printf("%d\n", sum_odd);
    return 0;
}