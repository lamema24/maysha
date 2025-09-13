//https://judge.beecrowd.com/en/problems/view/1049
#include <stdio.h>
#include <string.h>

int main() {
    char word1[20], word2[20], word3[20];

    scanf("%s", word1);
    scanf("%s", word2);
    scanf("%s", word3);

    if (strcmp(word1, "vertebrado") == 0) {
        if (strcmp(word2, "ave") == 0) {
            if (strcmp(word3, "carnivoro") == 0) {
                printf("aguia\n");
            } else { // onivoro
                printf("pomba\n");
            }
        } else { // mamifero
            if (strcmp(word3, "onivoro") == 0) {
                printf("homem\n");
            } else { // herbivoro
                printf("vaca\n");
            }
        }
    } else { // invertebrado
        if (strcmp(word2, "inseto") == 0) {
            if (strcmp(word3, "hematofago") == 0) {
                printf("pulga\n");
            } else { // herbivoro
                printf("lagarta\n");
            }
        } else { // anelideo
            if (strcmp(word3, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else { // onivoro
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
