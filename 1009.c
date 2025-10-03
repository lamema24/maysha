//https://judge.beecrowd.com/en/problems/view/1009
#include<stdio.h>

int main() 
{
    char name[50];
    double fixed_salary;
    double total_sales;
    double total_salary;

    scanf("%s", name);
    scanf("%lf %lf", &fixed_salary, &total_sales);

    total_salary = fixed_salary + (total_sales * 0.15);

    printf("TOTAL = R$ %.2f\n", total_salary);

    return 0;
}