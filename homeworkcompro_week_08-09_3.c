#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
 
        // เว้นช่องว่างด้านหน้า
        for (j = 1; j <=5 - i; j++) {
            printf(" ");

        }

        // แสดงดาว
        for (j = 1; j <=2 * -1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}