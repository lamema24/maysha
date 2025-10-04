//https://judge.beecrowd.com/en/problems/view/1048
#include <stdio.h>

int main() {
    float salary, new_salary, money_earned;
    int percentage;

    scanf("%f", &salary);

    if (salary >= 0 && salary <= 400.00) {
        percentage = 15;
    } else if (salary > 400.00 && salary <= 800.00) {
        percentage = 12;
    } else if (salary > 800.00 && salary <= 1200.00) {
        percentage = 10;
    } else if (salary > 1200.00 && salary <= 2000.00) {
        percentage = 7;
    } else { // salary > 2000.00
        percentage = 4;
    }

    money_earned = salary * (percentage / 100.0);
    new_salary = salary + money_earned;

    printf("Novo salario: %.2f\n", new_salary);
    printf("Reajuste ganho: %.2f\n", money_earned);
    printf("Em percentual: %d %%\n", percentage);

    return 0;
}