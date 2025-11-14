#include <stdio.h>

void input(int number) {
    printf("The number was: %d\n", number);
}

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    input(number);
    return 0;
}
