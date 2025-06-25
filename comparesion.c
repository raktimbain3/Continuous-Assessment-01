#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userNum, compNum;
    char tryAgain;

    // Initialize random number generator
    srand(time(0));

    do {
        do {
            printf("Enter a number (1-100): ");
            scanf("%d", &userNum);
            if (userNum < 1 || userNum > 100) {
                printf("Error: Number out of range!\n");
            }
        } while (userNum < 1 || userNum > 100);

        compNum = (rand() % 100) + 1;
        printf("Computer-generated number: %d\n", compNum);

        if (compNum > userNum) {
            printf("%d is greater than %d.\n", compNum, userNum);
        } else if (compNum < userNum) {
            printf("%d is less than %d.\n", compNum, userNum);
        } else {
            printf("Numbers are equal.\n");
        }

        if (compNum % 2 == 0) {
            printf("%d is even.\n", compNum);
        } else {
            printf("%d is odd.\n", compNum);
        }

        printf("Try again? (y/n): ");
        scanf(" %c", &tryAgain);

    } while (tryAgain == 'y' || tryAgain == 'Y');

    return 0;
}
