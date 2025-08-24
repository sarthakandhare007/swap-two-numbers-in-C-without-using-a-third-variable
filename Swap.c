#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a + b;  // step 1
    b = a - b;  // step 2
    a = a - b;  // step 3

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
