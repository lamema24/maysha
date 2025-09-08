//https://judge.beecrowd.com/en/problems/view/1018
#include<stdio.h>

int main() 
{
    int N;
    int banknotes[] = {100, 50, 20, 10, 5, 2, 1};
    int counts[7];

    scanf("%d", &N);
    printf("%d\n", N);

    int temp_N = N;
    for (int i = 0; i < 7; i++) {
        counts[i] = temp_N / banknotes[i];
        temp_N %= banknotes[i];
    }

    printf("%d nota(s) de R$ 100,00\n", counts[0]);
    printf("%d nota(s) de R$ 50,00\n", counts[1]);
    printf("%d nota(s) de R$ 20,00\n", counts[2]);
    printf("%d nota(s) de R$ 10,00\n", counts[3]);
    printf("%d nota(s) de R$ 5,00\n", counts[4]);
    printf("%d nota(s) de R$ 2,00\n", counts[5]);
    printf("%d nota(s) de R$ 1,00\n", counts[6]);

    return 0;
}
