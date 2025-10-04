//https://judge.beecrowd.com/en/problems/view/1078
#include<stdio.h>

int main() 
{
    int N;
    scanf("%d", &N); // Read the integer N

    // Loop from 1 to 10 to print the multiplication table
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, N, i * N);
    }

    return 0;
}