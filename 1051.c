//https://judge.beecrowd.com/en/problems/view/1051
#include <stdio.h>

int main() {
    double salary;
    scanf("%lf", &salary);

    double tax = 0.0;

    if (salary <= 2000.00) {
        printf("Isento\n");
    } else if (salary <= 3000.00) {
        tax = (salary - 2000.00) * 0.08;
        printf("R$ %.2f\n", tax);
    } else if (salary <= 4500.00) {
        tax = (1000.00 * 0.08) + ((salary - 3000.00) * 0.18);
        printf("R$ %.2f\n", tax);
    } else {
        tax = (1000.00 * 0.08) + (1500.00 * 0.18) + ((salary - 4500.00) * 0.28);
        printf("R$ %.2f\n", tax);
    }

    return 0;
}