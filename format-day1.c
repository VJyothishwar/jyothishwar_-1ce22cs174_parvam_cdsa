#include <stdio.h>

int main() {
    float num;
    int int_part;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    int_part = (int)num;

    printf("Original floating-point number: %.2f\n", num);
    printf("Integer part after type casting: %d\n", int_part);

    return 0;
}