//https://judge.beecrowd.com/en/problems/view/1010
#include<stdio.h>

int main() 
{
    int code1, code2, units1, units2;
    double price1, price2, total;

    // Read first product (code, units, price)
    scanf("%d %d %lf", &code1, &units1, &price1);

    // Read second product (code, units, price)
    scanf("%d %d %lf", &code2, &units2, &price2);

    // Calculate total price
    total = (units1 * price1) + (units2 * price2);

    // Print result with 2 decimal places
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}