//https://judge.beecrowd.com/en/problems/view/1047
#include <stdio.h>

int main()
{
    int initialHour, initialMinute, finalHour, finalMinute;
    int durationHours, durationMinutes;

    scanf("%d %d %d %d", &initialHour, &initialMinute, &finalHour, &finalMinute);

    int totalInitialMinutes = initialHour * 60 + initialMinute;
    int totalFinalMinutes = finalHour * 60 + finalMinute;

    int totalDurationMinutes;
    if (totalFinalMinutes > totalInitialMinutes) {
        totalDurationMinutes = totalFinalMinutes - totalInitialMinutes;
    } else {
        totalDurationMinutes = (24 * 60 - totalInitialMinutes) + totalFinalMinutes;
    }

    if (totalInitialMinutes == totalFinalMinutes && totalDurationMinutes == 0) {
        totalDurationMinutes = 24 * 60;
    }

    durationHours = totalDurationMinutes / 60;
    durationMinutes = totalDurationMinutes % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHours, durationMinutes);

    return 0;
}