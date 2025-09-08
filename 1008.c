//https://judge.beecrowd.com/en/problems/view/1008
#include<stdio.h>

int main() 
{
    int employeeNumber;
    int workedHours;
    double amountPerHour;
    double salary;

    scanf("%d", &employeeNumber);
    scanf("%d", &workedHours);
    scanf("%lf", &amountPerHour);

    salary = workedHours * amountPerHour;

    printf("NUMBER = %d\n", employeeNumber);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}