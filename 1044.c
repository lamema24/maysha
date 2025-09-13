//https://judge.beecrowd.com/en/problems/view/1044
#include<stdio.h>

int main() 
{
    int A, B;

    scanf("%d %d", &A, &B); 

    if (A % B == 0 || B % A == 0) {
        printf("Sao Multiplos\n"); 
    } else {
        printf("Nao sao Multiplos\n"); // Otherwise, print "Nao sao Multiplos"
    }

    return 0; 
}
