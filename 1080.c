//https://judge.beecrowd.com/en/problems/view/1080
#include<stdio.h>

int main() 
{
    int highestValue = 0;
    int position = 0;
    int num;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &num);
        if (num > highestValue) {
            highestValue = num;
            position = i;
        }
    }

    printf("%d\n", highestValue);
    printf("%d\n", position);

    return 0;
}