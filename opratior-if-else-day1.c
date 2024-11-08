#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    // Check if the number is between 10 and 20 and is even
    if (number >= 10 && number <= 20 && number % 2 == 0) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }
    return 0;
}