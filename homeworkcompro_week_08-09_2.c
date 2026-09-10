#include <stdio.h>

int main() {
    int score;
    int total = 0;

    do {
        printf("Enter score: ");
        scanf("%d" , &score);

        if (score != -1) {
            total = total + score;
        }

    } while (score !=-1);

    printf("Total score = %d", total);

    return 0;
}