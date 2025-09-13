//https://judge.beecrowd.com/en/problems/view/1046
#include<stdio.h>

int main() 
{
    int start_time, end_time;
    scanf("%d %d", &start_time, &end_time);

    int duration;
    if (start_time < end_time) {
        duration = end_time - start_time;
    } else {
        duration = (24 - start_time) + end_time;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}