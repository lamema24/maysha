//https://judge.beecrowd.com/en/problems/view/1040
#include<stdio.h>

int main() 
{
    double n1, n2, n3, n4, exam, avg, final_avg;
    
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    avg = (n1*2 + n2*3 + n3*4 + n4*1) / 10.0;

    printf("Media: %.1lf\n", avg);

    if (avg >= 7.0) {
        printf("Aluno aprovado.\n");
    } 
    else if (avg < 5.0) {
        printf("Aluno reprovado.\n");
    } 
    else {
        printf("Aluno em exame.\n");
        scanf("%lf", &exam);
        printf("Nota do exame: %.1lf\n", exam);
        
        final_avg = (avg + exam) / 2.0;

        if (final_avg >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", final_avg);
    }

    return 0;
}