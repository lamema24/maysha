//https://judge.beecrowd.com/en/problems/view/1074
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the number of test cases

    for (int i = 0; i < N; i++) {
        int X;
        scanf("%d", &X); // Read each integer X

        if (X == 0) {
            printf("NULL\n");
        } else if (X % 2 == 0) { // Check if X is even
            if (X > 0) { // Check if X is positive
                printf("EVEN POSITIVE\n");
            } else { // X is negative
                printf("EVEN NEGATIVE\n");
            }
        } else { // X is odd
            if (X > 0) { // Check if X is positive
                printf("ODD POSITIVE\n");
            } else { // X is negative
                printf("ODD NEGATIVE\n");
            }
        }
    }

    return 0;
}
